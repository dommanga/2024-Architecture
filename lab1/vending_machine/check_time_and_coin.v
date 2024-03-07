`include "vending_machine_def.v"

	

module check_time_and_coin(i_input_coin,i_select_item,coin_value,input_total,output_total,return_total,i_trigger_return,clk,reset_n,wait_time,o_return_coin);
	input clk;
	input reset_n;
	input i_trigger_return;
	input [31:0] coin_value [`kNumCoins-1:0];
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0]	i_select_item;
	input [`kTotalBits-1:0] input_total, output_total, return_total;
	output reg  [`kNumCoins-1:0] o_return_coin;
	output reg [31:0] wait_time;

	reg [`kTotalBits-1:0] relative_money;
	reg [`kTotalBits-1:0] temp;

	integer i;

	// initiate values
	initial begin
		// TODO: initiate values

		o_return_coin = `kNumCoins'b000;
		wait_time = `kWaitTime;

		relative_money = input_total - output_total - return_total;
		temp = 0;
	end


	// update coin return time
	always @(i_input_coin, i_select_item) begin
		// TODO: update coin return time
		
		// wait_time will be initialized to original
	end

	always @(*) begin
		// TODO: o_return_coin
	
	end

	always @(posedge clk ) begin
		relative_money <= input_total - output_total - return_total;

		if (wait_time == 0 || i_trigger_return) begin
			for (i = `kNumCoins - 1; i >= 0; i = i-1) begin
				if (relative_money - temp >= coin_value[i]) begin
					o_return_coin[i] <= 1;
					temp <= temp + coin_value[i];
				end
				else
					o_return_coin[i] <= 0;
			end
		end

		if (!reset_n) begin
			wait_time <= `kWaitTime;
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
