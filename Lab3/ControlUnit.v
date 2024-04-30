
`include "opcodes.v"

// state definition
`define S_IF 3'b000
`define S_ID 3'b001
`define S_EX_1 3'b010
`define S_EX_2 3'b011
`define S_MEM 3'b100
`define S_WB 3'b101

// operation signal
`define OP_SIG_ADD 1'b0
`define OP_SIG_ALU 1'b1

// ALUSrcB source
`define SrcB_reg 2'b00
`define SrcB_4 2'b01
`define SrcB_imm 2'b10
`define SrcB_none 2'b11

module ControlUnit (
    input clk,
    input reset,
    input [6:0] part_of_inst,
    input alu_bcond,
    output reg ALUSrcA,
    output reg [1:0] ALUSrcB,
    output reg ALU_op_sig,
    output reg IorD,
    output reg IRWrite,
    output reg MemRead,
    output reg MemWrite,
    output reg MemtoReg,
    output reg PCWrite,
    output reg PCWriteNotCond,
    output reg PCSource,
    output reg RegWrite,
    output is_ecall);

wire [6:0] opcode = part_of_inst;
reg [2:0] cur_state;
reg [2:0] next_state;

assign is_ecall = (opcode == `ECALL) ? 1 : 0;

// compute control signal for each state
always @(*) begin
    case (cur_state)
        `S_IF: begin
            if (is_ecall) begin
                ALUSrcA = 0;
                ALUSrcB = `SrcB_4;
                ALU_op_sig = `OP_SIG_ADD;
                IorD = 0;
                IRWrite = 1;
                MemRead = 1;
                MemWrite = 0;
                MemtoReg = 0;
                PCWrite = 1;
                PCWriteNotCond = 0;
                PCSource = 0;
                RegWrite = 0;
            end
            else begin
                ALUSrcA = 0;
                ALUSrcB = `SrcB_none;
                ALU_op_sig = `OP_SIG_ADD;
                IorD = 0;
                IRWrite = 1;
                MemRead = 1;
                MemWrite = 0;
                MemtoReg = 0;
                PCWrite = 0;
                PCWriteNotCond = 0;
                PCSource = 0;
                RegWrite = 0;
            end
        end
        `S_ID: begin
            ALUSrcA = 0;
            ALUSrcB = `SrcB_4;
            ALU_op_sig = `OP_SIG_ADD;
            IorD = 0;
            IRWrite = 0;
            MemRead = 0;
            MemWrite = 0;
            MemtoReg = 0;
            PCWrite = 0;
            PCWriteNotCond = 0;
            PCSource = 0;
            RegWrite = 0;
        end
        `S_EX_1: begin
            if (opcode == `BRANCH) begin // branch ALU op, not taken
                ALUSrcA = 1;
                ALUSrcB = `SrcB_reg;
                ALU_op_sig = `OP_SIG_ALU;
                IorD = 0;
                IRWrite = 0;
                MemRead = 0;
                MemWrite = 0;
                MemtoReg = 0;
                PCWrite = 0;
                PCWriteNotCond = 1;
                PCSource = 1;
                RegWrite = 0;
            end
            else begin
                ALUSrcA = 0;
                ALUSrcB = `SrcB_4;
                ALU_op_sig = `OP_SIG_ADD;
                IorD = 0;
                IRWrite = 0;
                MemRead = 0;
                MemWrite = 0;
                MemtoReg = 0;
                PCWrite = 0;
                PCWriteNotCond = 0;
                PCSource = 0;
                RegWrite = 0;
            end
        end
        `S_EX_2: begin
            if (opcode == `ARITHMETIC) begin
                ALUSrcA = 1;
                ALUSrcB = `SrcB_reg;
                ALU_op_sig = `OP_SIG_ALU;
                IorD = 0;
                IRWrite = 0;
                MemRead = 0;
                MemWrite = 0;
                MemtoReg = 0;
                PCWrite = 0;
                PCWriteNotCond = 0;
                PCSource = 0;
                RegWrite = 0;
            end
            else if (opcode == `ARITHMETIC_IMM || opcode == `LOAD || opcode == `STORE) begin
                ALUSrcA = 1;
                ALUSrcB = `SrcB_imm;
                ALU_op_sig = `OP_SIG_ALU;
                IorD = 0;
                IRWrite = 0;
                MemRead = 0;
                MemWrite = 0;
                MemtoReg = 0;
                PCWrite = 0;
                PCWriteNotCond = 0;
                PCSource = 0;
                RegWrite = 0;
            end
            else begin // opcode == `BRANCH, branch taken
                ALUSrcA = 0;
                ALUSrcB = `SrcB_imm;
                ALU_op_sig = `OP_SIG_ADD;
                IorD = 0;
                IRWrite = 0;
                MemRead = 0;
                MemWrite = 0;
                MemtoReg = 0;
                PCWrite = 1;
                PCWriteNotCond = 0;
                PCSource = 0;
                RegWrite = 0;
            end
        end
        `S_MEM: begin
            if (opcode == `LOAD) begin
                ALUSrcA = 0;
                ALUSrcB = `SrcB_none;
                ALU_op_sig = `OP_SIG_ALU;   // don't care
                IorD = 1;
                IRWrite = 0;
                MemRead = 1;
                MemWrite = 0;
                MemtoReg = 0;   // don't care
                PCWrite = 0;
                PCWriteNotCond = 0;
                PCSource = 0;
                RegWrite = 0;
            end
            else begin // opcode == `STORE
                ALUSrcA = 0;
                ALUSrcB = `SrcB_4;
                ALU_op_sig = `OP_SIG_ADD;
                IorD = 1;
                IRWrite = 0;
                MemRead = 0;
                MemWrite = 1;
                MemtoReg = 0;   // don't care
                PCWrite = 1;
                PCWriteNotCond = 0;
                PCSource = 0;
                RegWrite = 0;
            end
        end
        `S_WB: begin
            if (opcode == `ARITHMETIC || opcode == `ARITHMETIC_IMM) begin
                ALUSrcA = 0;
                ALUSrcB = `SrcB_4;
                ALU_op_sig = `OP_SIG_ADD;
                IorD = 0;   // don't care
                IRWrite = 0;
                MemRead = 0;
                MemWrite = 0;
                MemtoReg = 0;
                PCWrite = 1;
                PCWriteNotCond = 0;
                PCSource = 0;
                RegWrite = 1;
            end
            else if (opcode == `LOAD) begin
                ALUSrcA = 0;
                ALUSrcB = `SrcB_4;
                ALU_op_sig = `OP_SIG_ADD;
                IorD = 0;   // don't care
                IRWrite = 0;
                MemRead = 0;
                MemWrite = 0;
                MemtoReg = 1;
                PCWrite = 1;
                PCWriteNotCond = 0;
                PCSource = 0;
                RegWrite = 1;
            end
            else if (opcode == `JAL) begin
                ALUSrcA = 0;
                ALUSrcB = `SrcB_imm;
                ALU_op_sig = `OP_SIG_ADD;
                IorD = 0;   // don't care
                IRWrite = 0;
                MemRead = 0;
                MemWrite = 0;
                MemtoReg = 0;
                PCWrite = 1;
                PCWriteNotCond = 0;
                PCSource = 0;
                RegWrite = 1;
            end
            else begin // opcode == `JALR
                ALUSrcA = 1;
                ALUSrcB = `SrcB_imm;
                ALU_op_sig = `OP_SIG_ADD;
                IorD = 0;   // don't care
                IRWrite = 0;
                MemRead = 0;
                MemWrite = 0;
                MemtoReg = 0;
                PCWrite = 1;
                PCWriteNotCond = 0;
                PCSource = 0;
                RegWrite = 1;
            end
        end
        default: begin
            ALUSrcA = 0;
            ALUSrcB = `SrcB_none;
            ALU_op_sig = `OP_SIG_ALU;
            IorD = 0;
            IRWrite = 0;
            MemRead = 0;
            MemWrite = 0;
            MemtoReg = 0;
            PCWrite = 0;
            PCWriteNotCond = 0;
            PCSource = 0;
            RegWrite = 0;
        end
    endcase

end

// calculate next state
always @(*) begin
    if (is_ecall)
        next_state = `S_IF;
    else
        case (cur_state)
            `S_IF: next_state = `S_ID;
            `S_ID: begin
                if (opcode == `JAL || opcode == `JALR)
                    next_state = `S_WB;
                else
                    next_state = `S_EX_1;
            end
            `S_EX_1: begin
                if (opcode == `BRANCH)
                    if (!alu_bcond) // branch not taken
                        next_state = `S_IF;
                    else // branch taken
                        next_state = `S_EX_2;
                else
                    next_state = `S_EX_2;
            end
            `S_EX_2: begin
                if (opcode == `ARITHMETIC || opcode == `ARITHMETIC_IMM)
                    next_state = `S_WB;
                else if (opcode == `LOAD || opcode == `STORE)
                    next_state = `S_MEM;
                else // opcode == `BRANCH, branch taken
                    next_state = `S_IF;
            end
            `S_MEM: begin
                if (opcode == `LOAD)
                    next_state = `S_WB;
                else // opcode == `STORE
                    next_state = `S_IF;
            end
            `S_WB: next_state = `S_IF;
            default: next_state = `S_IF;
        endcase
end

// change state with posedge clock
always @(posedge clk) begin
    if (reset)
        cur_state <= `S_IF;
    else
        cur_state <= next_state;
end

endmodule
