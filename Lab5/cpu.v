// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify modules (except InstMemory, DataMemory, and RegisterFile)
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required
`define WordBit 32

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted,  // Whehther to finish simulation
           output [31:0]print_reg[0:31]); // Whehther to finish simulation
  /***** Wire declarations *****/
  wire PCWrite, is_hazard, IF_ID_inst_write; // Hazard detection unit

  // Cache unit
  wire is_hit, is_output_valid, is_input_valid, mem_rw;
  wire [`WordBit-1:0] Cache_d_out;
  wire CacheStall; // stall the whole pipeline registers when Cache needs Write/Read 
 
 
  // Control unit
  reg is_ecall, mem_read, mem_to_reg, mem_write, write_enable, pc_to_reg, is_jal, is_jalr, branch, actual_taken, pred_taken, update_B_history, update_B_target;
  reg [1:0] alu_src_B;
 

  // Forwarding Unit
  wire [1:0] forwardA, forwardB;
  wire [`WordBit-1:0] forwardA_mux_out, forwardB_mux_out;

  // PC, Imem, Branch Predictor
  wire [`WordBit-1:0] next_pc, current_pc, dout;

 // PC Value
  wire [`WordBit-1:0] actual_pc, pred_pc;

 // Register File
  wire [`WordBit-1:0] rd_din, rs1_dout, rs2_dout, rs1_17;
  wire [4:0] rs1_in;

  // immediate value
  wire [`WordBit-1:0] imm_gen_out;

  // ALU
  wire [`WordBit-1:0] alu_result, ALUSrc_A_mux_out, ALUSrc_B_mux_out;
  wire alu_bcond;

  // alu ctrl unit
  wire [3:0] alu_op; 

  wire [`WordBit-1:0] mem_data_out; // Dmem

  wire miss; // Miss Prediction Unit signal


  /***** Register declarations *****/
  // You need to modify the width of registers
  // In addition, 
  // 1. You might need other pipeline registers that are not described below
  // 2. You might not need registers described below
  /***** IF/ID pipeline registers *****/
  reg [31:0] IF_ID_inst;           // will be used in ID stage
  reg [31:0] IF_ID_PC;          // will be used in ID stage
  reg [31:0] IF_ID_pred_PC;          // will be used in EX stage
  reg IF_ID_miss;          // will be used in ID stage
  reg IF_ID_pred_taken;          // will be used in EX stage

  /***** ID/EX pipeline registers *****/
  // From the control unit
  reg [1:0] ID_EX_alu_src_B;        // will be used in EX stage
  reg ID_EX_is_jal;        // will be used in EX stage
  reg ID_EX_is_jalr;        // will be used in EX stage
  reg ID_EX_branch;      // will be used in EX stage
  reg ID_EX_mem_write;      // will be used in MEM stage
  reg ID_EX_mem_read;       // will be used in MEM stage
  reg ID_EX_mem_to_reg;     // will be used in WB stage
  reg ID_EX_reg_write;      // will be used in WB stage
  reg ID_EX_is_halted;      // will be used in WB stage
  reg ID_EX_pc_to_reg;      // will be used in WB stage

  // From others
  reg [4:0] ID_EX_rs1;  // will be used in hazard detection
  reg [4:0] ID_EX_rs2;  // will be used in hazard detection
  reg [31:0] ID_EX_rs1_data;
  reg [31:0] ID_EX_rs2_data;
  reg [31:0] ID_EX_imm;
  reg [31:0] ID_EX_ALU_ctrl_unit_input;
  reg [4:0] ID_EX_rd;
  reg [31:0] ID_EX_PC; 
  reg [31:0] ID_EX_pred_PC;          // will be used in EX stage
  reg ID_EX_pred_taken;


  /***** EX/MEM pipeline registers *****/
  // From the control unit
  reg EX_MEM_mem_write;      // will be used in MEM stage
  reg EX_MEM_mem_read;       // will be used in MEM stage
  reg EX_MEM_is_halted;      // will be used in WB stage
  reg EX_MEM_pc_to_reg;      // will be used in WB stage

  reg EX_MEM_mem_to_reg;    // will be used in WB stage
  reg EX_MEM_reg_write;     // will be used in WB stage
  // From others
  reg [31:0] EX_MEM_alu_out;
  reg [31:0] EX_MEM_dmem_data;
  reg [4:0] EX_MEM_rd;


  /***** MEM/WB pipeline registers *****/
  // From the control unit
  reg MEM_WB_mem_to_reg;    // will be used in WB stage
  reg MEM_WB_reg_write;     // will be used in WB stage
  reg MEM_WB_is_halted;     // will be used in WB stage
  reg MEM_WB_pc_to_reg;     // will be used in WB stage

  // From others
  reg [31:0] MEM_WB_mem_to_reg_src_1;
  reg [31:0] MEM_WB_mem_to_reg_src_2;
  reg [4:0] MEM_WB_rd;


  assign rs1_in = is_ecall ? 17 : IF_ID_inst[19:15];
  assign rs1_17 = EX_MEM_rd == 17 ? EX_MEM_alu_out : rs1_dout; // data forwarding
  assign is_halted = MEM_WB_is_halted;
  assign is_input_valid = EX_MEM_mem_read || EX_MEM_mem_write;
  assign mem_rw = EX_MEM_mem_write ? 1 : 0;
  assign CacheStall = is_input_valid && !is_output_valid;


  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .PCWrite(PCWrite && !CacheStall),  // input
    .next_pc(next_pc),     // input
    .current_pc(current_pc)   // output
  );  

  // ----------- Branch Predictor ------------
  BranchPredictor branch_predictor(
    .reset (reset),   // input
    .clk (clk),   // input
    .current_pc (current_pc),   // input
    .update_B_history (update_B_history),   // input
    .update_B_target (update_B_target),   // input
    .ID_EX_PC (ID_EX_PC),   // input
    .actual_pc (actual_pc),   // input
    .actual_taken (actual_taken),   // input
    .pred_taken (pred_taken),   // output
    .pred_pc (pred_pc)   // output
  );

  // ---------- miss mux -------------
  mux_2_to_1 miss_mux (
    .A (pred_pc),    // input
    .B (actual_pc),  // input
    .Enable (miss),   // input
    .C (next_pc)    // output
  );
  
  // ---------- Instruction Memory ----------
  InstMemory imem(
    .reset(reset),   // input
    .clk(clk),     // input
    .addr(current_pc),    // input
    .dout(dout)     // output
  );

  // Update IF/ID pipeline registers here
  always @(posedge clk) begin

    if (reset) begin
      IF_ID_inst <= 0; 
      IF_ID_PC <= 0;
      IF_ID_miss <= 0;
      IF_ID_pred_PC <= 0;
      IF_ID_pred_taken <= 0;
    end 
    else if(CacheStall) begin
    end
    else if (IF_ID_inst_write) begin
      IF_ID_inst <= dout; 
      IF_ID_PC <= current_pc;
      IF_ID_miss <= miss;
      IF_ID_pred_PC <= pred_pc;
      IF_ID_pred_taken <= pred_taken;
    end
   
  end

  // --------- Hazard Detection Unit --------- 
  HazardDetectionUnit hazard_detection_unit(
    .IF_ID_rs1(IF_ID_inst[19:15]),    //input
    .IF_ID_rs2(IF_ID_inst[24:20]),    //input
    .ID_EX_mem_read(ID_EX_mem_read),   //input
    .ID_EX_rd(ID_EX_rd),    //input
    .is_ecall(is_ecall),    //input
    .ID_EX_reg_write(ID_EX_reg_write),    //input
    .is_hazard(is_hazard),   //output
    .IF_ID_inst_write(IF_ID_inst_write),    //output
    .PCWrite(PCWrite)   //output
  );

  // ---------- Register File ----------
  RegisterFile reg_file (
    .reset (reset),        // input
    .clk (clk),          // input
    .rs1 (rs1_in),          // input
    .rs2 (IF_ID_inst[24:20]),          // input
    .rd (MEM_WB_rd),           // input  
    .rd_din (rd_din),       // input
    .write_enable (MEM_WB_reg_write),    // input
    .rs1_dout (rs1_dout),     // output
    .rs2_dout (rs2_dout),      // output
    .print_reg(print_reg)
  );


  // ---------- Control Unit ----------
  ControlUnit ctrl_unit (
    .part_of_inst (IF_ID_inst[6:0]),  // input
    .is_jal(is_jal),      // output
    .is_jalr(is_jalr),      // output
    .branch(branch),      // output
    .mem_read (mem_read),      // output
    .mem_to_reg (mem_to_reg),    // output
    .mem_write (mem_write),     // output
    .alu_src_B (alu_src_B),       // output
    .write_enable (write_enable),  // output
    .pc_to_reg (pc_to_reg),     // output
    .is_ecall (is_ecall)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .part_of_inst (IF_ID_inst),  // input
    .imm_gen_out (imm_gen_out)    // output
  );

  // Update ID/EX pipeline registers here
  always @(posedge clk) begin

    if (reset) ID_EX_is_halted <= 0;
    else ID_EX_is_halted <= is_ecall && (rs1_17 == 10);

    if (reset || is_hazard || miss || IF_ID_miss ) begin
      ID_EX_is_jal <= 0;
      ID_EX_is_jalr <= 0;
      ID_EX_alu_src_B <= 2'b0;      
      ID_EX_mem_write <= 0;    
      ID_EX_mem_read <= 0;     
      ID_EX_mem_to_reg <= 0;   
      ID_EX_reg_write <= 0;   
      ID_EX_branch <= 0;
      ID_EX_pc_to_reg <= 0;
      ID_EX_rs1 <= 0;  
      ID_EX_rs2 <= 0;  
      ID_EX_rs1_data <= 0;
      ID_EX_rs2_data <= 0;
      ID_EX_imm <= 0;
      ID_EX_ALU_ctrl_unit_input <= 0;
      ID_EX_rd <= 0;
      ID_EX_PC <= 0;
      ID_EX_pred_PC <= 0;
      ID_EX_pred_taken <= 0;
    end
    else if(CacheStall) begin
    end
    else begin
      ID_EX_is_jal <= is_jal;
      ID_EX_is_jalr <= is_jalr;
      ID_EX_alu_src_B <= alu_src_B;      
      ID_EX_mem_write <= mem_write;    
      ID_EX_mem_read <= mem_read;     
      ID_EX_mem_to_reg <= mem_to_reg;   
      ID_EX_reg_write <= write_enable;   
      ID_EX_branch <= branch;
      ID_EX_pc_to_reg <= pc_to_reg; 
      ID_EX_rs1 <= IF_ID_inst[19:15];  
      ID_EX_rs2 <= IF_ID_inst[24:20];  
      ID_EX_rs1_data <= rs1_dout;
      ID_EX_rs2_data <= rs2_dout;
      ID_EX_imm <= imm_gen_out;
      ID_EX_ALU_ctrl_unit_input <= IF_ID_inst;
      ID_EX_rd <= IF_ID_inst[11:7];
      ID_EX_PC <= IF_ID_PC;
      ID_EX_pred_PC <= IF_ID_pred_PC;
      ID_EX_pred_taken <= IF_ID_pred_taken;
    end
  end

  // ---------- Forwarding unit ----------
  ForwardingUnit forwarding_unit (
    .ID_EX_rs1(ID_EX_rs1),   // input
    .ID_EX_rs2(ID_EX_rs2),   // input
    .EX_MEM_rd(EX_MEM_rd),   // input
    .MEM_WB_rd(MEM_WB_rd),   // input
    .EX_MEM_reg_write(EX_MEM_reg_write),   // input
    .MEM_WB_reg_write(MEM_WB_reg_write),   // input
    .forwardA (forwardA),  // output
    .forwardB (forwardB)   // output
  );

  // ---------- forwardA_mux ---------- 
  mux_4_to_1 forwardA_mux (
    .A (ID_EX_rs1_data),    // input
    .B (rd_din),  // input
    .C (EX_MEM_alu_out),  // input
    .D (0),  // input
    .control (forwardA),  // input
    .result (forwardA_mux_out) // output
  );

  // ---------- forwardB mux ----------
  mux_4_to_1 forwardB_mux (
    .A (ID_EX_rs2_data),    // input
    .B (rd_din),  // input
    .C (EX_MEM_alu_out),  // input
    .D (0),  // input
    .control (forwardB),  // input
    .result (forwardB_mux_out) // output
  );

  // ---------- ALUSrc mux -------------
  mux_2_to_1 ALUSrc_A_mux (
    .A (forwardA_mux_out),    // input
    .B (ID_EX_PC),  // input
    .Enable (ID_EX_pc_to_reg),   // input
    .C (ALUSrc_A_mux_out)           // output
  );

  // ---------- ALUSrc mux -------------
  mux_4_to_1 ALUSrc_B_mux (
    .A (forwardB_mux_out),    // input
    .B (ID_EX_imm),  // input
    .C (4), // input
    .D (0), // input
    .control (ID_EX_alu_src_B),   // input
    .result (ALUSrc_B_mux_out)           // output
  );

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit (
    .part_of_inst(ID_EX_ALU_ctrl_unit_input),  // input
    .alu_op(alu_op)         // output
  );

  // ---------- ALU ----------
  ALU alu (
    .alu_op(alu_op),      // input
    .alu_in_1(ALUSrc_A_mux_out),    // input  
    .alu_in_2(ALUSrc_B_mux_out),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)     // output
  );

  // ---------- BranchCalculator ----------
  BranchCalculator branch_calculator(
    .ID_EX_PC (ID_EX_PC),  // input
    .ID_EX_rs1_data (ID_EX_rs1_data),  // input
    .ID_EX_imm (ID_EX_imm),  // input
    .alu_bcond (alu_bcond),  // input
    .ID_EX_branch (ID_EX_branch),  // input
    .ID_EX_is_jal (ID_EX_is_jal),  // input
    .ID_EX_is_jalr (ID_EX_is_jalr), // input
    .actual_pc (actual_pc), // output
    .actual_taken (actual_taken),  // output
    .update_B_history (update_B_history),  // output
    .update_B_target (update_B_target)  // output
  );

  //----------- MissDetection unit---------
  MissDetectionUnit Miss_Detection_Unit (
    .actual_taken (actual_taken),   // input
    .ID_EX_pred_taken (ID_EX_pred_taken),   // input
    .ID_EX_pred_PC (ID_EX_pred_PC),      // input
    .actual_pc (actual_pc),      // input
    .miss (miss)      // output
  );

  // Update EX/MEM pipeline registers here
  always @(posedge clk) begin

    if (reset) begin
      EX_MEM_mem_write <= 0;     
      EX_MEM_mem_read <= 0;      
      EX_MEM_mem_to_reg <= 0;    
      EX_MEM_pc_to_reg <= 0;
      EX_MEM_reg_write <= 0;     
      EX_MEM_alu_out <= 0;
      EX_MEM_dmem_data <= 0;
      EX_MEM_rd <= 0;
      EX_MEM_is_halted <= 0;
    end
    else if(CacheStall) begin
    end
      else begin
      EX_MEM_mem_write <= ID_EX_mem_write;     
      EX_MEM_mem_read <= ID_EX_mem_read;      
      EX_MEM_mem_to_reg <= ID_EX_mem_to_reg;   
      EX_MEM_pc_to_reg <= ID_EX_pc_to_reg; 
      EX_MEM_reg_write <= ID_EX_reg_write;     
      EX_MEM_alu_out <= alu_result;
      EX_MEM_dmem_data <= forwardB_mux_out;
      EX_MEM_rd <= ID_EX_rd;
      EX_MEM_is_halted <= ID_EX_is_halted;
    end
  end

  //----------- Cache unit ---------
  Cache cache (
    .reset (reset),   // input
    .clk (clk),   // input
    .is_input_valid (is_input_valid),   // input
    .addr (EX_MEM_alu_out),   // input  
    .mem_rw (mem_rw),      // input
    .din (EX_MEM_dmem_data),      // input
    .is_output_valid (is_output_valid),      // output
    .dout (Cache_d_out),      // output
    .is_hit (is_hit)     // output
  );

  // Update MEM/WB pipeline registers here
  always @(posedge clk) begin
  
    if (reset) begin
      MEM_WB_mem_to_reg <= 0;   
      MEM_WB_reg_write <= 0;    
      MEM_WB_mem_to_reg_src_1 <= 0;
      MEM_WB_mem_to_reg_src_2 <= 0;
      MEM_WB_rd <= 0;
      MEM_WB_pc_to_reg <= 0;
      MEM_WB_is_halted <= 0;
    end
    else if(CacheStall)begin
    end
    else begin
      MEM_WB_mem_to_reg <= EX_MEM_mem_to_reg;   
      MEM_WB_reg_write <= EX_MEM_reg_write;    
      MEM_WB_mem_to_reg_src_1 <= EX_MEM_alu_out;
      MEM_WB_mem_to_reg_src_2 <= Cache_d_out;
      MEM_WB_rd <= EX_MEM_rd;
      MEM_WB_pc_to_reg <= EX_MEM_pc_to_reg;
      MEM_WB_is_halted <= EX_MEM_is_halted;
    end
  end

  // ---------- mem_to_reg_mux -------------
  mux_2_to_1 mem_to_reg_mux (
    .A (MEM_WB_mem_to_reg_src_1),  // input
    .B (MEM_WB_mem_to_reg_src_2),    // input
    .Enable (MEM_WB_mem_to_reg),         // input
    .C (rd_din)           // output
  );
  
endmodule
