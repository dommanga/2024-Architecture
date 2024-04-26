

module HazardDetectionUnit (
    input [4:0] IF_ID_rs1,
    input [4:0] IF_ID_rs2,
    input ID_EX_mem_read,
    input [4:0] ID_EX_rd,
    output reg is_hazard,
    output reg IF_ID_inst_write,
    output reg PCwrite);

always @(*) begin

    if ((ID_EX_rd == IF_ID_rs1 || ID_EX_rd == IF_ID_rs2) && ID_EX_mem_read) begin // prev Load instruction
        // stall pipeline
        is_hazard = 1;
        IF_ID_inst_write = 0;
        PCwrite = 0;
    end
    else begin
        is_hazard = 0;
        IF_ID_inst_write = 1;
        PCwrite = 1;
    end

end

endmodule