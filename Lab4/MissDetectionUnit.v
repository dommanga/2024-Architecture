

  module MissDetectionUnit (
    input [31:0] IF_ID_PC,
    output [31:0] actual_pc,
    output reg miss);

  always @(*) begin

    if(IF_ID_PC != actual_pc) miss = 1;
    else miss = 0;

  end 

  endmodule 
