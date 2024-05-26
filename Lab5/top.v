// Do not submit this file.
`include "cpu.v"

module top(input reset,
           input clk,
           output is_halted,
           output [31:0] print_reg [0:31],
           output is_output_valid,
           output is_hit);

  cpu cpu(
    .reset(reset), 
    .clk(clk),
    .is_halted(is_halted),
    .print_reg(print_reg),
    .is_output_valid(is_output_valid),
    .is_hit(is_hit)
  );

endmodule
