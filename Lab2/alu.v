

module alu #(parameter data_width = 32) (
    input [3 : 0] alu_op,
	input [data_width - 1 : 0] alu_in_1, 
	input [data_width - 1 : 0] alu_in_2, 
       	output reg [data_width - 1: 0] alu_result,
       	output reg alu_bcond);

always @(*) 
begin
	case (alu_op)
		`OP_ADD: begin
            alu_result = alu_in_1 + alu_in_2;
            alu_bcond = 0;
        end
		`OP_SUB: begin
            alu_result = alu_in_1 - alu_in_2;
            alu_bcond = 0;
        end
		`OP_SUB_BEQ: begin
            alu_result = alu_in_1 - alu_in_2;
            if (alu_result == 0)
                alu_bcond = 1;
            else
                alu_bcond = 0;
        end
		`OP_SUB_BNE: begin
            alu_result = alu_in_1 - alu_in_2;
            if (alu_result != 0)
                alu_bcond = 1;
            else
                alu_bcond = 0;
        end
		`OP_SUB_BLT: begin
            alu_result = alu_in_1 - alu_in_2;
            if (alu_in_1 < alu_in_2)
                alu_bcond = 1;
            else
                alu_bcond = 0;
        end
		`OP_SUB_BGE: begin
            alu_result = alu_in_1 - alu_in_2;
            if (alu_in_1 >= alu_in_2)
                alu_bcond = 1;
            else
                alu_bcond = 0;
        end
		`OP_SLL: begin
            alu_result = alu_in_1 << alu_in_2;
            alu_bcond = 0;
        end
		`OP_XOR: begin
            alu_result = alu_in_1 ^ alu_in_2;
            alu_bcond = 0;
        end
		`OP_OR: begin
            alu_result = alu_in_1 | alu_in_2;
            alu_bcond = 0;
        end
		`OP_AND: begin
            alu_result = alu_in_1 & alu_in_2;
            alu_bcond = 0;
        end
		`OP_SRL: begin
            alu_result = alu_in_1 >> alu_in_2;
            alu_bcond = 0;
        end
		default: begin
            alu_result = 0;
            alu_bcond = 0;
            end
	endcase
end

endmodule
