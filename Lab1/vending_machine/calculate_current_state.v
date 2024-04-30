
`include "vending_machine_def.v"
	

module calculate_current_state(i_input_coin,i_select_item,i_trigger_return,item_price,coin_value,current_total,
relative_money,current_total_nxt,wait_time,o_return_coin,o_available_item,o_output_item);

	input i_trigger_return;
	
	input [`kNumCoins-1:0] i_input_coin,o_return_coin;
	input [`kNumItems-1:0]	i_select_item;			
	input [31:0] item_price [`kNumItems-1:0];
	input [31:0] coin_value [`kNumCoins-1:0];	
	input [`kTotalBits-1:0] current_total;
	input [31:0] wait_time;
	output reg [`kNumItems-1:0] o_available_item,o_output_item;
	output [`kTotalBits-1:0] relative_money;
	output reg  [`kTotalBits-1:0] current_total_nxt;
	integer i;	

	reg  [`kTotalBits-1:0] input_total, output_total, return_total;
	reg turn;

	assign relative_money = input_total - output_total - return_total;

	// Combinational logic for the next states
	always @(*) begin

		case (current_total)
			`S0_init: /* 'Init' state initializes all values. */
				if (i_input_coin > 0) 
					current_total_nxt = `S2_coin;
				else 
					current_total_nxt = `S1_wait;
			`S1_wait: /* 'Wait' state waits a certain input or signal. */
				if (i_input_coin > 0) 
					current_total_nxt = `S2_coin;
				else if (i_select_item > 0) 
					current_total_nxt = `S3_select;
				else if (wait_time == 0 || i_trigger_return)
					current_total_nxt = `S4_return;
			`S2_coin: /* 'Coin' state process a coin input and return to 'Wait' state. */
				current_total_nxt = `S1_wait;
			`S3_select: /* 'Select' state process a item selection and return to 'Wait' state. */
				current_total_nxt = `S1_wait;
			`S4_return: /* 'Return' state return left coins. When return process complete, go to 'Init' state. */
				if (relative_money == 0)
					current_total_nxt = `S0_init;
		endcase
		
	end

	
	
	// Combinational logic for the outputs
	always @(*) begin

		case (current_total)
			`S0_init: begin /* Initialize all values to begin operation. */
				input_total = 0;
				output_total = 0;
				return_total = 0;
				turn = 1;
			end
			`S1_wait: begin /* Calculate available item for current money. */
				for (i = 0; i < `kNumItems; i = i + 1) begin
					if (input_total - output_total >= item_price[i])
						o_available_item[i] = 1;
					else
						o_available_item[i] = 0;
				end
				turn = 1;
			end
			`S2_coin: begin /* Calculate total money input for only one time. */
				if (turn) begin
					for (i = 0; i < `kNumCoins; i = i + 1) begin
						if (i_input_coin[i]) begin
							input_total = input_total + coin_value[i];
						end
					end
					turn = 0;
				end
			end
			`S3_select: begin /* Calculate total money output and a purchased item for only one time. */
				if (turn) begin
					for (i = 0; i < `kNumItems; i = i+1) begin
						if (i_select_item[i] && o_available_item[i]) begin
							o_output_item[i] = 1;
							output_total = output_total + item_price[i];
						end
						else begin
							o_output_item[i] = 0;
						end
					end
					turn = 0;
				end
			end
			`S4_return: begin /* Calculate total returned money. */
				for (i = 0; i < `kNumCoins; i = i + 1) begin
					if (o_return_coin[i]) begin
						return_total = return_total + coin_value[i];
					end
				end
			end
		endcase

	end
 
	


endmodule 
