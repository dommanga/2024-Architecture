`include "alu_func.v"

module alu #(parameter data_width = 16) (
	input [data_width - 1 : 0] A, 
	input [data_width - 1 : 0] B, 
	input [3 : 0] FuncCode,
       	output reg [data_width - 1: 0] C,
       	output reg OverflowFlag);
// Do not use delay in your implementation.

initial begin
	C = 0;
	OverflowFlag = 0;
end   	

always @(*) 
begin
	case (FuncCode)
		//add   
		4'b0000: begin
				C = A + B;
				if (A[15] == B[15] && C[15] != A[15])
					OverflowFlag = 1;
				else
					OverflowFlag = 0;
		end
		//sub
		4'b0001: begin
			C = A - B;
			if ((A[15] && ~B[15] && ~C[15]) | (~A[15] && B[15] && C[15]))
				OverflowFlag = 1;
			else
				OverflowFlag = 0;
		end
		//ID
		4'b0010: begin
			C = A;
			OverflowFlag = 0;
		end
		//NOT
		4'b0011: begin
			C = ~A;
			OverflowFlag = 0;
		end
		//AND
		4'b0100: begin
			C = A & B;
			OverflowFlag = 0;
		end
		//OR 
		4'b0101: begin
			C = A | B;
			OverflowFlag = 0;
		end
		//NAND
		4'b0110: begin
			C = ~(A & B);
			OverflowFlag = 0;
		end
		//NOR
		4'b0111: begin
			C = ~(A | B);
			OverflowFlag = 0;
		end
		//XOR
		4'b1000: begin 
			C = A ^ B;
			OverflowFlag = 0;
		end
		//XNOR
		4'b1001: begin 
			C = ~(A ^ B);
			OverflowFlag = 0;
		end
		//LLS
		4'b1010: begin 
			C = A << 1;
			OverflowFlag = 0;
		end
		//LRS
		4'b1011: begin 
			C = A >> 1;
			OverflowFlag = 0;
		end
		//ALS
		4'b1100: begin 
			C = A << 1;
			OverflowFlag = 0;
		end
		//ARS
		4'b1101: begin
			C = A >> 1;
			if (A[15]) begin
				C[15] = 1'b1;
			end
			else begin
				C[15] = 1'b0;
			end
			OverflowFlag = 0;
		end
		//TCP
		4'b1110: begin 
			C = ~A + 1;
			OverflowFlag = 0;
		end
		//ZERO
		4'b1111: begin 
			C = 16'b0;
			OverflowFlag = 0;
		end
		default: begin
			C = 16'b0;
			OverflowFlag = 0;
		end
	endcase
end

endmodule

