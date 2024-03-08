`include "vending_machine_def.v"

	

module check_time_and_coin(i_input_coin,i_select_item,coin_value,relative_money,i_trigger_return,clk,reset_n,wait_time,o_return_coin);
	input clk;
	input reset_n;
	input i_trigger_return;
	input [31:0] coin_value [`kNumCoins-1:0];
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;
	input [`kTotalBits-1:0] relative_money;
	output reg  [`kNumCoins-1:0] o_return_coin;
	output reg [31:0] wait_time;

	reg flag;

	// initiate values
	initial begin
		// TODO: initiate values

		o_return_coin = `kNumCoins'b000;
		wait_time = `kWaitTime;
		flag = 0;
	end


	// update coin return time
	always @(i_input_coin, i_select_item) begin
		// TODO: update coin return time
		
	end

	always @(*) begin
		// TODO: o_return_coin
	
	end

	always @(posedge clk ) begin

		if (wait_time == 0) begin
			if (relative_money >= coin_value[2])
				o_return_coin <= `kNumCoins'b100;
			else if (relative_money >= coin_value[1])
				o_return_coin <= `kNumCoins'b010;
			else if (relative_money >= coin_value[0])
				o_return_coin <= `kNumCoins'b001;
			else
				o_return_coin <= `kNumCoins'b001;
		end
		else	
			o_return_coin <= `kNumCoins'b000;

		if (!reset_n) begin
			wait_time <= `kWaitTime;
		end
		else if (i_trigger_return && !flag) begin
			wait_time <= 2;
			flag <= 1;
		end
		else if (i_input_coin > 0 || i_select_item > 0)
			wait_time <= `kWaitTime;
		else begin
			if (wait_time > 0)
				wait_time <= wait_time - 1;
			else
				wait_time <= 0;
		end
	end
endmodule 
