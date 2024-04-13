// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

`define WordBit 32

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted,
           output [31:0]print_reg[0:31]
           ); // Whehther to finish simulation
  /***** Wire declarations *****/
  wire [`WordBit-1:0] next_pc, current_pc;
  wire PCWriteNotCond, PCWrite, IorD, MemRead, MemWrite, MemtoReg, IRWrite, PCSource, ALUOp, ALUSrcA, RegWrite, PC_update, is_ecall, ALU_op_sig, alu_bcond;
  wire [1:0] ALUSrcB;

  wire [`WordBit-1:0] addr, rd_din, imm_gen_out;
  
  wire [`WordBit-1:0] din, dout;

  wire [4:0] rs1_in;
  wire [`WordBit-1:0] rs1_dout, rs2_dout;

  wire [`WordBit-1:0] alu_in_1, alu_in_2, alu_result;
  wire [3:0] alu_op;

  /***** Register declarations *****/
  reg [31:0] IR; // instruction register
  reg [31:0] MDR; // memory data register
  reg [31:0] A; // Read 1 data register
  reg [31:0] B; // Read 2 data register
  reg [31:0] ALUOut; // ALU output register
  // Do not modify and use registers declared above.


  always @(posedge clk) begin
    if (IRWrite)
      IR <= dout;
    MDR <= dout;

    A <= rs1_dout;
    B <= rs2_dout;
    ALUOut <= alu_result;
  end

  assign PC_update = PCWrite || (!alu_bcond && PCWriteNotCond);
  assign rs1_in = is_ecall ? 17 : IR[19:15];
  assign is_halted = is_ecall && (rs1_dout == 10);
  

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .PC_update(PC_update), // input
    .next_pc(next_pc),     // input
    .current_pc(current_pc)   // output
  );

    // ---------- mux_2_to_1 ----------
  mux_2_to_1 IorD_mux(
    .A (current_pc),    // input
    .B (ALUOut),  // input
    .Enable (IorD),  // input
    .C (addr) // output  
  );

    // ---------- mux_2_to_1 ----------
  mux_2_to_1 MemtoReg_mux(
    .A (ALUOut),    // input
    .B (MDR),  // input
    .Enable (MemtoReg),  // input
    .C (rd_din) // output   
  );

  // ---------- Register File ----------
  RegisterFile reg_file(
    .reset(reset),        // input
    .clk(clk),          // input
    .rs1(rs1_in),          // input
    .rs2(IR[24:20]),          // input
    .rd(IR[11:7]),           // input
    .rd_din(rd_din),       // input
    .write_enable(RegWrite),    // input
    .rs1_dout(rs1_dout),     // output
    .rs2_dout(rs2_dout),      // output
    .print_reg(print_reg)     // output (TO PRINT REGISTER VALUES IN TESTBENCH)
  );

  // ---------- Memory ----------
  Memory memory(
    .reset(reset),        // input
    .clk(clk),          // input
    .addr(addr),         // input
    .din(din),          // input
    .mem_read(MemRead),     // input
    .mem_write(MemWrite),    // input
    .dout(dout)          // output
  );

  // ---------- Control Unit ----------
  ControlUnit ctrl_unit(
    .clk(clk), // input
    .reset(reset), // input
    .part_of_inst(IR[6:0]),  // input
    .alu_bcond(alu_bcond),  // input
    .ALUSrcA(ALUSrcA),        // output
    .ALUSrcB(ALUSrcB),       // output
    .ALU_op_sig(ALU_op_sig),        // output
    .IorD(IorD),      // output
    .IRWrite(IRWrite),    // output
    .MemRead(MemRead),     // output
    .MemWrite(MemWrite),       // output
    .MemtoReg(MemtoReg),     // output
    .PCWrite(PCWrite),     // output
    .PCWriteNotCond(PCWriteNotCond),       // output (ecall inst)
    .PCSource(PCSource),          //output
    .RegWrite(RegWrite),       //output
    .is_ecall(is_ecall)     // output
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .part_of_inst(IR),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit(
    .part_of_inst(IR),  // input
    .ALU_op_sig(ALU_op_sig),    // input
    .alu_op(alu_op)         // output
  );

    // ---------- mux_2_to_1 ----------
  mux_2_to_1 ALUSrcA_mux(
    .A (current_pc),    // input (0)
    .B (A),  // input (1)
    .Enable (ALUSrcA),  // input
    .C (alu_in_1) // output
  );

  // ---------- mux_4_to_1 ----------
  mux_4_to_1 ALUSrcB_mux(
    .A (B),    // input
    .B (4),  // input
    .C (imm_gen_out),  // input
    .D (0),  // input
    .control (ALUSrcB),  // input
    .result (alu_in_2) // output
  );

  // ---------- ALU ----------
  ALU alu(
    .alu_op(alu_op),      // input
    .alu_in_1(alu_in_1),    // input  
    .alu_in_2(alu_in_2),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)     // output
  );

    // ---------- mux_2_to_1 ----------
  mux_2_to_1 PCSource_mux(
    .A (alu_result),    // input
    .B (ALUOut),  // input
    .Enable (PCSource),  // input
    .C (next_pc) // output  
  );

endmodule
