// Submit this file with other files you created.
// Do not touch port declarations of the module 'cpu'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required
`define WordBit 32

module cpu(input reset,                     // positive reset signal
           input clk,                       // clock signal
           output is_halted,                // Whehther to finish simulation
           output [31:0] print_reg [0:31]); // TO PRINT REGISTER VALUES IN TESTBENCH (YOU SHOULD NOT USE THIS)
  /***** Wire declarations *****/
  wire [`WordBit-1:0] next_pc, current_pc;
  wire [`WordBit-1:0] PC_4_out, PC_imm_out;
  wire [`WordBit-1:0] pcToReg_mux_out;

  wire [`WordBit-1:0] PCSrc1_mux_out;

  wire [`WordBit-1:0] instr_out;

  wire [`WordBit-1:0] rs1_dout, rs2_dout, gpr_x17;

  wire isJAL, isJALR, isBranch, memRead, memToReg, memWrite, ALUsrc, writeEnable, pcToReg, isEcall, alu_bcond, PCSrc1, PCSrc2;

  wire [`WordBit-1:0] imm_gen_out;
  wire [3:0] alu_op;
  wire [`WordBit-1:0] alu_src2_mux_out;
  wire [`WordBit-1:0] alu_result;
  wire [`WordBit-1:0] mem_data_out;
  wire [`WordBit-1:0] memToReg_mux_out;


  /***** Register declarations *****/

  assign is_halted = isEcall && (gpr_x17 == 10);
  // ---------- Update program counter ----------  
  assign PCSrc1 = isJAL || (isBranch && alu_bcond);
  assign PCSrc2 = isJALR;

  adder Add_PC_4(
    .in_1(current_pc),  // input
    .in_2(4),  // input
    .out(PC_4_out)    //output
  );

  adder Add_PC_imm(
    .in_1(current_pc),  // input
    .in_2(imm_gen_out),  // input
    .out(PC_imm_out)    //output
  );

  mux_2_to_1 PCSrc1_mux(
    .A (PC_4_out),    // input
    .B (PC_imm_out),  // input
    .Enable (PCSrc1),         // input
    .C (PCSrc1_mux_out)           // output
  );

  mux_2_to_1 PCSrc2_mux(
    .A (PCSrc1_mux_out),    // input
    .B (alu_result),  // input
    .Enable (PCSrc2),         // input
    .C (next_pc)           // output
  );

  // PC must be updated on the rising edge (positive edge) of the clock.
  pc pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(next_pc),     // input
    .current_pc(current_pc)   // output
  );

  // ---------- Instruction Memory ----------
  instruction_memory imem(
    .reset(reset),   // input
    .clk(clk),     // input
    .addr(current_pc),    // input
    .dout(instr_out)     // output
  );

  mux_2_to_1 pcToReg_mux(
    .A (memToReg_mux_out),    // input
    .B (PC_4_out),  // input
    .Enable (pcToReg),         // input
    .C (pcToReg_mux_out)           // output
  );

  // ---------- Register File ----------
  register_file reg_file (
    .reset (reset),        // input
    .clk (clk),          // input
    .rs1 (instr_out[19:15]),          // input
    .rs2 (instr_out[24:20]),          // input
    .rd (instr_out[11:7]),           // input
    .rd_din (pcToReg_mux_out),       // input
    .write_enable (writeEnable), // input
    .rs1_dout (rs1_dout),     // output
    .rs2_dout (rs2_dout),     // output
    .gpr_x17 (gpr_x17),
    .print_reg (print_reg)  //DO NOT TOUCH THIS
  );


  // ---------- Control Unit ----------
  control_unit ctrl_unit (
    .part_of_inst(instr_out[6:0]),  // input
    .is_jal(isJAL),        // output
    .is_jalr(isJALR),       // output
    .branch(isBranch),        // output
    .mem_read(memRead),      // output
    .mem_to_reg(memToReg),    // output
    .mem_write(memWrite),     // output
    .alu_src(ALUsrc),       // output
    .write_enable(writeEnable),  // output
    .pc_to_reg(pcToReg),     // output
    .is_ecall(isEcall)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  immediate_generator imm_gen(
    .part_of_inst(instr_out),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // ---------- ALU Control Unit ----------
  alu_control_unit alu_ctrl_unit (
    .part_of_inst(instr_out),  // input
    .alu_op(alu_op)         // output
  );

  mux_2_to_1 ALUSrc_mux (
    .A (rs2_dout),    // input
    .B (imm_gen_out),  // input
    .Enable (ALUsrc),         // input
    .C (alu_src2_mux_out)  
  );

  // ---------- ALU ----------
  alu alu (
    .alu_op(alu_op),      // input
    .alu_in_1(rs1_dout),    // input  
    .alu_in_2(alu_src2_mux_out),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)    // output
  );

  // ---------- Data Memory ----------
  data_memory dmem(
    .reset (reset),      // input
    .clk (clk),        // input
    .addr (alu_result),       // input
    .din (rs2_dout),        // input
    .mem_read (memRead),   // input
    .mem_write (memWrite),  // input
    .dout (mem_data_out)        // output
  );
  
  mux_2_to_1 MemtoReg_mux(
    .A (alu_result),    // input
    .B (mem_data_out),  // input
    .Enable (memToReg),         // input
    .C (memToReg_mux_out)           // output
  );

endmodule
