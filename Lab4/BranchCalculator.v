

// calculate branch address when taken (T), and determine actual branch condition (T or NT)
module BranchCalculator (
    input [31:0] ID_EX_PC,
    input [31:0] ID_EX_rs1_data,
    input [31:0] ID_EX_imm,
    input alu_bcond,
    input ID_EX_branch,
    input ID_EX_is_jal,
    input ID_EX_is_jalr,
    output reg [31:0] actual_pc,
    output reg actual_taken,
    output reg update_B_history,
    output reg update_B_target
);

wire [31:0] is_jalr_mux_out;
wire [31:0] jump_addr;

mux_2_to_1 is_jalr_mux (
.A (ID_EX_PC),    // input
.B (ID_EX_rs1_data),  // input
.Enable (ID_EX_is_jalr),   // input
.C (is_jalr_mux_out)           // output
);

adder Add_imm(
.in_1(is_jalr_mux_out),  // input
.in_2(ID_EX_imm),  // input
.out(jump_addr)    //output
);

always @(*) begin

    // calculate branch target and condition
    if (ID_EX_is_jal || ID_EX_is_jalr || (ID_EX_branch && alu_bcond)) begin
        actual_pc = jump_addr;
        actual_taken = 1;
    end
    else begin
        actual_pc = ID_EX_PC + 4;
        actual_taken = 0;
    end

    // determine which prediction registers must be updated
    update_B_history = 0;
    update_B_target = 0;

    if (ID_EX_branch) begin // PHT & BHSR must be updated
        update_B_history = 1;
    end

    if (actual_taken) begin // BTB & tag must be updated
        update_B_target = 1;
    end
end

endmodule
