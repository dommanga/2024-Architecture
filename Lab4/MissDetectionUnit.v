

  module MissDetectionUnit (
    input actual_taken,
    input [31:0] ID_EX_pred_PC,
    input [31:0] actual_pc,
    output reg miss);

  always @(*) begin
    if (actual_taken)
      if(ID_EX_pred_PC != actual_pc) 
        miss = 1;
      else 
        miss = 0;
    else 
      miss = 0;

  end 

  endmodule 
