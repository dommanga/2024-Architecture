
module BranchPredictor_old #(parameter data_width = 32) (
    input [data_width - 1 : 0] current_pc, 
    output [data_width - 1 : 0] pred_pc);

assign pred_pc = current_pc + 4 ;

endmodule
