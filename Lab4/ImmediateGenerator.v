
`include "opcodes.v"


module ImmediateGenerator (
    input [31:0] part_of_inst,
    output reg [31:0] imm_gen_out);

wire [6:0] opcode = part_of_inst[6:0];
integer i;

always @(*) 
begin
    case (opcode)
        `ARITHMETIC_IMM,
        `LOAD,
        `JALR: begin // I-immeediate
            imm_gen_out[0] = part_of_inst[20];
            imm_gen_out[4:1] = part_of_inst[24:21];
            imm_gen_out[10:5] = part_of_inst[30:25];
            for (i = 11; i < 32; i = i+1)
                imm_gen_out[i] = part_of_inst[31];
        end
        `STORE: begin // S-immediate
            imm_gen_out[0] = part_of_inst[7];
            imm_gen_out[4:1] = part_of_inst[11:8];
            imm_gen_out[10:5] = part_of_inst[30:25];
            for (i = 11; i < 32; i = i+1)
                imm_gen_out[i] = part_of_inst[31];
        end
        `BRANCH: begin// B-immediate
            imm_gen_out[0] = 1'b0;
            imm_gen_out[4:1] = part_of_inst[11:8];
            imm_gen_out[10:5] = part_of_inst[30:25];
            imm_gen_out[11] = part_of_inst[7];
            for (i = 12; i < 32; i = i+1)
                imm_gen_out[i] = part_of_inst[31];
        end
        `JAL: begin// J-immediate
            imm_gen_out[0] = 1'b0;
            imm_gen_out[4:1] = part_of_inst[24:21];
            imm_gen_out[10:5] = part_of_inst[30:25];
            imm_gen_out[11] = part_of_inst[20];
            imm_gen_out[19:12] = part_of_inst[19:12];
            for (i = 20; i < 32; i = i+1)
                imm_gen_out[i] = part_of_inst[31];
        end
        default: imm_gen_out[31:0] = 32'b0;
    endcase
end

endmodule
