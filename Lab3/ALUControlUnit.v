
`include "opcodes.v"

`define OP_SIG_ADD 1b'0
`define OP_SIG_ALU 1b'1

module ALUControlUnit (
    input [31:0] part_of_inst,
    input ALU_op_sig,
    output reg [3:0] alu_op);

reg [6:0] opcode = part_of_inst[6:0];
reg [2:0] funct3 = part_of_inst[14:12];
reg [6:0] funct7 = part_of_inst[31:25];

wire unused = | part_of_inst[31:0];

always @(*) begin

    if (alu_op_sig == `OP_SIG_ADD) // different alu_op for state (in multi-cycle cpu)
        alu_op = `OP_ADD;
    
    else // case for alu_op_sig == OP_SIG_ALU(R/I, B type)
        case (opcode)
            `LOAD,
            `STORE: alu_op = `OP_ADD;
            `JALR: alu_op = `OP_ADD;
            `BRANCH: begin
                if (funct3 == `FUNCT3_BEQ)
                    alu_op = `OP_SUB_BEQ;
                else if (funct3 == `FUNCT3_BNE)
                    alu_op = `OP_SUB_BNE;
                else if (funct3 == `FUNCT3_BLT)
                    alu_op = `OP_SUB_BLT;
                else if (funct3 == `FUNCT3_BGE)
                    alu_op = `OP_SUB_BGE;
                else
                    alu_op = `OP_DEFAULT;
            end
            `ARITHMETIC_IMM: begin
                if (funct3 == `FUNCT3_ADD)
                    alu_op = `OP_ADD;
                else if (funct3 == `FUNCT3_SLL)
                    alu_op = `OP_SLL;
                else if (funct3 == `FUNCT3_XOR)
                    alu_op = `OP_XOR;
                else if (funct3 == `FUNCT3_OR)
                    alu_op = `OP_OR;
                else if (funct3 == `FUNCT3_AND)
                    alu_op = `OP_AND;
                else if (funct3 == `FUNCT3_SRL)
                    alu_op = `OP_SRL;
                else
                    alu_op = `OP_DEFAULT;
            end
            `ARITHMETIC: begin
                if (funct7 == `FUNCT7_SUB)
                    if (funct3 == `FUNCT3_SUB)
                        alu_op = `OP_SUB;
                    else
                        alu_op = `OP_DEFAULT;
                else if (funct7 == `FUNCT7_OTHERS)
                    if (funct3 == `FUNCT3_ADD)
                        alu_op = `OP_ADD;
                    else if (funct3 == `FUNCT3_SUB)
                        alu_op = `OP_SUB;
                    else if (funct3 == `FUNCT3_SLL)
                        alu_op = `OP_SLL;
                    else if (funct3 == `FUNCT3_XOR)
                        alu_op = `OP_XOR;
                    else if (funct3 == `FUNCT3_OR)
                        alu_op = `OP_OR;
                    else if (funct3 == `FUNCT3_AND)
                        alu_op = `OP_AND;
                    else if (funct3 == `FUNCT3_SRL)
                        alu_op = `OP_SRL;
                    else
                        alu_op = `OP_DEFAULT;
                else
                    alu_op = `OP_DEFAULT;
            end
            default: alu_op = `OP_DEFAULT;
        endcase
end

    
endmodule
