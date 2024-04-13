
module mux_4_to_1 #(parameter data_width = 32) (
    input [data_width - 1 : 0] A,
    input [data_width - 1 : 0] B,
    input [data_width - 1 : 0] C,
    input [data_width - 1 : 0] D,
    input [1:0] control,
    output [data_width - 1 : 0] result);

always @(*) begin
    if (control == 2b'00) result = A;
    else if (control == 2b'01) result = B;
    else if (control == 2b'10) result = C;
    else result = D;
end
    
endmodule
