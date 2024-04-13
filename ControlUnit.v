
`include "opcodes.v"


module ControlUnit (
    input [6:0] part_of_inst,
    output reg ALUSrcA,
    output reg [1:0] ALUSrcB,
    output reg ALU_op_sig,
    output reg IorD,
    output reg IRWrite,
    output reg MemRead,
    output reg MemWrite,
    output reg MemtoReg,
    output reg PCWrite,
    output reg PCWriteNotCond,
    output reg PCSource,
    output reg RegWrite);

reg [6:0] opcode = part_of_inst

always @(*) begin


end

always @(posedge clk) begin


    
end


endmodule
