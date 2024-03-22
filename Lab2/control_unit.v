`include "opcodes.v"


module control_unit(input [6:0] part_of_inst, // 
                    output reg is_jal,
                    output reg is_jalr, // 
                    output reg branch, // branch condition이 만족되는 경우 분기 
                    output reg mem_read, //memory read 수행
                    output reg mem_to_reg, //alu output reg 대신 memory read 결과를 writeback으로 넘긴다
                    output reg mem_write, // memory write
                    output reg alu_src, // alu의 한 입력으로 레지스터 대신 immd 값 넘김
                    output reg write_enable,
                    output reg pc_to_reg, // ? 둘 중에 하나는 pc가 adder의 output을 받아 branch target으로 됨
                    output reg is_ecall); //?

wire [6:0] opcode = part_of_inst; //opcode 추출 


always @(*) // * 과 clk 구분 어떻게 해서 사용해야 하는지 
begin
    case(opcode)
        `ARITHMETIC : begin
            is_jal = 0;
            is_jalr = 0;
            branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            mem_write = 0;
            alu_src = 0;
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
            alu_src = 1;
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
            alu_src = 1;
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
            alu_src = 1;
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
            alu_src = 1;
            write_enable = 0;
            pc_to_reg = 0; //X
            is_ecall = 0;
        end
        `JAL : begin
            is_jal = 1;
            is_jalr = 0;
            branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            mem_write = 0;
            alu_src = 0; //X
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
            alu_src = 0;
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
            alu_src = 0;
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
            alu_src = 0;
            write_enable = 0;
            pc_to_reg = 0;
            is_ecall = 0;
        end
    endcase


end

endmodule
