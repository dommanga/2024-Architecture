`include "vending_machine_def.v"


module change_state(clk,reset_n,current_total_nxt,current_total);

	input clk;
	input reset_n;
	input [`kTotalBits-1:0] current_total_nxt;
	output reg [`kTotalBits-1:0] current_total;

	// Sequential circuit to reset or update the states
	always @(posedge clk ) begin
		if (!reset_n) begin

			/* Reset current_total to initial state. */
			current_total <= `S0_init;
		end
		else begin
			
			/* Update current state to next state. */
			current_total <= current_total_nxt;
		end
	end
endmodule 
