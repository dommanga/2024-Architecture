
// forward A source
`define for_reg 2'b00
`define for_WB 2'b01
`define for_MEM 2'b10
`define for_none 2'b11

`define _x0 5'b0

module ForwardingUnit (
    input [4:0] ID_EX_rs1,
    input [4:0] ID_EX_rs2,
    input [4:0] EX_MEM_rd,
    input [4:0] MEM_WB_rd,
    input EX_MEM_reg_write,
    input MEM_WB_reg_write,
    output reg [1:0] forwardA,
    output reg [1:0] forwardB
);
    
always @(*) begin

    // for rs1
    if (ID_EX_rs1 != `_x0 && ID_EX_rs1 == EX_MEM_rd && EX_MEM_reg_write)
        forwardA = `for_MEM;
    else if (ID_EX_rs1 != `_x0 && ID_EX_rs1 == MEM_WB_rd && MEM_WB_reg_write)
        forwardA = `for_WB;
    else
        forwardA = `for_reg;

    // for rs2
    if (ID_EX_rs2 != `_x0 && ID_EX_rs2 == EX_MEM_rd && EX_MEM_reg_write)
        forwardB = `for_MEM;
    else if (ID_EX_rs2 != `_x0 && ID_EX_rs2 == MEM_WB_rd && MEM_WB_reg_write)
        forwardB = `for_WB;
    else
        forwardB = `for_reg;
end


endmodule
