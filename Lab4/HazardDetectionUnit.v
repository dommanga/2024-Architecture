

module HazardDetectionUnit (
    input [4:0] IF_ID_rs1,
    input [4:0] IF_ID_rs2,
    input ID_EX_mem_read,
    input [4:0] ID_EX_rd,
    input is_ecall, 
    input ID_EX_reg_write,
    output reg is_hazard,
    output reg IF_ID_inst_write,
    output reg PCWrite);

always @(*) begin

    if (is_ecall) begin // ecall instruction
        if ((ID_EX_reg_write && 17 == ID_EX_rd)) begin
        // stall pipeline
            is_hazard = 1;
            IF_ID_inst_write = 0;
            PCWrite = 0;
        end
        else begin
            is_hazard = 0;
            IF_ID_inst_write = 1;
            PCWrite = 1;
        end
    end
    else if ((ID_EX_rd == IF_ID_rs1 || ID_EX_rd == IF_ID_rs2) && ID_EX_mem_read) begin // prev Load instruction
        // stall pipeline
        is_hazard = 1;
        IF_ID_inst_write = 0;
        PCWrite = 0;
    end
    else begin
        is_hazard = 0;
        IF_ID_inst_write = 1;
        PCWrite = 1;
    end

end

endmodule
