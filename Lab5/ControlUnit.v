`include "opcodes.v"

// ALUSrcB source
`define SrcB_reg 2'b00
`define SrcB_imm 2'b01
`define SrcB_4 2'b10
`define SrcB_none 2'b11


module ControlUnit(input [6:0] part_of_inst,  
                    output reg is_jal,
                    output reg is_jalr,
                    output reg branch,
                    output reg mem_read, 
                    output reg mem_to_reg, 
                    output reg mem_write, 
                    output reg [1:0] alu_src_B, 
                    output reg write_enable,
                    output reg pc_to_reg, 
                    output reg is_ecall); 

wire [6:0] opcode = part_of_inst;  // opcode extraction


always @(*)  // x : marked by 0
begin
    case(opcode)
        `ARITHMETIC : begin 
            is_jal = 0;
            is_jalr = 0;
            branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            mem_write = 0;
            alu_src_B = `SrcB_reg;
            write_enable = 1;
            pc_to_reg = 0;
            is_ecall = 0;
        end
        `ARITHMETIC_IMM : begin
            is_jal = 0;
            is_jalr = 0;
            branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            mem_write = 0;
            alu_src_B = `SrcB_imm;
            write_enable = 1;
            pc_to_reg = 0;
            is_ecall = 0;
        end
        `LOAD : begin
            is_jal = 0;
            is_jalr = 0;
            branch = 0;
            mem_read = 1;
            mem_to_reg = 1;
            mem_write = 0;
            alu_src_B = `SrcB_imm;
            write_enable = 1;
            pc_to_reg = 0;
            is_ecall = 0;
        end
        `JALR : begin
            is_jal = 0;
            is_jalr = 1;
            branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            mem_write = 0;
            alu_src_B = `SrcB_4;
            write_enable = 1;
            pc_to_reg = 1;
            is_ecall = 0;
        end
        `STORE : begin
            is_jal = 0;
            is_jalr = 0;
            branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            mem_write = 1;
            alu_src_B = `SrcB_imm;
            write_enable = 0;
            pc_to_reg = 0; 
            is_ecall = 0;
        end
        `JAL : begin
            is_jal = 1;
            is_jalr = 0;
            branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            mem_write = 0;
            alu_src_B = `SrcB_4; 
            write_enable = 1;
            pc_to_reg = 1;
            is_ecall = 0;
        end
        `BRANCH : begin
            is_jal = 0;
            is_jalr = 0;
            branch = 1;
            mem_read = 0;
            mem_to_reg = 0;
            mem_write = 0;
            alu_src_B = `SrcB_reg;
            write_enable = 0;
            pc_to_reg = 0;
            is_ecall = 0;
        end
        `ECALL : begin
            is_jal = 0;
            is_jalr = 0;
            branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            mem_write = 0;
            alu_src_B = `SrcB_none;
            write_enable = 0;
            pc_to_reg = 0;
            is_ecall = 1;
        end
        default: begin
            is_jal = 0;
            is_jalr = 0;
            branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            mem_write = 0;
            alu_src_B = `SrcB_none;
            write_enable = 0;
            pc_to_reg = 0;
            is_ecall = 0;
        end
    endcase


end

endmodule
