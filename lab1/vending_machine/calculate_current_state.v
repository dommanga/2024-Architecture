
`include "vending_machine_def.v"
	

module calculate_current_state(i_input_coin,i_select_item,item_price,coin_value,current_total,
/*input_total, output_total, return_total,*/current_total_nxt,wait_time,o_return_coin,o_available_item,o_output_item);


	
	input [`kNumCoins-1:0] i_input_coin,o_return_coin;
	input [`kNumItems-1:0]	i_select_item;			
	input [31:0] item_price [`kNumItems-1:0];
	input [31:0] coin_value [`kNumCoins-1:0];	
	input [`kTotalBits-1:0] current_total;
	input [31:0] wait_time;
	output reg [`kNumItems-1:0] o_available_item,o_output_item;
	//output reg  [`kTotalBits-1:0] input_total, output_total, return_total;
	output reg  [`kTotalBits-1:0] current_total_nxt;
	integer i;	


	
	// Combinational logic for the next states
	always @(*) begin
		// TODO: current_total_nxt
		// You don't have to worry about concurrent activations in each input vector (or array).
		// Calculate the next current_total state.

		// if input coin --> update input_total //
		if (o_return_coin == 0 && wait_time == 0)
			o_available_item[0] = 0;
		else	
			o_available_item[0] = 0;
		// current_total_nxt update
		for (i = 0; i < `kNumCoins; i = i+1) begin
			if (i_input_coin[i]) begin
				current_total_nxt = current_total + coin_value[i];
				o_available_item[0] = 1; //---//
			end
			else begin
				current_total_nxt = current_total;
				o_available_item[0] = 0;  //---//
			end
		end
		
		// select_item && avail --> current_total_nxt - price
		for (i = 0; i < `kItemBits; i = i+1) begin
			if (i_select_item[i] && o_available_item[i])
				current_total_nxt = current_total + item_price[i];
			else
				current_total_nxt = current_total; 
		end
		
	end

	
	
	// Combinational logic for the outputs
	always @(*) begin
		// TODO: o_available_item
		// TODO: o_output_item

		// if current_total enough --> update o_available_item
		for (i = 0; i < `kItemBits; i = i+1) begin
			if (current_total >= item_price[0])
				o_available_item[i] = 1;
			else
				o_available_item[i] = 0;
		end

		// if i_select_item && avail --> o_output_item
		
		for (i = 0; i < `kItemBits; i = i+1) begin
			if (i_select_item[i] && o_available_item[i])
				o_output_item[i] = 1;
			else
				o_output_item[i] = 0;
		end

	end
 
	


endmodule 
