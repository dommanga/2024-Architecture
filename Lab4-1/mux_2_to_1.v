
module mux_2_to_1 #(parameter data_width = 32) (
    input [data_width - 1 : 0] A,
    input [data_width - 1 : 0] B,
    input Enable,
    output [data_width - 1 : 0] C);

assign C = Enable ? B : A;
    
endmodule
