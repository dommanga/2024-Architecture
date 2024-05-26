
`include "CLOG2.v"

`define S_IDLE 2'b00 
`define S_CMP 2'b01 
`define S_ALLOC 2'b10 
`define S_WB 2'b11


module Cache #(parameter LINE_SIZE = 16,
               parameter NUM_SETS = 8,
               parameter NUM_WAYS = 2,
               parameter TAG_SIZE = 25,
               parameter IDX_SIZE = 3,
               parameter B_OFFSET = 2) (
    input reset,
    input clk,

    input is_input_valid,
    input [31:0] addr,
    input mem_rw,
    input [31:0] din,

    output is_ready,
    output is_output_valid,
    output [31:0] dout,
    output is_hit);

  integer i;

  // Wire declarations
  wire is_dmem_ready;
  wire is_dmem_output_valid;
  wire [3:0] clog2 = `CLOG2(LINE_SIZE);
  wire [LINE_SIZE * 8 - 1:0] dout_dmem;

  wire [TAG_SIZE - 1:0] tag = addr[31:7];
  wire [IDX_SIZE - 1:0] idx = addr[6:4];
  wire [B_OFFSET - 1:0] bo = addr[3:2];
  wire [LINE_SIZE * 8 - 1:0] data_BUS;
  wire hit_way; // will be used only when is_hit is true.

  // Reg declarations
  reg [1:0] current_state;
  reg [1:0] next_state;
  reg [31:0] addr_dmem;
  reg [LINE_SIZE * 8 - 1:0] din_dmem;

  reg [TAG_SIZE - 1:0] TagBank[0:NUM_SETS - 1] [0:NUM_WAYS - 1];
  reg is_valid[0:NUM_SETS - 1] [0:NUM_WAYS - 1];
  reg is_dirty[0:NUM_SETS - 1] [0:NUM_WAYS - 1];
  reg [LINE_SIZE * 8 - 1:0] DataBank[0:NUM_SETS - 1] [0:NUM_WAYS - 1];

  reg LRU[0:NUM_SETS - 1];
  reg flip_LRU, cache_write, is_dmem_input_valid, dmem_read, dmem_write, cache_alloc, cache_clean;

  // assignments
  assign is_ready = (next_state == `S_IDLE);
  assign is_output_valid = (current_state == `S_CMP); // we have valid output (hit or miss info)
  assign is_hit =
  (tag == TagBank[idx][0] && is_valid[idx][0]) ||
  (tag == TagBank[idx][1] && is_valid[idx][1]);
  assign hit_way = (tag == TagBank[idx][1]);

  assign data_BUS = (tag == TagBank[idx][0]) ? DataBank[idx][0] : DataBank[idx][1];

  mux_4_to_1 bo_mux (
    .A (data_BUS[31:0]),    // input
    .B (data_BUS[63:32]),  // input
    .C (data_BUS[95:64]),  // input
    .D (data_BUS[127:96]),  // input
    .control (bo),  // input
    .result (dout) // output
  );

  // asynchronous State Transition (Cache FSM)
  always @(*) begin
    case (current_state)
      `S_IDLE:
        if (is_input_valid)
          next_state = `S_CMP;
        else
          next_state = `S_IDLE;
      `S_CMP:
        if (is_hit)
          next_state = `S_IDLE;
        else // miss
          if (is_dirty[idx][LRU[idx]])
            next_state = `S_WB;
          else
            next_state = `S_ALLOC;
      `S_ALLOC:
        if (is_dmem_ready)
          next_state = `S_CMP;
        else
          next_state = `S_ALLOC;
      `S_WB: 
        if (is_dmem_ready)
          next_state = `S_ALLOC;
        else
          next_state = `S_WB;
      default: 
        next_state = `S_IDLE;
    endcase
  end

  // asynchronous Cache controller
  always @(*) begin

    // initialize control signals.
    flip_LRU = 0;
    cache_write = 0;
    is_dmem_input_valid = 0;
    cache_alloc = 0;
    cache_clean = 0;
    
    case (current_state)

      `S_CMP: begin
        if (is_hit) begin
          if (hit_way == LRU[idx])
            flip_LRU = 1;
          
          if (mem_rw == 1) // write
            cache_write = 1;
        end
        else begin // miss - need to set input information to use DMEM
          if (next_state == `S_WB) begin
              is_dmem_input_valid = 1;
              addr_dmem = {TagBank[idx][LRU[idx]], idx,2'b00, 2'b00};
              dmem_read = 0;
              dmem_write = 1;
              din_dmem = DataBank[idx][LRU[idx]];
          end
          else begin // next state == `S_ALLOC
            is_dmem_input_valid = 1;
            addr_dmem = addr;
            dmem_read = 1;
            dmem_write = 0;
          end
        end
      end

      `S_ALLOC: begin
        if (is_dmem_ready) // when read(memory) finished
          cache_alloc = 1;
      end

      `S_WB: begin //need to set input information to use DMEM
        if (next_state == `S_ALLOC) begin
            is_dmem_input_valid = 1;
            addr_dmem = addr;
            dmem_read = 1;
            dmem_write = 0;
        end

        if (is_dmem_ready) // when write(memory) finished
          cache_clean = 1;
      end

      default: begin
        flip_LRU = 0;
        cache_write = 0;
        is_dmem_input_valid = 0;
        cache_alloc = 0;
        cache_clean = 0;
      end
    
    endcase
  end

  // synchronously update FSM.
  always @(posedge clk) begin
    if (reset)
      current_state <= `S_IDLE;
    else
      current_state <= next_state;
  end

  // synchronously update cache information along the  control sigs.
  always @(posedge clk) begin
    if (reset) begin
      for (i = 0; i < NUM_SETS; i = i + 1) begin
            /* verilator lint_off BLKSEQ */
            TagBank[i][0] = 25'b0;
            TagBank[i][1] = 25'b0;

            is_valid[i][0] = 0;
            is_valid[i][1] = 0;

            is_dirty[i][0] = 0;
            is_dirty[i][1] = 0;

            DataBank[i][0] = 128'b0;
            DataBank[i][1] = 128'b0;
            
            LRU[i] = 0;
            /* verilator lint_on BLKSEQ */
      end
    end
    else begin
      if (flip_LRU)
        LRU[idx] <= ~LRU[idx];
      
      if (cache_write) begin // update cache data and set dirty.
        case (bo)
          2'b00: DataBank[idx][hit_way][31:0] <= din;
          2'b01: DataBank[idx][hit_way][63:32] <= din;
          2'b10: DataBank[idx][hit_way][95:64] <= din;
          2'b11: DataBank[idx][hit_way][127:96] <= din;
        endcase
        
        is_dirty[idx][hit_way] <= 1;
      end

      if (cache_alloc) begin
        TagBank[idx][LRU[idx]] <= tag;
        is_valid[idx][LRU[idx]] <= 1;
        DataBank[idx][LRU[idx]] <= dout_dmem;
      end

      if (cache_clean) begin
        TagBank[idx][LRU[idx]] <= 25'b0;
        is_valid[idx][LRU[idx]] <= 0;
        is_dirty[idx][LRU[idx]] <= 0;
        DataBank[idx][LRU[idx]] <= 128'b0;
      end
    end
  end


  // Instantiate data memory
  DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
    .reset(reset),
    .clk(clk),

    .is_input_valid(is_dmem_input_valid),
    .addr(addr_dmem >> clog2),        // NOTE: address must be shifted by CLOG2(LINE_SIZE)
    .mem_read(dmem_read),
    .mem_write(dmem_write),
    .din(din_dmem),

    // is output from the data memory valid?
    .is_output_valid(is_dmem_output_valid),
    .dout(dout_dmem),
    // is data memory ready to accept request?
    .mem_ready(is_dmem_ready)
  );
endmodule
