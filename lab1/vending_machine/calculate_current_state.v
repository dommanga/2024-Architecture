
`include "vending_machine_def.v"
	

module calculate_current_state(i_input_coin,i_select_item,item_price,coin_value,current_total,
input_total, output_total, return_total,current_total_nxt,wait_time,o_return_coin,o_available_item,o_output_item);


	
	input [`kNumCoins-1:0] i_input_coin,o_return_coin;
	input [`kNumItems-1:0]	i_select_item;			
	input [31:0] item_price [`kNumItems-1:0];
	input [31:0] coin_value [`kNumCoins-1:0];	
	input [`kTotalBits-1:0] current_total;
	input [31:0] wait_time;
	output reg [`kNumItems-1:0] o_available_item,o_output_item;
	output reg  [`kTotalBits-1:0] input_total, output_total, return_total;
	output reg  [`kTotalBits-1:0] current_total_nxt;
	integer i;	

	reg  [`kTotalBits-1:0] INPUT_tot;

	initial begin
		input_total = 0;
		output_total = 0;

		INPUT_tot = 0;

		return_total = input_total - output_total;
		//need to revise
		if (wait_time == 0 && o_return_coin > 0)
			return_total = 0;
	end

	// Combinational logic for the next states
	always @(*) begin
		// TODO: current_total_nxt
		// You don't have to worry about concurrent activations in each input vector (or array).
		// Calculate the next current_total state.
		
		if (i_input_coin > 0)
			current_total_nxt = `S2_coin;
		else if (i_select_item > 0)
			current_total_nxt = `S3_select;
		else 
			current_total_nxt = `S1_wait;

		// case (current_total)
		// 	`S0_init:
		// 		current_total_nxt = `S1_wait;
		// 	`S1_wait:
		// 		if(i_input_coin > 0) 
		// 			current_total_nxt = `S2_coin;
		// 		else if(i_select_item > 0) 
		// 			current_total_nxt = `S3_select;
		// 		else
		// 			current_total_nxt = current_total;
		// 	`S2_coin:
		// 		current_total_nxt = `S1_wait;
		// 	`S3_select:
		// 		if (o_available_item > 0) 
		// 			current_total_nxt = `S1_wait;
		// 		else if (input_total > output_total)
		// 			current_total_nxt = `S1_wait;
		// 		else
		// 			current_total_nxt = `S0_init;
		// 	default: begin current_total_nxt = `S0_init; end
		// endcase
		
	end

	
	// Combinational logic for the outputs
	always @(*) begin
		// TODO: o_available_item
		// TODO: o_output_item
		//$monitor("state: %h, coin: %h", current_total, input_total);
		case (current_total)
			`S0_init: begin
				input_total = 0;
				INPUT_tot = 0;
				output_total = 0;
				return_total = 0;
			end
			`S1_wait: begin
				for (i = 0; i < `kNumItems; i = i + 1) begin
					if (input_total - output_total >= item_price[i])
						o_available_item[i] = 1;
					else
						o_available_item[i] = 0;
				end
			end
			`S2_coin: begin
				for (i = 0; i < `kNumCoins; i = i + 1) begin
					if (i_input_coin[i]) begin
						input_total = input_total + coin_value[i] / 2;
					end
				end
				INPUT_tot = INPUT_tot + coin_value[0];
			end
			`S3_select: begin
				for (i = 0; i < `kNumItems; i = i+1) begin
					if (i_select_item[i] && o_available_item[i]) begin
						o_output_item[i] = 1;
						output_total = output_total + item_price[i] / 2;
					end
					else begin
						o_output_item[i] = 0;
					end
				end
			end
			default: return_total = input_total - output_total;
		endcase

	end
 
	


endmodule 
