
module adder #(parameter data_width = 32) (
    input [data_width - 1 : 0] in_1, 
    input [data_width - 1 : 0] in_2,
    output [data_width - 1 : 0] out);

assign out = in_1 + in_2;

endmodule
