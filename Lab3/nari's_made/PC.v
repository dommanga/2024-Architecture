`include "opcodes.v"

module pc #(parameter word_size = 32)(input reset, 
          input clk, 
          input [word_size-1 : 0] next_pc,
          output reg [word_size-1 : 0] current_pc);

always @(posedge clk)
begin 
    if (reset) current_pc <= 0;
    else current_pc <= next_pc;
end

endmodule
