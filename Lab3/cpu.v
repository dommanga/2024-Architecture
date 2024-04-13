// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted,
           output [31:0]print_reg[0:31]
           ); // Whehther to finish simulation
  /***** Wire declarations *****/

  /***** Register declarations *****/
  reg [31:0] IR; // instruction register
  reg [31:0] MDR; // memory data register
  reg [31:0] A; // Read 1 data register
  reg [31:0] B; // Read 2 data register
  reg [31:0] ALUOut; // ALU output register
  // Do not modify and use registers declared above.

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(),         // input
    .next_pc(),     // input
    .current_pc()   // output
  );

  // ---------- Register File ----------
  RegisterFile reg_file(
    .reset(),        // input
    .clk(),          // input
    .rs1(),          // input
    .rs2(),          // input
    .rd(),           // input
    .rd_din(),       // input
    .write_enable(),    // input
    .rs1_dout(),     // output
    .rs2_dout(),      // output
    .print_reg()     // output (TO PRINT REGISTER VALUES IN TESTBENCH)
  );

  // ---------- Memory ----------
  Memory memory(
    .reset(),        // input
    .clk(),          // input
    .addr(),         // input
    .din(),          // input
    .mem_read(),     // input
    .mem_write(),    // input
    .dout()          // output
  );

  // ---------- Control Unit ----------
  ControlUnit ctrl_unit(
    .part_of_inst(),  // input
    .ALUSrcA(),        // output
    .ALUSrcB(),       // output
    .ALU_op_sig(),        // output
    .IorD(),      // output
    .IRWrite(),    // output
    .MemRead(),     // output
    .MemWrite(),       // output
    .MemtoReg(),     // output
    .PCWrite(),     // output
    .PCWriteNotCond(),       // output (ecall inst)
    .PCSource(),          //output
    .RegWrite()       //output
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .part_of_inst(),  // input
    .imm_gen_out()    // output
  );

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit(
    .part_of_inst(),  // input
    .ALU_op_sig(),    // input
    .alu_op()         // output
  );

  // ---------- ALU ----------
  ALU alu(
    .alu_op(),      // input
    .alu_in_1(),    // input  
    .alu_in_2(),    // input
    .alu_result(),  // output
    .alu_bcond()     // output
  );

endmodule
