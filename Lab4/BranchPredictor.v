

// 2-Bit Saturation Counter
`define strong_T 2'b11
`define weak_T 2'b10
`define weak_NT 2'b01
`define strong_NT 2'b00


module BranchPredictor #(
    parameter tag_size = 25
    parameter idx_size = 5
    parameter entry_size = 32
) 
(
    input reset,
    input clk,
    input [31:0] current_pc,
    input update_B_history,
    input update_B_target,
    input [31:0] ID_EX_PC,
    input [31:0] actual_pc,
    input actual_taken,
    output is_taken, // jump or bcond is true
    output [31:0] pred_pc    
);

integer i;

wire [idx_size - 1 : 0] idx = current_pc[6:2]; // addresses are 4-bytes aligned (ignore lower 2-bits)
wire [tag_size - 1 : 0] tag = current_pc[31:7];
wire [idx_size - 1 : 0] pht_idx;
wire [31:0] not_taken_pc;

/*--- for updating predictor after check ---*/
wire [idx_size - 1 : 0] ID_EX_idx = ID_EX_PC[6:2];
wire [tag_size - 1 : 0] ID_EX_tag = ID_EX_PC[31:7];
wire [idx_size - 1 : 0] ID_EX_pht_idx;


// branch predictor registers
reg [idx_size - 1 : 0] BHSR;    // branch history shift register
reg [31:0] BTB[0 : entry_size - 1]; // branch target buffer
reg [tag_size - 1 : 0] TAG_table[0 : entry_size - 1]; // tag buffer
reg [1:0] PHT[0 : entry_size - 1]; // patter history table stores 2-bit saturation counter


// asynchronously predict branch condition
assign pht_idx = idx ^ BHSR;
assign is_taken = (tag == TAG_table[idx]) && PHT[pht_idx][1]; // taken case is determined by upper-bit in saturation counter


/*--- for updating predictor after check ---*/
assign ID_EX_pht_idx = ID_EX_idx ^ BHSR;


adder Add_PC_4_NT (
    .in_1(current_pc),  // input
    .in_2(4),  // input
    .out(not_taken_pc)    //output
);

// asynchronously predict branch target
mux_2_to_1 is_taken_mux (
    .A (not_taken_pc),  // input
    .B (BTB[idx]),  // input
    .Enable (is_taken), // input
    .C (pred_pc)   // output (predicted next pc)
);

// Synchronously update prediction registers.
always @(posedge clk) begin
    if (reset) begin
        BHSR <= 5'b0;
        for (i = 0; i < entry_size; i = i + 1) begin
            /* verilator lint_off BLKSEQ */
            BTB[i] = 32'b0; // initialize BTB as empty
            TAG_table[i] = tag_size'b0;
            PHT[i] = `strong_T; // it is more useful in case of loop, and jump instructions
            /* verilator lint_on BLKSEQ */
        end
    end

    // Update(write)
    else begin
        if (update_B_history) begin
            // update PHT
            if (actual_taken)
                if (PHT[ID_EX_pht_idx] == `strong_T)
                    PHT[ID_EX_pht_idx] <= `strong_T;
                else
                    PHT[ID_EX_pht_idx] <= PHT[ID_EX_pht_idx] + 1;
            else // actually not taken
                if (PHT[ID_EX_pht_idx] == `strong_NT)
                    PHT[ID_EX_pht_idx] <= `strong_NT;
                else
                    PHT[ID_EX_pht_idx] <= PHT[ID_EX_pht_idx] - 1;
            
            // update BHSR
            BHSR <= (BHSR << 1) + actual_taken;
        end

        if (update_B_target) begin
            // update tag and BTB
            if (TAG_table[ID_EX_idx] != ID_EX_tag || BTB[ID_EX_idx] != actual_pc) begin
                TAG_table[ID_EX_idx] <= ID_EX_tag;
                BTB[ID_EX_idx] <= actual_pc;
            end
        end

    end
end

    
endmodule
