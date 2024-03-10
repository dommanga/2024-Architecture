`include "vending_machine_def.v"

	

module check_time_and_coin(i_input_coin,i_select_item,coin_value,o_available_item,relative_money,current_total,i_trigger_return,clk,reset_n,wait_time,o_return_coin);
	input clk;
	input reset_n;
	input i_trigger_return;
	input [31:0] coin_value [`kNumCoins-1:0];
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;
	input [`kNumItems-1:0] o_available_item;
	input [`kTotalBits-1:0] relative_money;
	input [`kTotalBits-1:0] current_total;
	output reg  [`kNumCoins-1:0] o_return_coin;
	output reg [31:0] wait_time;

	reg flag;
	reg in_process_input;

	/* Sequential logic to update wait_time and return coin. */
	always @(posedge clk ) begin

		/* Return coin in descending order of coin value */
		if (wait_time == 0) begin
			if (relative_money >= coin_value[2])
				o_return_coin <= `kNumCoins'b100; /* 1000 */
			else if (relative_money >= coin_value[1])
				o_return_coin <= `kNumCoins'b010; /* 500 */
			else if (relative_money >= coin_value[0])
				o_return_coin <= `kNumCoins'b001; /* 100 */
			else
				o_return_coin <= `kNumCoins'b000;
		end
		else	
			o_return_coin <= `kNumCoins'b000;


		/* When reset signal, initialize all values. */
		if (!reset_n) begin
			wait_time <= `kWaitTime;
			flag <= 0;
			o_return_coin <= `kNumCoins'b000;
			in_process_input <= 0;
		end
		else if (i_trigger_return && !flag) begin /* Wait 3 cycles before start to return coin. NOTE: Already in state 'S4_return'. */
			wait_time <= 2;
			flag <= 1;
		end
		else if (!i_trigger_return && flag) /* Initialize flag for later use when return command button is 'not' pressed. */
			flag <= 0;
		else if (i_input_coin > 0 || current_total == `S0_init) begin
			wait_time <= `kWaitTime;
			in_process_input <= 1; 
		end
		else if (in_process_input) begin /* Maintain wait time to initial value when processing coin input yet. - coin input process needs two clk cycles to finish. */
			wait_time <= `kWaitTime;
			in_process_input <= 0;
		end
		else if ((i_select_item & o_available_item) > 0) /* Initialize wait time when purchase happens. */
			wait_time <= `kWaitTime;
		else begin /* Time diminishes per clk. */
			if (wait_time > 0)
				wait_time <= wait_time - 1;
			else
				wait_time <= 0;
		end
	end
endmodule 
