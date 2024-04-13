// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__reset = vlSelf->reset;
    vlSelf->top__DOT__clk = vlSelf->clk;
    vlSelf->top__DOT__cpu__DOT__reset = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h9aee9695_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h27fea5f1__0;
    top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h27fea5f1__0 = 0;
    CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h519f6366__0;
    top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h519f6366__0 = 0;
    CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgTmp_ha506c762__0;
    top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgTmp_ha506c762__0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
    __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
    __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 0;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    __Vdlyvval__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    __Vdlyvset__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 0U;
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 1U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 2U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 3U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 4U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 5U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 6U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 7U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 8U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 9U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xaU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xbU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xcU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xdU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xeU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xfU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x10U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x11U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x12U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x13U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x14U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x15U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x16U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x17U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x18U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x19U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1aU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1bU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1cU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1dU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1eU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1fU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x20U;
    }
    if (VL_UNLIKELY(vlSelf->reset)) {
        vlSelf->top__DOT__cpu__DOT__memory__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelf->top__DOT__cpu__DOT__memory__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__memory__DOT__mem[(0x3fffU 
                                                          & vlSelf->top__DOT__cpu__DOT__memory__DOT__i)] = 0U;
            vlSelf->top__DOT__cpu__DOT__memory__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__memory__DOT__i);
        }
        VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(16, Vtop__ConstPool__CONST_h9aee9695_0)
                     ,  &(vlSelf->top__DOT__cpu__DOT__memory__DOT__mem)
                     , 0, ~0ULL);
    } else if (vlSelf->top__DOT__cpu__DOT__MemWrite) {
        __Vdlyvval__top__DOT__cpu__DOT__memory__DOT__mem__v0 
            = vlSelf->top__DOT__cpu__DOT__B;
        __Vdlyvset__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__memory__DOT__mem__v0 
            = (0x3fffU & vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr);
    }
    if (vlSelf->reset) {
        __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 1U;
        vlSelf->top__DOT__cpu__DOT__current_pc = 0U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state = 0U;
    } else {
        if (((IData)(vlSelf->top__DOT__cpu__DOT__RegWrite) 
             & (0U != (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                                >> 7U))))) {
            __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 
                = vlSelf->top__DOT__cpu__DOT__rd_din;
            __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 
                = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                            >> 7U));
        }
        if (vlSelf->top__DOT__cpu__DOT__PC_update) {
            vlSelf->top__DOT__cpu__DOT__current_pc 
                = vlSelf->top__DOT__cpu__DOT__next_pc;
        }
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state 
            = vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__next_state;
    }
    vlSelf->top__DOT__cpu__DOT__MDR = vlSelf->top__DOT__cpu__DOT__dout;
    vlSelf->top__DOT__cpu__DOT__A = vlSelf->top__DOT__cpu__DOT__rs1_dout;
    vlSelf->top__DOT__cpu__DOT__ALUOut = vlSelf->top__DOT__cpu__DOT__alu_result;
    if (__Vdlyvset__top__DOT__cpu__DOT__memory__DOT__mem__v0) {
        vlSelf->top__DOT__cpu__DOT__memory__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__memory__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[4U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[5U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[6U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[7U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[8U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[9U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xaU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xbU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xcU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xdU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xeU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xfU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x10U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x11U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x12U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x13U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x14U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x15U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x16U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x17U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x18U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x19U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1aU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1bU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1cU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1dU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1eU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1fU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0x2ffcU;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v33) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v33] 
            = __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
    }
    vlSelf->top__DOT__cpu__DOT__B = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    if (vlSelf->top__DOT__cpu__DOT__IRWrite) {
        vlSelf->top__DOT__cpu__DOT__IR = vlSelf->top__DOT__cpu__DOT__dout;
    }
    vlSelf->print_reg[0U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0U];
    vlSelf->print_reg[1U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [1U];
    vlSelf->print_reg[2U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [2U];
    vlSelf->print_reg[3U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [3U];
    vlSelf->print_reg[4U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [4U];
    vlSelf->print_reg[5U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [5U];
    vlSelf->print_reg[6U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [6U];
    vlSelf->print_reg[7U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [7U];
    vlSelf->print_reg[8U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [8U];
    vlSelf->print_reg[9U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [9U];
    vlSelf->print_reg[0xaU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xaU];
    vlSelf->print_reg[0xbU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xbU];
    vlSelf->print_reg[0xcU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xcU];
    vlSelf->print_reg[0xdU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xdU];
    vlSelf->print_reg[0xeU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xeU];
    vlSelf->print_reg[0xfU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xfU];
    vlSelf->print_reg[0x10U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x10U];
    vlSelf->print_reg[0x11U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x11U];
    vlSelf->print_reg[0x12U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x12U];
    vlSelf->print_reg[0x13U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x13U];
    vlSelf->print_reg[0x14U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x14U];
    vlSelf->print_reg[0x15U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x15U];
    vlSelf->print_reg[0x16U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x16U];
    vlSelf->print_reg[0x17U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x17U];
    vlSelf->print_reg[0x18U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x18U];
    vlSelf->print_reg[0x19U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x19U];
    vlSelf->print_reg[0x1aU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1aU];
    vlSelf->print_reg[0x1bU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1bU];
    vlSelf->print_reg[0x1cU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1cU];
    vlSelf->print_reg[0x1dU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1dU];
    vlSelf->print_reg[0x1eU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1eU];
    vlSelf->print_reg[0x1fU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1fU];
    vlSelf->top__DOT__cpu__DOT__MemtoReg_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__MDR;
    vlSelf->top__DOT__cpu__DOT__ALUSrcA_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__A;
    vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__B = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__MemtoReg_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__PCSource_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__A = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__ALUSrcA_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__RegWrite = ((1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                   >> 2U)) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))));
    vlSelf->top__DOT__cpu__DOT__IorD = ((1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                               >> 2U)) 
                                        && ((1U & (~ 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                    >> 1U))) 
                                            && (1U 
                                                & (~ (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state)))));
    vlSelf->top__DOT__cpu__DOT__IRWrite = ((1U & (~ 
                                                  ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                   >> 2U))) 
                                           && ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                    >> 1U))) 
                                               && (1U 
                                                   & (~ (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state)))));
    vlSelf->top__DOT__print_reg[0U] = vlSelf->print_reg
        [0U];
    vlSelf->top__DOT__print_reg[1U] = vlSelf->print_reg
        [1U];
    vlSelf->top__DOT__print_reg[2U] = vlSelf->print_reg
        [2U];
    vlSelf->top__DOT__print_reg[3U] = vlSelf->print_reg
        [3U];
    vlSelf->top__DOT__print_reg[4U] = vlSelf->print_reg
        [4U];
    vlSelf->top__DOT__print_reg[5U] = vlSelf->print_reg
        [5U];
    vlSelf->top__DOT__print_reg[6U] = vlSelf->print_reg
        [6U];
    vlSelf->top__DOT__print_reg[7U] = vlSelf->print_reg
        [7U];
    vlSelf->top__DOT__print_reg[8U] = vlSelf->print_reg
        [8U];
    vlSelf->top__DOT__print_reg[9U] = vlSelf->print_reg
        [9U];
    vlSelf->top__DOT__print_reg[0xaU] = vlSelf->print_reg
        [0xaU];
    vlSelf->top__DOT__print_reg[0xbU] = vlSelf->print_reg
        [0xbU];
    vlSelf->top__DOT__print_reg[0xcU] = vlSelf->print_reg
        [0xcU];
    vlSelf->top__DOT__print_reg[0xdU] = vlSelf->print_reg
        [0xdU];
    vlSelf->top__DOT__print_reg[0xeU] = vlSelf->print_reg
        [0xeU];
    vlSelf->top__DOT__print_reg[0xfU] = vlSelf->print_reg
        [0xfU];
    vlSelf->top__DOT__print_reg[0x10U] = vlSelf->print_reg
        [0x10U];
    vlSelf->top__DOT__print_reg[0x11U] = vlSelf->print_reg
        [0x11U];
    vlSelf->top__DOT__print_reg[0x12U] = vlSelf->print_reg
        [0x12U];
    vlSelf->top__DOT__print_reg[0x13U] = vlSelf->print_reg
        [0x13U];
    vlSelf->top__DOT__print_reg[0x14U] = vlSelf->print_reg
        [0x14U];
    vlSelf->top__DOT__print_reg[0x15U] = vlSelf->print_reg
        [0x15U];
    vlSelf->top__DOT__print_reg[0x16U] = vlSelf->print_reg
        [0x16U];
    vlSelf->top__DOT__print_reg[0x17U] = vlSelf->print_reg
        [0x17U];
    vlSelf->top__DOT__print_reg[0x18U] = vlSelf->print_reg
        [0x18U];
    vlSelf->top__DOT__print_reg[0x19U] = vlSelf->print_reg
        [0x19U];
    vlSelf->top__DOT__print_reg[0x1aU] = vlSelf->print_reg
        [0x1aU];
    vlSelf->top__DOT__print_reg[0x1bU] = vlSelf->print_reg
        [0x1bU];
    vlSelf->top__DOT__print_reg[0x1cU] = vlSelf->print_reg
        [0x1cU];
    vlSelf->top__DOT__print_reg[0x1dU] = vlSelf->print_reg
        [0x1dU];
    vlSelf->top__DOT__print_reg[0x1eU] = vlSelf->print_reg
        [0x1eU];
    vlSelf->top__DOT__print_reg[0x1fU] = vlSelf->print_reg
        [0x1fU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0U] = vlSelf->print_reg
        [0U];
    vlSelf->top__DOT__cpu__DOT__print_reg[1U] = vlSelf->print_reg
        [1U];
    vlSelf->top__DOT__cpu__DOT__print_reg[2U] = vlSelf->print_reg
        [2U];
    vlSelf->top__DOT__cpu__DOT__print_reg[3U] = vlSelf->print_reg
        [3U];
    vlSelf->top__DOT__cpu__DOT__print_reg[4U] = vlSelf->print_reg
        [4U];
    vlSelf->top__DOT__cpu__DOT__print_reg[5U] = vlSelf->print_reg
        [5U];
    vlSelf->top__DOT__cpu__DOT__print_reg[6U] = vlSelf->print_reg
        [6U];
    vlSelf->top__DOT__cpu__DOT__print_reg[7U] = vlSelf->print_reg
        [7U];
    vlSelf->top__DOT__cpu__DOT__print_reg[8U] = vlSelf->print_reg
        [8U];
    vlSelf->top__DOT__cpu__DOT__print_reg[9U] = vlSelf->print_reg
        [9U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xaU] = vlSelf->print_reg
        [0xaU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xbU] = vlSelf->print_reg
        [0xbU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xcU] = vlSelf->print_reg
        [0xcU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xdU] = vlSelf->print_reg
        [0xdU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xeU] = vlSelf->print_reg
        [0xeU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xfU] = vlSelf->print_reg
        [0xfU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x10U] = 
        vlSelf->print_reg[0x10U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x11U] = 
        vlSelf->print_reg[0x11U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x12U] = 
        vlSelf->print_reg[0x12U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x13U] = 
        vlSelf->print_reg[0x13U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x14U] = 
        vlSelf->print_reg[0x14U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x15U] = 
        vlSelf->print_reg[0x15U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x16U] = 
        vlSelf->print_reg[0x16U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x17U] = 
        vlSelf->print_reg[0x17U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x18U] = 
        vlSelf->print_reg[0x18U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x19U] = 
        vlSelf->print_reg[0x19U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1aU] = 
        vlSelf->print_reg[0x1aU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1bU] = 
        vlSelf->print_reg[0x1bU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1cU] = 
        vlSelf->print_reg[0x1cU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1dU] = 
        vlSelf->print_reg[0x1dU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1eU] = 
        vlSelf->print_reg[0x1eU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1fU] = 
        vlSelf->print_reg[0x1fU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0U] 
        = vlSelf->print_reg[0U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[1U] 
        = vlSelf->print_reg[1U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[2U] 
        = vlSelf->print_reg[2U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[3U] 
        = vlSelf->print_reg[3U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[4U] 
        = vlSelf->print_reg[4U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[5U] 
        = vlSelf->print_reg[5U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[6U] 
        = vlSelf->print_reg[6U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[7U] 
        = vlSelf->print_reg[7U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[8U] 
        = vlSelf->print_reg[8U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[9U] 
        = vlSelf->print_reg[9U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xaU] 
        = vlSelf->print_reg[0xaU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xbU] 
        = vlSelf->print_reg[0xbU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xcU] 
        = vlSelf->print_reg[0xcU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xdU] 
        = vlSelf->print_reg[0xdU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xeU] 
        = vlSelf->print_reg[0xeU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xfU] 
        = vlSelf->print_reg[0xfU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x10U] 
        = vlSelf->print_reg[0x10U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x11U] 
        = vlSelf->print_reg[0x11U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x12U] 
        = vlSelf->print_reg[0x12U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x13U] 
        = vlSelf->print_reg[0x13U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x14U] 
        = vlSelf->print_reg[0x14U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x15U] 
        = vlSelf->print_reg[0x15U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x16U] 
        = vlSelf->print_reg[0x16U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x17U] 
        = vlSelf->print_reg[0x17U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x18U] 
        = vlSelf->print_reg[0x18U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x19U] 
        = vlSelf->print_reg[0x19U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1aU] 
        = vlSelf->print_reg[0x1aU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1bU] 
        = vlSelf->print_reg[0x1bU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1cU] 
        = vlSelf->print_reg[0x1cU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1dU] 
        = vlSelf->print_reg[0x1dU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1eU] 
        = vlSelf->print_reg[0x1eU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1fU] 
        = vlSelf->print_reg[0x1fU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__RegWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__RegWrite 
        = vlSelf->top__DOT__cpu__DOT__RegWrite;
    if (vlSelf->top__DOT__cpu__DOT__IorD) {
        vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__Enable = 1U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IorD = 1U;
        vlSelf->top__DOT__cpu__DOT__addr = vlSelf->top__DOT__cpu__DOT__ALUOut;
    } else {
        vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__Enable = 0U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IorD = 0U;
        vlSelf->top__DOT__cpu__DOT__addr = vlSelf->top__DOT__cpu__DOT__current_pc;
    }
    vlSelf->top__DOT__cpu__DOT__memory__DOT__din = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__ALUSrcB_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IRWrite 
        = vlSelf->top__DOT__cpu__DOT__IRWrite;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = 
        (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 7U));
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__part_of_inst 
        = (0x7fU & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0U));
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst 
        = vlSelf->top__DOT__cpu__DOT__IR;
    if ((0x40U & vlSelf->top__DOT__cpu__DOT__IR)) {
        if ((0x20U & vlSelf->top__DOT__cpu__DOT__IR)) {
            if ((1U & (~ (vlSelf->top__DOT__cpu__DOT__IR 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__cpu__DOT__IR)) {
                    if ((4U & vlSelf->top__DOT__cpu__DOT__IR)) {
                        if ((2U & vlSelf->top__DOT__cpu__DOT__IR)) {
                            if ((1U & vlSelf->top__DOT__cpu__DOT__IR)) {
                                vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x15U;
                                vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x16U;
                                vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x17U;
                                vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x18U;
                                vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x19U;
                                vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1aU;
                                vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1bU;
                                vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1cU;
                                vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1dU;
                                vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1eU;
                                vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1fU;
                                vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x20U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->top__DOT__cpu__DOT__IR)) {
                    if ((2U & vlSelf->top__DOT__cpu__DOT__IR)) {
                        if ((1U & vlSelf->top__DOT__cpu__DOT__IR)) {
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0xcU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0xdU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0xeU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0xfU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x10U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x11U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x12U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x13U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x14U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x15U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x16U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x17U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x18U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x19U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1aU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1bU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1cU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1dU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1eU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1fU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x20U;
                        }
                    }
                } else if ((2U & vlSelf->top__DOT__cpu__DOT__IR)) {
                    if ((1U & vlSelf->top__DOT__cpu__DOT__IR)) {
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0xdU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0xeU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0xfU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x10U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x11U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x12U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x13U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x14U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x15U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x16U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x17U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x18U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x19U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1aU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1bU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1cU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1dU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1eU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1fU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x20U;
                    }
                }
            }
            if ((0x10U & vlSelf->top__DOT__cpu__DOT__IR)) {
                vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
            } else if ((8U & vlSelf->top__DOT__cpu__DOT__IR)) {
                if ((4U & vlSelf->top__DOT__cpu__DOT__IR)) {
                    if ((2U & vlSelf->top__DOT__cpu__DOT__IR)) {
                        if ((1U & vlSelf->top__DOT__cpu__DOT__IR)) {
                            vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                                = ((0xfffff800U & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                                   | ((0x7e0U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                 >> 0x14U)) 
                                      | (0x1eU & (vlSelf->top__DOT__cpu__DOT__IR 
                                                  >> 0x14U))));
                            vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                                = ((0xffe007ffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                                   | ((0x100000U & 
                                       (vlSelf->top__DOT__cpu__DOT__IR 
                                        >> 0xbU)) | 
                                      ((0xff000U & vlSelf->top__DOT__cpu__DOT__IR) 
                                       | (0x800U & 
                                          (vlSelf->top__DOT__cpu__DOT__IR 
                                           >> 9U)))));
                            vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                                = ((0xff1fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                                   | ((0x800000U & 
                                       (vlSelf->top__DOT__cpu__DOT__IR 
                                        >> 8U)) | (
                                                   (0x400000U 
                                                    & (vlSelf->top__DOT__cpu__DOT__IR 
                                                       >> 9U)) 
                                                   | (0x200000U 
                                                      & (vlSelf->top__DOT__cpu__DOT__IR 
                                                         >> 0xaU)))));
                            vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                                = ((0xf8ffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                                   | ((0x4000000U & 
                                       (vlSelf->top__DOT__cpu__DOT__IR 
                                        >> 5U)) | (
                                                   (0x2000000U 
                                                    & (vlSelf->top__DOT__cpu__DOT__IR 
                                                       >> 6U)) 
                                                   | (0x1000000U 
                                                      & (vlSelf->top__DOT__cpu__DOT__IR 
                                                         >> 7U)))));
                            vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                                = ((0xc7ffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                                   | ((0x20000000U 
                                       & (vlSelf->top__DOT__cpu__DOT__IR 
                                          >> 2U)) | 
                                      ((0x10000000U 
                                        & (vlSelf->top__DOT__cpu__DOT__IR 
                                           >> 3U)) 
                                       | (0x8000000U 
                                          & (vlSelf->top__DOT__cpu__DOT__IR 
                                             >> 4U)))));
                            vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                                = ((0x3fffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                                   | ((0x80000000U 
                                       & vlSelf->top__DOT__cpu__DOT__IR) 
                                      | (0x40000000U 
                                         & (vlSelf->top__DOT__cpu__DOT__IR 
                                            >> 1U))));
                        } else {
                            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
                    }
                } else {
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__cpu__DOT__IR)) {
                if ((2U & vlSelf->top__DOT__cpu__DOT__IR)) {
                    if ((1U & vlSelf->top__DOT__cpu__DOT__IR)) {
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                            = ((0xffffc000U & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                               | ((0x2000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                              >> 0x12U)) 
                                  | ((0x1000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                 >> 0x13U)) 
                                     | (vlSelf->top__DOT__cpu__DOT__IR 
                                        >> 0x14U))));
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                            = ((0xfffe3fffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                               | ((0x10000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                               >> 0xfU)) 
                                  | ((0x8000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                 >> 0x10U)) 
                                     | (0x4000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                   >> 0x11U)))));
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                            = ((0xfff1ffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                               | ((0x80000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                               >> 0xcU)) 
                                  | ((0x40000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                  >> 0xdU)) 
                                     | (0x20000U & 
                                        (vlSelf->top__DOT__cpu__DOT__IR 
                                         >> 0xeU)))));
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                            = ((0xff8fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                               | ((0x400000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                >> 9U)) 
                                  | ((0x200000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                   >> 0xaU)) 
                                     | (0x100000U & 
                                        (vlSelf->top__DOT__cpu__DOT__IR 
                                         >> 0xbU)))));
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                            = ((0xfc7fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                               | ((0x2000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                 >> 6U)) 
                                  | ((0x1000000U & 
                                      (vlSelf->top__DOT__cpu__DOT__IR 
                                       >> 7U)) | (0x800000U 
                                                  & (vlSelf->top__DOT__cpu__DOT__IR 
                                                     >> 8U)))));
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                            = ((0xe3ffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                               | ((0x10000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                  >> 3U)) 
                                  | ((0x8000000U & 
                                      (vlSelf->top__DOT__cpu__DOT__IR 
                                       >> 4U)) | (0x4000000U 
                                                  & (vlSelf->top__DOT__cpu__DOT__IR 
                                                     >> 5U)))));
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                            = ((0x1fffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                               | ((0x80000000U & vlSelf->top__DOT__cpu__DOT__IR) 
                                  | ((0x40000000U & 
                                      (vlSelf->top__DOT__cpu__DOT__IR 
                                       >> 1U)) | (0x20000000U 
                                                  & (vlSelf->top__DOT__cpu__DOT__IR 
                                                     >> 2U)))));
                    } else {
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
                    }
                } else {
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
                }
            } else if ((2U & vlSelf->top__DOT__cpu__DOT__IR)) {
                if ((1U & vlSelf->top__DOT__cpu__DOT__IR)) {
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0xfffff800U & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x7e0U & (vlSelf->top__DOT__cpu__DOT__IR 
                                         >> 0x14U)) 
                              | (0x1eU & (vlSelf->top__DOT__cpu__DOT__IR 
                                          >> 7U))));
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0xffffc7ffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x2000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                          >> 0x12U)) 
                              | ((0x1000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                             >> 0x13U)) 
                                 | (0x800U & (vlSelf->top__DOT__cpu__DOT__IR 
                                              << 4U)))));
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0xfffe3fffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x10000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                           >> 0xfU)) 
                              | ((0x8000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                             >> 0x10U)) 
                                 | (0x4000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                               >> 0x11U)))));
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0xfff1ffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x80000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                           >> 0xcU)) 
                              | ((0x40000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                              >> 0xdU)) 
                                 | (0x20000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                >> 0xeU)))));
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0xff8fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x400000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                            >> 9U)) 
                              | ((0x200000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                               >> 0xaU)) 
                                 | (0x100000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                 >> 0xbU)))));
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0xfc7fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x2000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                             >> 6U)) 
                              | ((0x1000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                >> 7U)) 
                                 | (0x800000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                 >> 8U)))));
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0xe3ffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x10000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                              >> 3U)) 
                              | ((0x8000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                >> 4U)) 
                                 | (0x4000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                  >> 5U)))));
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0x1fffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x80000000U & vlSelf->top__DOT__cpu__DOT__IR) 
                              | ((0x40000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                 >> 1U)) 
                                 | (0x20000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                                   >> 2U)))));
                } else {
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
                }
            } else {
                vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
            }
        } else {
            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
        }
    } else if ((0x20U & vlSelf->top__DOT__cpu__DOT__IR)) {
        if ((1U & (~ (vlSelf->top__DOT__cpu__DOT__IR 
                      >> 4U)))) {
            if ((1U & (~ (vlSelf->top__DOT__cpu__DOT__IR 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__cpu__DOT__IR 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__cpu__DOT__IR)) {
                        if ((1U & vlSelf->top__DOT__cpu__DOT__IR)) {
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0xcU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0xdU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0xeU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0xfU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x10U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x11U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x12U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x13U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x14U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x15U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x16U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x17U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x18U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x19U;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1aU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1bU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1cU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1dU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1eU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1fU;
                            vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x20U;
                        }
                    }
                }
            }
        }
        if ((0x10U & vlSelf->top__DOT__cpu__DOT__IR)) {
            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
        } else if ((8U & vlSelf->top__DOT__cpu__DOT__IR)) {
            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
        } else if ((4U & vlSelf->top__DOT__cpu__DOT__IR)) {
            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
        } else if ((2U & vlSelf->top__DOT__cpu__DOT__IR)) {
            if ((1U & vlSelf->top__DOT__cpu__DOT__IR)) {
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xfffff000U & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x800U & (vlSelf->top__DOT__cpu__DOT__IR 
                                     >> 0x14U)) | (
                                                   (0x7e0U 
                                                    & (vlSelf->top__DOT__cpu__DOT__IR 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->top__DOT__cpu__DOT__IR 
                                                         >> 7U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xffff8fffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x4000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                      >> 0x11U)) | 
                          ((0x2000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                       >> 0x12U)) | 
                           (0x1000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                       >> 0x13U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xfffc7fffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x20000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                       >> 0xeU)) | 
                          ((0x10000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                        >> 0xfU)) | 
                           (0x8000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                       >> 0x10U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xffe3ffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x100000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                        >> 0xbU)) | 
                          ((0x80000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                        >> 0xcU)) | 
                           (0x40000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                        >> 0xdU)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xff1fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x800000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                        >> 8U)) | (
                                                   (0x400000U 
                                                    & (vlSelf->top__DOT__cpu__DOT__IR 
                                                       >> 9U)) 
                                                   | (0x200000U 
                                                      & (vlSelf->top__DOT__cpu__DOT__IR 
                                                         >> 0xaU)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xf8ffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x4000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                         >> 5U)) | 
                          ((0x2000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                          >> 6U)) | 
                           (0x1000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                          >> 7U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xc7ffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x20000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                          >> 2U)) | 
                          ((0x10000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                           >> 3U)) 
                           | (0x8000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                            >> 4U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0x3fffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x80000000U & vlSelf->top__DOT__cpu__DOT__IR) 
                          | (0x40000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                            >> 1U))));
            } else {
                vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
            }
        } else {
            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
        }
    } else {
        if ((1U & (~ (vlSelf->top__DOT__cpu__DOT__IR 
                      >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__cpu__DOT__IR 
                          >> 2U)))) {
                if ((2U & vlSelf->top__DOT__cpu__DOT__IR)) {
                    if ((1U & vlSelf->top__DOT__cpu__DOT__IR)) {
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0xcU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0xdU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0xeU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0xfU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x10U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x11U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x12U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x13U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x14U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x15U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x16U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x17U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x18U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x19U;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1aU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1bU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1cU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1dU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1eU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x1fU;
                        vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = 0x20U;
                    }
                }
            }
        }
        if ((8U & vlSelf->top__DOT__cpu__DOT__IR)) {
            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
        } else if ((4U & vlSelf->top__DOT__cpu__DOT__IR)) {
            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
        } else if ((2U & vlSelf->top__DOT__cpu__DOT__IR)) {
            if ((1U & vlSelf->top__DOT__cpu__DOT__IR)) {
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xffffc000U & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x2000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                      >> 0x12U)) | 
                          ((0x1000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                       >> 0x13U)) | 
                           (vlSelf->top__DOT__cpu__DOT__IR 
                            >> 0x14U))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xfffe3fffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x10000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                       >> 0xfU)) | 
                          ((0x8000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                       >> 0x10U)) | 
                           (0x4000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                       >> 0x11U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xfff1ffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x80000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                       >> 0xcU)) | 
                          ((0x40000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                        >> 0xdU)) | 
                           (0x20000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                        >> 0xeU)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xff8fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x400000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                        >> 9U)) | (
                                                   (0x200000U 
                                                    & (vlSelf->top__DOT__cpu__DOT__IR 
                                                       >> 0xaU)) 
                                                   | (0x100000U 
                                                      & (vlSelf->top__DOT__cpu__DOT__IR 
                                                         >> 0xbU)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xfc7fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x2000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                         >> 6U)) | 
                          ((0x1000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                          >> 7U)) | 
                           (0x800000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                         >> 8U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xe3ffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x10000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                          >> 3U)) | 
                          ((0x8000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                          >> 4U)) | 
                           (0x4000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                          >> 5U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0x1fffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x80000000U & vlSelf->top__DOT__cpu__DOT__IR) 
                          | ((0x40000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                             >> 1U)) 
                             | (0x20000000U & (vlSelf->top__DOT__cpu__DOT__IR 
                                               >> 2U)))));
            } else {
                vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
            }
        } else {
            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
        }
    }
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__part_of_inst 
        = vlSelf->top__DOT__cpu__DOT__IR;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IR);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IR);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__unused 
        = (0U != vlSelf->top__DOT__cpu__DOT__IR);
    vlSelf->top__DOT__cpu__DOT__rs2_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 0x14U))];
    vlSelf->top__DOT__cpu__DOT__MemWrite = ((1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                   >> 2U)) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                     >> 1U))) 
                                                && ((1U 
                                                     & (~ (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))) 
                                                    && (3U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__cpu__DOT__IR)))));
    vlSelf->top__DOT__cpu__DOT__PCWriteNotCond = ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                       >> 2U))) 
                                                  && ((1U 
                                                       & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                          >> 1U)) 
                                                      && ((1U 
                                                           & (~ (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))) 
                                                          && (0x63U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__cpu__DOT__IR)))));
    vlSelf->top__DOT__cpu__DOT__PCSource = ((1U & (~ 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                    >> 2U))) 
                                            && ((1U 
                                                 & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                    >> 1U)) 
                                                && ((1U 
                                                     & (~ (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))) 
                                                    && (0x63U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__cpu__DOT__IR)))));
    vlSelf->top__DOT__cpu__DOT__is_ecall = (0x73U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__cpu__DOT__IR));
    top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h519f6366__0 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR)) 
           | (0x13U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR)));
    top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgTmp_ha506c762__0 
        = ((3U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR)) 
           | (0x23U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR)));
    vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__C = vlSelf->top__DOT__cpu__DOT__addr;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__addr = vlSelf->top__DOT__cpu__DOT__addr;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__addr, 2U);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__MemWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__MemWrite 
        = vlSelf->top__DOT__cpu__DOT__MemWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCWriteNotCond 
        = vlSelf->top__DOT__cpu__DOT__PCWriteNotCond;
    vlSelf->top__DOT__cpu__DOT__MemRead = ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))
                                            ? ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                    >> 1U))) 
                                               && ((1U 
                                                    & (~ (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))) 
                                                   && (3U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__cpu__DOT__IR))))
                                            : ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                    >> 1U))) 
                                               && (1U 
                                                   & (~ (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state)))));
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__MemRead;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__MemRead 
        = vlSelf->top__DOT__cpu__DOT__MemRead;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCSource 
        = vlSelf->top__DOT__cpu__DOT__PCSource;
    vlSelf->top__DOT__cpu__DOT__PCSource_mux__DOT__Enable 
        = vlSelf->top__DOT__cpu__DOT__PCSource;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    vlSelf->top__DOT__cpu__DOT__ALUSrcB_mux__DOT__C 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall 
        = vlSelf->top__DOT__cpu__DOT__is_ecall;
    vlSelf->top__DOT__cpu__DOT__MemtoReg = ((1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                   >> 2U)) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                     >> 1U))) 
                                                && ((1U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state)) 
                                                    && ((1U 
                                                         & (~ (IData)(top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h519f6366__0))) 
                                                        && (3U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__cpu__DOT__IR))))));
    top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h27fea5f1__0 
        = ((0x13U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR)) 
           | (IData)(top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgTmp_ha506c762__0));
    if ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))) {
        vlSelf->top__DOT__cpu__DOT__ALUSrcB = ((2U 
                                                & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))
                                                ? 3U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))
                                                    ? 
                                                   ((IData)(top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h519f6366__0)
                                                     ? 1U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__cpu__DOT__IR))
                                                      ? 1U
                                                      : 2U))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__cpu__DOT__IR))
                                                     ? 3U
                                                     : 1U)));
        vlSelf->top__DOT__cpu__DOT__PCWrite = ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                    >> 1U))) 
                                               && ((1U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state)) 
                                                   || (3U 
                                                       != 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__cpu__DOT__IR))));
        vlSelf->top__DOT__cpu__DOT__ALUSrcA = ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                    >> 1U))) 
                                               && ((1U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state)) 
                                                   && ((1U 
                                                        & (~ (IData)(top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h519f6366__0))) 
                                                       && ((3U 
                                                            != 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__cpu__DOT__IR)) 
                                                           && (0x6fU 
                                                               != 
                                                               (0x7fU 
                                                                & vlSelf->top__DOT__cpu__DOT__IR))))));
        vlSelf->top__DOT__cpu__DOT__ALU_op_sig = ((1U 
                                                   & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                      >> 1U)) 
                                                  || ((1U 
                                                       & (~ (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))) 
                                                      && (3U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__cpu__DOT__IR))));
    } else {
        if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))) {
            vlSelf->top__DOT__cpu__DOT__ALUSrcB = (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))
                                                    ? 
                                                   ((0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__cpu__DOT__IR))
                                                     ? 0U
                                                     : 2U)
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__cpu__DOT__IR))
                                                     ? 0U
                                                     : 1U));
            vlSelf->top__DOT__cpu__DOT__PCWrite = (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state)) 
                                                   && ((0x33U 
                                                        != 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__cpu__DOT__IR)) 
                                                       && (1U 
                                                           & (~ (IData)(top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h27fea5f1__0)))));
        } else {
            vlSelf->top__DOT__cpu__DOT__ALUSrcB = (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__is_ecall)
                                                     ? 1U
                                                     : 3U));
            vlSelf->top__DOT__cpu__DOT__PCWrite = (
                                                   (1U 
                                                    & (~ (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))) 
                                                   && (IData)(vlSelf->top__DOT__cpu__DOT__is_ecall));
        }
        vlSelf->top__DOT__cpu__DOT__ALUSrcA = ((1U 
                                                & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                   >> 1U)) 
                                               && ((1U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))
                                                    ? 
                                                   ((0x33U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__cpu__DOT__IR)) 
                                                    || (IData)(top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h27fea5f1__0))
                                                    : 
                                                   (0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__cpu__DOT__IR))));
        vlSelf->top__DOT__cpu__DOT__ALU_op_sig = ((1U 
                                                   & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                      >> 1U)) 
                                                  && ((1U 
                                                       & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))
                                                       ? 
                                                      ((0x33U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__cpu__DOT__IR)) 
                                                       || (IData)(top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h27fea5f1__0))
                                                       : 
                                                      (0x63U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__cpu__DOT__IR))));
    }
    vlSelf->top__DOT__cpu__DOT__dout = ((IData)(vlSelf->top__DOT__cpu__DOT__MemRead)
                                         ? vlSelf->top__DOT__cpu__DOT__memory__DOT__mem
                                        [(0x3fffU & vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr)]
                                         : 0U);
    vlSelf->top__DOT__cpu__DOT__rs1_in = ((IData)(vlSelf->top__DOT__cpu__DOT__is_ecall)
                                           ? 0x11U : 
                                          (0x1fU & 
                                           (vlSelf->top__DOT__cpu__DOT__IR 
                                            >> 0xfU)));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = vlSelf->top__DOT__cpu__DOT__rs1_in;
    vlSelf->top__DOT__cpu__DOT__rs1_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelf->top__DOT__cpu__DOT__rs1_in];
    if (vlSelf->top__DOT__cpu__DOT__MemtoReg) {
        vlSelf->top__DOT__cpu__DOT__MemtoReg_mux__DOT__Enable = 1U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__MemtoReg = 1U;
        vlSelf->top__DOT__cpu__DOT__rd_din = vlSelf->top__DOT__cpu__DOT__MDR;
    } else {
        vlSelf->top__DOT__cpu__DOT__MemtoReg_mux__DOT__Enable = 0U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__MemtoReg = 0U;
        vlSelf->top__DOT__cpu__DOT__rd_din = vlSelf->top__DOT__cpu__DOT__ALUOut;
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcB 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcB;
    vlSelf->top__DOT__cpu__DOT__ALUSrcB_mux__DOT__control 
        = vlSelf->top__DOT__cpu__DOT__ALUSrcB;
    vlSelf->top__DOT__cpu__DOT__alu_in_2 = ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__ALUSrcB))
                                             ? vlSelf->top__DOT__cpu__DOT__B
                                             : ((1U 
                                                 == (IData)(vlSelf->top__DOT__cpu__DOT__ALUSrcB))
                                                 ? 4U
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__ALUSrcB))
                                                  ? vlSelf->top__DOT__cpu__DOT__imm_gen_out
                                                  : 0U)));
    vlSelf->top__DOT__cpu__DOT__memory__DOT__dout = vlSelf->top__DOT__cpu__DOT__dout;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelf->top__DOT__cpu__DOT__rs1_dout;
    vlSelf->is_halted = ((IData)(vlSelf->top__DOT__cpu__DOT__is_ecall) 
                         & (0xaU == vlSelf->top__DOT__cpu__DOT__rs1_dout));
    vlSelf->top__DOT__cpu__DOT__MemtoReg_mux__DOT__C 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__ALUSrcB_mux__DOT__result 
        = vlSelf->top__DOT__cpu__DOT__alu_in_2;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 
        = vlSelf->top__DOT__cpu__DOT__alu_in_2;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCWrite 
        = vlSelf->top__DOT__cpu__DOT__PCWrite;
    if (vlSelf->top__DOT__cpu__DOT__ALUSrcA) {
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcA = 1U;
        vlSelf->top__DOT__cpu__DOT__ALUSrcA_mux__DOT__Enable = 1U;
        vlSelf->top__DOT__cpu__DOT__alu_in_1 = vlSelf->top__DOT__cpu__DOT__A;
    } else {
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcA = 0U;
        vlSelf->top__DOT__cpu__DOT__ALUSrcA_mux__DOT__Enable = 0U;
        vlSelf->top__DOT__cpu__DOT__alu_in_1 = vlSelf->top__DOT__cpu__DOT__current_pc;
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__ALU_op_sig 
        = vlSelf->top__DOT__cpu__DOT__ALU_op_sig;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__ALU_op_sig 
        = vlSelf->top__DOT__cpu__DOT__ALU_op_sig;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IR);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 
        = (7U & (vlSelf->top__DOT__cpu__DOT__IR >> 0xcU));
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7 
        = (vlSelf->top__DOT__cpu__DOT__IR >> 0x19U);
    vlSelf->top__DOT__cpu__DOT__alu_op = ((IData)(vlSelf->top__DOT__cpu__DOT__ALU_op_sig)
                                           ? ((0x40U 
                                               & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                               ? ((0x20U 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                    ? 0xfU
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                     ? 0xfU
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                        ? 0U
                                                        : 0xfU)
                                                       : 0xfU)
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                        ? 
                                                       ((0U 
                                                         == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                         ? 2U
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                          ? 3U
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                           ? 4U
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                            ? 5U
                                                            : 0xfU))))
                                                        : 0xfU)
                                                       : 0xfU))))
                                                   : 0xfU)
                                               : ((0x20U 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                   ? 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                     ? 0xfU
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                      ? 0xfU
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                        ? 
                                                       ((0x20U 
                                                         == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7))
                                                         ? 
                                                        ((0U 
                                                          == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                          ? 1U
                                                          : 0xfU)
                                                         : 
                                                        ((0U 
                                                          == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7))
                                                          ? 
                                                         ((0U 
                                                           == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                           ? 0U
                                                           : 
                                                          ((0U 
                                                            == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                            ? 1U
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                             ? 6U
                                                             : 
                                                            ((4U 
                                                              == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                              ? 7U
                                                              : 
                                                             ((6U 
                                                               == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                               ? 8U
                                                               : 
                                                              ((7U 
                                                                == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                                ? 9U
                                                                : 
                                                               ((5U 
                                                                 == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                                 ? 0xaU
                                                                 : 0xfU)))))))
                                                          : 0xfU))
                                                        : 0xfU)
                                                       : 0xfU)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                     ? 0xfU
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                      ? 0xfU
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                        ? 0U
                                                        : 0xfU)
                                                       : 0xfU))))
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                    ? 
                                                   ((8U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                     ? 0xfU
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                      ? 0xfU
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                        ? 
                                                       ((0U 
                                                         == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                          ? 6U
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                           ? 7U
                                                           : 
                                                          ((6U 
                                                            == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                            ? 8U
                                                            : 
                                                           ((7U 
                                                             == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                             ? 9U
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                              ? 0xaU
                                                              : 0xfU))))))
                                                        : 0xfU)
                                                       : 0xfU)))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                     ? 0xfU
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                      ? 0xfU
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                        ? 0U
                                                        : 0xfU)
                                                       : 0xfU))))))
                                           : 0U);
    vlSelf->top__DOT__is_halted = vlSelf->is_halted;
    vlSelf->top__DOT__cpu__DOT__ALUSrcA_mux__DOT__C 
        = vlSelf->top__DOT__cpu__DOT__alu_in_1;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 
        = vlSelf->top__DOT__cpu__DOT__alu_in_1;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = vlSelf->top__DOT__cpu__DOT__alu_op;
    if ((8U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        if ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
            vlSelf->top__DOT__cpu__DOT__alu_result = 0U;
            vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
        } else if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
            if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
                vlSelf->top__DOT__cpu__DOT__alu_result = 0U;
                vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
            } else {
                vlSelf->top__DOT__cpu__DOT__alu_result 
                    = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__alu_in_1, vlSelf->top__DOT__cpu__DOT__alu_in_2);
                vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
            vlSelf->top__DOT__cpu__DOT__alu_result 
                = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                   & vlSelf->top__DOT__cpu__DOT__alu_in_2);
            vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
        } else {
            vlSelf->top__DOT__cpu__DOT__alu_result 
                = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                   | vlSelf->top__DOT__cpu__DOT__alu_in_2);
            vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
            if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
                vlSelf->top__DOT__cpu__DOT__alu_result 
                    = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                       ^ vlSelf->top__DOT__cpu__DOT__alu_in_2);
                vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
            } else {
                vlSelf->top__DOT__cpu__DOT__alu_result 
                    = VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__cpu__DOT__alu_in_1, vlSelf->top__DOT__cpu__DOT__alu_in_2);
                vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
            vlSelf->top__DOT__cpu__DOT__alu_result 
                = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                   - vlSelf->top__DOT__cpu__DOT__alu_in_2);
            vlSelf->top__DOT__cpu__DOT__alu_bcond = 
                (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                 >= vlSelf->top__DOT__cpu__DOT__alu_in_2);
        } else {
            vlSelf->top__DOT__cpu__DOT__alu_result 
                = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                   - vlSelf->top__DOT__cpu__DOT__alu_in_2);
            vlSelf->top__DOT__cpu__DOT__alu_bcond = 
                (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                 < vlSelf->top__DOT__cpu__DOT__alu_in_2);
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
            vlSelf->top__DOT__cpu__DOT__alu_result 
                = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                   - vlSelf->top__DOT__cpu__DOT__alu_in_2);
            vlSelf->top__DOT__cpu__DOT__alu_bcond = 
                (0U != vlSelf->top__DOT__cpu__DOT__alu_result);
        } else {
            vlSelf->top__DOT__cpu__DOT__alu_result 
                = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                   - vlSelf->top__DOT__cpu__DOT__alu_in_2);
            vlSelf->top__DOT__cpu__DOT__alu_bcond = 
                (0U == vlSelf->top__DOT__cpu__DOT__alu_result);
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                  - vlSelf->top__DOT__cpu__DOT__alu_in_2);
        vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
    } else {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                  + vlSelf->top__DOT__cpu__DOT__alu_in_2);
        vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__next_state 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__is_ecall)
            ? 0U : ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))
                     ? ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))
                         ? 0U : ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))
                                  ? 0U : ((3U == (0x7fU 
                                                  & vlSelf->top__DOT__cpu__DOT__IR))
                                           ? 5U : 0U)))
                     : ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))
                         ? ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))
                             ? ((IData)(top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h519f6366__0)
                                 ? 5U : ((IData)(top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgTmp_ha506c762__0)
                                          ? 4U : 0U))
                             : ((0x63U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR))
                                 ? ((IData)(vlSelf->top__DOT__cpu__DOT__alu_bcond)
                                     ? 3U : 0U) : 3U))
                         : ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))
                             ? (((0x6fU == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR)) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->top__DOT__cpu__DOT__IR)))
                                 ? 5U : 2U) : 1U))));
    vlSelf->top__DOT__cpu__DOT__is_halted = vlSelf->top__DOT__is_halted;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result 
        = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__PCSource_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__next_pc = ((IData)(vlSelf->top__DOT__cpu__DOT__PCSource)
                                            ? vlSelf->top__DOT__cpu__DOT__ALUOut
                                            : vlSelf->top__DOT__cpu__DOT__alu_result);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_bcond 
        = vlSelf->top__DOT__cpu__DOT__alu_bcond;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_bcond 
        = vlSelf->top__DOT__cpu__DOT__alu_bcond;
    vlSelf->top__DOT__cpu__DOT__PC_update = ((IData)(vlSelf->top__DOT__cpu__DOT__PCWrite) 
                                             | ((~ (IData)(vlSelf->top__DOT__cpu__DOT__alu_bcond)) 
                                                & (IData)(vlSelf->top__DOT__cpu__DOT__PCWriteNotCond)));
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__PCSource_mux__DOT__C 
        = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__PC_update 
        = vlSelf->top__DOT__cpu__DOT__PC_update;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
