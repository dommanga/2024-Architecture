module InstMemory #(parameter MEM_DEPTH = 1024) (input reset,
                                                 input clk,
                                                 input [31:0] addr,   // address of the instruction memory
                                                 output [31:0] dout); // instruction at addr
  integer i;
  // Instruction memory
  reg [31:0] mem[0:MEM_DEPTH - 1];
  // Do not touch imem_addr
  wire [31:0] imem_addr;
  assign imem_addr = {addr >> 2};

  // Asynchronously read instruction from the memory 
  assign dout = mem[imem_addr];

  // Initialize instruction memory (do not touch except path)
  always @(posedge clk) begin
    if (reset) begin
      for (i = 0; i < MEM_DEPTH; i = i + 1)
          // DO NOT TOUCH COMMENT BELOW
          /* verilator lint_off BLKSEQ */
          mem[i] = 32'b0;
          /* verilator lint_on BLKSEQ */
          // DO NOT TOUCH COMMENT ABOVE
      // Provide path of the file including instructions with binary format
      $readmemh("/home/jimin/2024-Architecture/Lab4/student_tb/recursive_mem.txt", mem);
      //  /root/2024-Architecture/Lab4/student_tb/basic_mem.txt
      //  /root/2024-Architecture/Lab4/student_tb/ifelse_mem.txt
      //  /root/2024-Architecture/Lab4/student_tb/loop_mem.txt
      //  /root/2024-Architecture/Lab4/student_tb/non-controlflow_mem.txt
      //  /root/2024-Architecture/Lab4/student_tb/recursive_mem.txt
    end
  end

endmodule

