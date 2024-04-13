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
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(is_halted,0,0);
    CData/*0:0*/ top__DOT__cpu__DOT__isJAL;
    CData/*0:0*/ top__DOT__cpu__DOT__isJALR;
    CData/*0:0*/ top__DOT__cpu__DOT__isBranch;
    CData/*0:0*/ top__DOT__cpu__DOT__memRead;
    CData/*0:0*/ top__DOT__cpu__DOT__memToReg;
    CData/*0:0*/ top__DOT__cpu__DOT__memWrite;
    CData/*0:0*/ top__DOT__cpu__DOT__ALUsrc;
    CData/*0:0*/ top__DOT__cpu__DOT__writeEnable;
    CData/*0:0*/ top__DOT__cpu__DOT__pcToReg;
    CData/*0:0*/ top__DOT__cpu__DOT__isEcall;
    CData/*0:0*/ top__DOT__cpu__DOT__alu_bcond;
    CData/*3:0*/ top__DOT__cpu__DOT__alu_op;
    CData/*4:0*/ top__DOT__cpu__DOT____Vcellinp__reg_file__rs2;
    CData/*6:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__opcode;
    CData/*2:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3;
    CData/*6:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top__DOT__cpu__DOT__next_pc;
    IData/*31:0*/ top__DOT__cpu__DOT__current_pc;
    IData/*31:0*/ top__DOT__cpu__DOT__instr_out;
    IData/*31:0*/ top__DOT__cpu__DOT__rs1_dout;
    IData/*31:0*/ top__DOT__cpu__DOT__imm_gen_out;
    IData/*31:0*/ top__DOT__cpu__DOT__alu_src2_mux_out;
    IData/*31:0*/ top__DOT__cpu__DOT__alu_result;
    IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__i;
    IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__i;
    IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__i;
    IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VL_OUT(print_reg[32],31,0);
    VlUnpacked<IData/*31:0*/, 1024> top__DOT__cpu__DOT__imem__DOT__mem;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__rf;
    VlUnpacked<IData/*31:0*/, 16384> top__DOT__cpu__DOT__dmem__DOT__mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard