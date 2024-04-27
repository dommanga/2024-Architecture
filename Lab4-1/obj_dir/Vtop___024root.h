// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(is_halted,0,0);
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__clk;
        CData/*0:0*/ top__DOT__is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__PCWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__is_hazard;
        CData/*0:0*/ top__DOT__cpu__DOT__IF_ID_inst_write;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_bcond;
        CData/*0:0*/ top__DOT__cpu__DOT__is_ecall;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__write_enable;
        CData/*0:0*/ top__DOT__cpu__DOT__pc_to_reg;
        CData/*1:0*/ top__DOT__cpu__DOT__forwardA;
        CData/*1:0*/ top__DOT__cpu__DOT__forwardB;
        CData/*4:0*/ top__DOT__cpu__DOT__rs1_in;
        CData/*3:0*/ top__DOT__cpu__DOT__ID_EX_alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_is_halted;
        CData/*4:0*/ top__DOT__cpu__DOT__ID_EX_rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__ID_EX_rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__ID_EX_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_reg_write;
        CData/*4:0*/ top__DOT__cpu__DOT__EX_MEM_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_is_halted;
        CData/*4:0*/ top__DOT__cpu__DOT__MEM_WB_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__PCWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__imem__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__imem__DOT__clk;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard_detection_unit__DOT__IF_ID_rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard_detection_unit__DOT__IF_ID_rs2;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detection_unit__DOT__ID_EX_mem_read;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard_detection_unit__DOT__ID_EX_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detection_unit__DOT__is_hazard;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detection_unit__DOT__IF_ID_inst_write;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard_detection_unit__DOT__PCWrite;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__clk;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__write_enable;
        CData/*6:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__part_of_inst;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read;
    };
    struct {
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__write_enable;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__pc_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall;
        CData/*6:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__opcode;
        CData/*6:0*/ top__DOT__cpu__DOT__imm_gen__DOT__opcode;
        CData/*4:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_rd;
        CData/*4:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_reg_write;
        CData/*1:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__forwardA;
        CData/*1:0*/ top__DOT__cpu__DOT__forwarding_unit__DOT__forwardB;
        CData/*1:0*/ top__DOT__cpu__DOT__forwardA_mux__DOT__control;
        CData/*1:0*/ top__DOT__cpu__DOT__forwardB_mux__DOT__control;
        CData/*0:0*/ top__DOT__cpu__DOT__ALUSrc_mux__DOT__Enable;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op;
        CData/*6:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode;
        CData/*2:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3;
        CData/*6:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__unused;
        CData/*3:0*/ top__DOT__cpu__DOT__alu__DOT__alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__alu__DOT__alu_bcond;
        CData/*0:0*/ top__DOT__cpu__DOT__dmem__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__dmem__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__dmem__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__dmem__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_to_reg_mux__DOT__Enable;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT__cpu__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__forwardA_mux_out;
        IData/*31:0*/ top__DOT__cpu__DOT__forwardB_mux_out;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSrc_mux_out;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_data_out;
        IData/*31:0*/ top__DOT__cpu__DOT__IF_ID_inst;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_rs1_data;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_rs2_data;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_imm;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input;
        IData/*31:0*/ top__DOT__cpu__DOT__EX_MEM_alu_out;
        IData/*31:0*/ top__DOT__cpu__DOT__EX_MEM_dmem_data;
        IData/*31:0*/ top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1;
        IData/*31:0*/ top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__Add_PC_4__DOT__in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__Add_PC_4__DOT__in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__Add_PC_4__DOT__out;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__dout;
    };
    struct {
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__imem_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__forwardA_mux__DOT__A;
        IData/*31:0*/ top__DOT__cpu__DOT__forwardA_mux__DOT__B;
        IData/*31:0*/ top__DOT__cpu__DOT__forwardA_mux__DOT__C;
        IData/*31:0*/ top__DOT__cpu__DOT__forwardA_mux__DOT__D;
        IData/*31:0*/ top__DOT__cpu__DOT__forwardA_mux__DOT__result;
        IData/*31:0*/ top__DOT__cpu__DOT__forwardB_mux__DOT__A;
        IData/*31:0*/ top__DOT__cpu__DOT__forwardB_mux__DOT__B;
        IData/*31:0*/ top__DOT__cpu__DOT__forwardB_mux__DOT__C;
        IData/*31:0*/ top__DOT__cpu__DOT__forwardB_mux__DOT__D;
        IData/*31:0*/ top__DOT__cpu__DOT__forwardB_mux__DOT__result;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSrc_mux__DOT__A;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSrc_mux__DOT__B;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUSrc_mux__DOT__C;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__part_of_inst;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__din;
        IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__dmem_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_to_reg_mux__DOT__A;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_to_reg_mux__DOT__B;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_to_reg_mux__DOT__C;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(print_reg[32],31,0);
        VlUnpacked<IData/*31:0*/, 32> top__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 1024> top__DOT__cpu__DOT__imem__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__rf;
        VlUnpacked<IData/*31:0*/, 16384> top__DOT__cpu__DOT__dmem__DOT__mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__word_size = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__Add_PC_4__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__MEM_DEPTH = 0x00000400U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__forwardA_mux__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__forwardB_mux__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__ALUSrc_mux__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__data_width = 0x00000020U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__MEM_DEPTH = 0x00004000U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__mem_to_reg_mux__DOT__data_width = 0x00000020U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
