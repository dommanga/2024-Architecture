
module mux_4_to_1 #(parameter data_width = 32) (
    input [data_width - 1 : 0] A,
    input [data_width - 1 : 0] B,
    input [data_width - 1 : 0] C,
    input EnableA,
    input EnableC,
    output [data_width - 1 : 0] result);

assign result = EnableC? C : (EnableA? A : B) ;
    
endmodule
