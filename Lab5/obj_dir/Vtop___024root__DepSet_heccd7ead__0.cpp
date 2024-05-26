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
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__clk;
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

extern const VlWide<9>/*287:0*/ Vtop__ConstPool__CONST_h79137a98_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT____VdfgRegularize_pre_inline_ALUControlUnit_tmp_h20fe2cfa__0;
    top__DOT__cpu__DOT__alu_ctrl_unit__DOT____VdfgRegularize_pre_inline_ALUControlUnit_tmp_h20fe2cfa__0 = 0;
    CData/*4:0*/ __Vdly__top__DOT__cpu__DOT__branch_predictor__DOT__BHSR;
    __Vdly__top__DOT__cpu__DOT__branch_predictor__DOT__BHSR = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table__v0 = 0;
    IData/*24:0*/ __Vdlyvval__top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table__v0;
    __Vdlyvval__top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table__v0;
    __Vdlyvset__top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v0;
    __Vdlyvval__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0 = 0;
    CData/*1:0*/ __Vdlyvval__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0;
    __Vdlyvval__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0;
    __Vdlyvset__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__LRU__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__LRU__v0 = 0;
    CData/*0:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__LRU__v0;
    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__LRU__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__LRU__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__LRU__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v0 = 0;
    CData/*0:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v0;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v0 = 0;
    CData/*6:0*/ __Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v0;
    __Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v0;
    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v1;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v1 = 0;
    CData/*0:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v1;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v1 = 0;
    CData/*6:0*/ __Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v1;
    __Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v1 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v1;
    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v1;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v2;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v2 = 0;
    CData/*0:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v2;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v2 = 0;
    CData/*6:0*/ __Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v2;
    __Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v2 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v2;
    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v2 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v2;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v2 = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v3;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v3 = 0;
    CData/*0:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v3;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v3 = 0;
    CData/*6:0*/ __Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v3;
    __Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v3 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v3;
    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v3 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v3;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v3 = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_dirty__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_dirty__v0 = 0;
    CData/*0:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_dirty__v0;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_dirty__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__is_dirty__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__is_dirty__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__TagBank__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__TagBank__v0 = 0;
    CData/*0:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__TagBank__v0;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__TagBank__v0 = 0;
    IData/*24:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__TagBank__v0;
    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__TagBank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__TagBank__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__TagBank__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_valid__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_valid__v0 = 0;
    CData/*0:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_valid__v0;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_valid__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v4;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v4 = 0;
    CData/*0:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v4;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v4 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v4;
    VL_ZERO_W(128, __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v4);
    CData/*2:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__TagBank__v1;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__TagBank__v1 = 0;
    CData/*0:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__TagBank__v1;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__TagBank__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__TagBank__v1;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__TagBank__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_valid__v1;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_valid__v1 = 0;
    CData/*0:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_valid__v1;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_valid__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_dirty__v1;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_dirty__v1 = 0;
    CData/*0:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_dirty__v1;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_dirty__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v5;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v5 = 0;
    CData/*0:0*/ __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v5;
    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v5 = 0;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0;
    // Body
    __Vdly__top__DOT__cpu__DOT__branch_predictor__DOT__BHSR 
        = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BHSR;
    __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
    __Vdlyvset__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__is_dirty__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__LRU__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v1 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v2 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v3 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__TagBank__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__TagBank__v1 = 0U;
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 1U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 2U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 4U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 5U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 6U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 7U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 8U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 9U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0xaU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0xbU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0xcU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0xdU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0xeU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0xfU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x10U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x11U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x12U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x13U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x14U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x15U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x16U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x17U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x18U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x19U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x1aU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x1bU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x1cU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x1dU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x1eU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x1fU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = 0x20U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 1U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 2U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 3U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 4U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 5U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 6U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 7U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__i = 8U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[2U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[2U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[3U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[3U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[4U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[4U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[5U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[5U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[6U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[6U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[7U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[7U][1U] = 0U;
    }
    if (VL_UNLIKELY(vlSelf->reset)) {
        vlSelf->top__DOT__cpu__DOT__imem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelf->top__DOT__cpu__DOT__imem__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[(0x3fffU 
                                                        & vlSelf->top__DOT__cpu__DOT__imem__DOT__i)] = 0U;
            vlSelf->top__DOT__cpu__DOT__imem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__imem__DOT__i);
        }
        VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(9, Vtop__ConstPool__CONST_h79137a98_0)
                     ,  &(vlSelf->top__DOT__cpu__DOT__imem__DOT__mem)
                     , 0, ~0ULL);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write) 
             & (0U == vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter))) {
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[0U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[1U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[2U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[3U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U];
            __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0 
                = (0x3fffU & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr);
        }
    }
    vlSelf->top__DOT__cpu__DOT__is_output_valid = (
                                                   (1U 
                                                    & (~ (IData)(vlSelf->reset))) 
                                                   && (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_output_valid_temp));
    if (((((IData)(vlSelf->reset) | (IData)(vlSelf->top__DOT__cpu__DOT__is_hazard)) 
          | (IData)(vlSelf->top__DOT__cpu__DOT__miss)) 
         | (IData)(vlSelf->top__DOT__cpu__DOT__IF_ID_miss))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_pred_PC = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_pred_taken = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_branch = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src_B = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_imm = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs1 = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs2 = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_PC = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__CacheStall)))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data 
            = vlSelf->top__DOT__cpu__DOT__rs2_dout;
        vlSelf->top__DOT__cpu__DOT__ID_EX_pred_PC = vlSelf->top__DOT__cpu__DOT__IF_ID_pred_PC;
        vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal = vlSelf->top__DOT__cpu__DOT__is_jal;
        vlSelf->top__DOT__cpu__DOT__ID_EX_pred_taken 
            = vlSelf->top__DOT__cpu__DOT__IF_ID_pred_taken;
        vlSelf->top__DOT__cpu__DOT__ID_EX_branch = vlSelf->top__DOT__cpu__DOT__branch;
        vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src_B 
            = vlSelf->top__DOT__cpu__DOT__alu_src_B;
        vlSelf->top__DOT__cpu__DOT__ID_EX_imm = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data 
            = vlSelf->top__DOT__cpu__DOT__rs1_dout;
        vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr = vlSelf->top__DOT__cpu__DOT__is_jalr;
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs1 = (0x1fU 
                                                 & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                    >> 0xfU));
        vlSelf->top__DOT__cpu__DOT__ID_EX_rs2 = (0x1fU 
                                                 & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                    >> 0x14U));
        vlSelf->top__DOT__cpu__DOT__ID_EX_PC = vlSelf->top__DOT__cpu__DOT__IF_ID_PC;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                        & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][0U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                        & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][1U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                        & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][2U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[(0x3fffU 
                                                                        & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i)][3U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i);
        }
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[2U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[2U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[3U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[3U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[4U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[4U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[5U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[5U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[6U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[6U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[7U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[7U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[0U][0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[0U][0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[0U][0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[0U][0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[0U][1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[0U][1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[0U][1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[0U][1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[1U][0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[1U][0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[1U][0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[1U][0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[1U][1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[1U][1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[1U][1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[1U][1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[2U][0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[2U][0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[2U][0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[2U][0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[2U][1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[2U][1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[2U][1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[2U][1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[3U][0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[3U][0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[3U][0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[3U][0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[3U][1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[3U][1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[3U][1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[3U][1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[4U][0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[4U][0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[4U][0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[4U][0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[4U][1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[4U][1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[4U][1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[4U][1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[5U][0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[5U][0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[5U][0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[5U][0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[5U][1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[5U][1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[5U][1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[5U][1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[6U][0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[6U][0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[6U][0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[6U][0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[6U][1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[6U][1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[6U][1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[6U][1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[7U][0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[7U][0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[7U][0U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[7U][0U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[7U][1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[7U][1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[7U][1U][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[7U][1U][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[0U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[0U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[1U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[1U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[2U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[2U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[3U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[3U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[4U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[4U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[5U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[5U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[6U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[6U][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[7U][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[7U][1U] = 0U;
        __Vdly__top__DOT__cpu__DOT__branch_predictor__DOT__BHSR = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[1U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[2U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[3U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[4U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[5U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[6U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[7U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[8U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[9U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0xaU] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0xbU] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0xcU] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0xdU] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0xeU] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0xfU] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x10U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x11U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x12U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x13U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x14U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x15U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x16U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x17U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x18U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x19U] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x1aU] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x1bU] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x1cU] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x1dU] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x1eU] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[0x1fU] = 3U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[1U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[2U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[3U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[4U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[4U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[5U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[5U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[6U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[6U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[7U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[7U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[8U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[8U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[9U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[9U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0xaU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0xaU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0xbU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0xbU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0xcU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0xcU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0xdU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0xdU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0xeU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0xeU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0xfU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0xfU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x10U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x10U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x11U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x11U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x12U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x12U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x13U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x13U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x14U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x14U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x15U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x15U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x16U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x16U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x17U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x17U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x18U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x18U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x19U] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x19U] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x1aU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x1aU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x1bU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x1bU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x1cU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x1cU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x1dU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x1dU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x1eU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x1eU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[0x1fU] = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[0x1fU] = 0x1ffffffU;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU[4U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU[5U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU[6U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU[7U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 = 0U;
        __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_is_halted = 0U;
        vlSelf->top__DOT__cpu__DOT__IF_ID_pred_PC = 0U;
        vlSelf->top__DOT__cpu__DOT__IF_ID_pred_taken = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__IF_ID_PC = 0U;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out = 0U;
        vlSelf->top__DOT__cpu__DOT__current_pc = 0U;
    } else {
        if (vlSelf->top__DOT__cpu__DOT__update_B_history) {
            __Vdly__top__DOT__cpu__DOT__branch_predictor__DOT__BHSR 
                = (0x1fU & (VL_SHIFTL_III(5,5,32, (IData)(vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BHSR), 1U) 
                            + (IData)(vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__extended_actual_taken)));
            __Vdlyvval__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0 
                = (3U & ((IData)(vlSelf->top__DOT__cpu__DOT__actual_taken)
                          ? ((3U == vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT
                              [vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_pht_idx])
                              ? 3U : ((IData)(1U) + 
                                      vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT
                                      [vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_pht_idx]))
                          : ((0U == vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT
                              [vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_pht_idx])
                              ? 0U : (vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT
                                      [vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_pht_idx] 
                                      - (IData)(1U)))));
            __Vdlyvset__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0 
                = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_pht_idx;
        }
        if (vlSelf->top__DOT__cpu__DOT__update_B_target) {
            if (((vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table
                  [vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_idx] 
                  != vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_tag) 
                 | (vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB
                    [vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_idx] 
                    != vlSelf->top__DOT__cpu__DOT__actual_pc))) {
                __Vdlyvval__top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table__v0 
                    = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_tag;
                __Vdlyvset__top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table__v0 = 1U;
                __Vdlyvdim0__top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table__v0 
                    = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_idx;
                __Vdlyvval__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v0 
                    = vlSelf->top__DOT__cpu__DOT__actual_pc;
                __Vdlyvdim0__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v0 
                    = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_idx;
            }
        }
        if (vlSelf->top__DOT__cpu__DOT__cache__DOT__flip_LRU) {
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__LRU__v0 
                = (1U & (~ vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU
                         [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]));
            __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__LRU__v0 = 1U;
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__LRU__v0 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__idx;
        }
        if (vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_write) {
            if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__bo))) {
                if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__bo))) {
                    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v0 
                        = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
                    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v0 = 1U;
                    __Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v0 = 0x60U;
                    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v0 
                        = vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_way;
                    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v0 
                        = vlSelf->top__DOT__cpu__DOT__cache__DOT__idx;
                } else {
                    __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v1 
                        = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
                    __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v1 = 1U;
                    __Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v1 = 0x40U;
                    __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v1 
                        = vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_way;
                    __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v1 
                        = vlSelf->top__DOT__cpu__DOT__cache__DOT__idx;
                }
            } else if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__bo))) {
                __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v2 
                    = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
                __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v2 = 1U;
                __Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v2 = 0x20U;
                __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v2 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_way;
                __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v2 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__idx;
            } else {
                __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v3 
                    = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
                __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v3 = 1U;
                __Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v3 = 0U;
                __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v3 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_way;
                __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v3 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__idx;
            }
            __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__is_dirty__v0 = 1U;
            __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_dirty__v0 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_way;
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_dirty__v0 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__idx;
        }
        if (vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_alloc) {
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__TagBank__v0 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__tag;
            __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__TagBank__v0 = 1U;
            __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__TagBank__v0 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU
                [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx];
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__TagBank__v0 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__idx;
            __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_valid__v0 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU
                [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx];
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_valid__v0 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__idx;
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v4[0U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[0U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v4[1U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[1U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v4[2U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[2U];
            __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v4[3U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[3U];
            __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v4 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU
                [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx];
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v4 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__idx;
        }
        if (vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_clean) {
            __Vdlyvset__top__DOT__cpu__DOT__cache__DOT__TagBank__v1 = 1U;
            __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__TagBank__v1 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU
                [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx];
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__TagBank__v1 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__idx;
            __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_valid__v1 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU
                [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx];
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_valid__v1 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__idx;
            __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_dirty__v1 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU
                [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx];
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_dirty__v1 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__idx;
            __Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v5 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU
                [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx];
            __Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v5 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__idx;
        }
        vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__next_state;
        if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__CacheStall)))) {
            vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_is_halted;
            vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 
                = vlSelf->top__DOT__cpu__DOT__Cache_d_out;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write 
                = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read 
                = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read;
            vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg;
            vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg;
            vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data 
                = vlSelf->top__DOT__cpu__DOT__forwardB_mux_out;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_is_halted 
                = vlSelf->top__DOT__cpu__DOT__ID_EX_is_halted;
            if (vlSelf->top__DOT__cpu__DOT__IF_ID_inst_write) {
                vlSelf->top__DOT__cpu__DOT__IF_ID_pred_PC 
                    = vlSelf->top__DOT__cpu__DOT__pred_pc;
                vlSelf->top__DOT__cpu__DOT__IF_ID_pred_taken 
                    = vlSelf->top__DOT__cpu__DOT__pred_taken;
                vlSelf->top__DOT__cpu__DOT__IF_ID_PC 
                    = vlSelf->top__DOT__cpu__DOT__current_pc;
            }
            vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg 
                = vlSelf->top__DOT__cpu__DOT__ID_EX_pc_to_reg;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg 
                = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
                = vlSelf->top__DOT__cpu__DOT__alu_result;
        }
        if (((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived) 
             & (0U == vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter))) {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0x32U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_read;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_write;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__addr;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__din_dmem[0U];
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__din_dmem[1U];
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__din_dmem[2U];
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U] 
                = vlSelf->top__DOT__cpu__DOT__cache__DOT__din_dmem[3U];
        } else if ((0U < vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter)) {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
                = (vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
                   - (IData)(1U));
        } else {
            __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[0U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[1U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[2U] = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din[3U] = 0U;
        }
        if (vlSelf->top__DOT__cpu__DOT____Vcellinp__pc__PCWrite) {
            vlSelf->top__DOT__cpu__DOT__current_pc 
                = vlSelf->top__DOT__cpu__DOT__next_pc;
        }
    }
    if (((((IData)(vlSelf->reset) | (IData)(vlSelf->top__DOT__cpu__DOT__is_hazard)) 
          | (IData)(vlSelf->top__DOT__cpu__DOT__miss)) 
         | (IData)(vlSelf->top__DOT__cpu__DOT__IF_ID_miss))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_pc_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__CacheStall)))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input 
            = vlSelf->top__DOT__cpu__DOT__IF_ID_inst;
        vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write 
            = vlSelf->top__DOT__cpu__DOT__mem_write;
        vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read 
            = vlSelf->top__DOT__cpu__DOT__mem_read;
        vlSelf->top__DOT__cpu__DOT__ID_EX_pc_to_reg 
            = vlSelf->top__DOT__cpu__DOT__pc_to_reg;
        vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg 
            = vlSelf->top__DOT__cpu__DOT__mem_to_reg;
    }
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BHSR 
        = __Vdly__top__DOT__cpu__DOT__branch_predictor__DOT__BHSR;
    if (__Vdlyvset__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0) {
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[__Vdlyvdim0__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__branch_predictor__DOT__PHT__v0;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table__v0) {
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[__Vdlyvdim0__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__branch_predictor__DOT__BTB__v0;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[__Vdlyvdim0__top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table__v0;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][0U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[0U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][1U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[1U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][2U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[2U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0][3U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem__v0[3U];
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__LRU__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__LRU__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__LRU__v0;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__is_dirty__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_dirty__v0][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_dirty__v0] = 1U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__TagBank__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_valid__v0][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_valid__v0] = 1U;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v0) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v0), 
                        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
                        [__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v0]
                        [__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v0], __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v0);
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v1) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v1), 
                        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
                        [__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v1]
                        [__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v1], __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v1);
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v2) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v2), 
                        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
                        [__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v2]
                        [__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v2], __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v2);
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__DataBank__v3) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__top__DOT__cpu__DOT__cache__DOT__DataBank__v3), 
                        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
                        [__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v3]
                        [__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v3], __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v3);
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__TagBank__v0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v4][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v4][0U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v4[0U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v4][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v4][1U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v4[1U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v4][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v4][2U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v4[2U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v4][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v4][3U] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__DataBank__v4[3U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__TagBank__v0][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__TagBank__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__cache__DOT__TagBank__v0;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__cache__DOT__TagBank__v1) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_dirty__v1][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_dirty__v1] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__is_valid__v1][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__is_valid__v1] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v5][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v5][0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v5][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v5][1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v5][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v5][2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__DataBank__v5][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__DataBank__v5][3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[__Vdlyvdim0__top__DOT__cpu__DOT__cache__DOT__TagBank__v1][__Vdlyvdim1__top__DOT__cpu__DOT__cache__DOT__TagBank__v1] = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_output_valid 
        = vlSelf->top__DOT__cpu__DOT__is_output_valid;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_input_valid = 0U;
    vlSelf->is_halted = vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted;
    vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2;
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data;
    vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__ID_EX_pred_PC 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_pred_PC;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_is_jal 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal;
    vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__ID_EX_pred_taken 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_pred_taken;
    if (vlSelf->top__DOT__cpu__DOT__ID_EX_branch) {
        vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_branch = 1U;
        vlSelf->top__DOT__cpu__DOT__update_B_history = 0U;
        vlSelf->top__DOT__cpu__DOT__update_B_history = 1U;
    } else {
        vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_branch = 0U;
        vlSelf->top__DOT__cpu__DOT__update_B_history = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__control 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src_B;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_imm;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_imm 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_imm;
    vlSelf->top__DOT__cpu__DOT__mem_rw = vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write;
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_rs1_data 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_is_jalr 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr;
    vlSelf->top__DOT__cpu__DOT__is_input_valid = ((IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read) 
                                                  | (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write));
    vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__Enable 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs1 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs1;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs2 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs2;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_PC 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_PC;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_PC;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_tag 
        = (vlSelf->top__DOT__cpu__DOT__ID_EX_PC >> 7U);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_PC 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_PC;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_idx 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__ID_EX_PC 
                    >> 2U));
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux_out 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr)
            ? vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data
            : vlSelf->top__DOT__cpu__DOT__ID_EX_PC);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__part_of_inst 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__unused 
        = (0U != vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7 
        = (vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input 
           >> 0x19U);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 
        = (7U & (vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input 
                 >> 0xcU));
    vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter 
        = __Vdly__top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
    if ((1U != (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_input_valid 
            = ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state)) 
               || (3U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state)));
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_input_valid;
    vlSelf->top__DOT__is_halted = vlSelf->is_halted;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__update_B_history 
        = vlSelf->top__DOT__cpu__DOT__update_B_history;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__update_B_history 
        = vlSelf->top__DOT__cpu__DOT__update_B_history;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__Add_imm__DOT__in_2 
        = vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_imm;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_rw 
        = vlSelf->top__DOT__cpu__DOT__mem_rw;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_rs1_data;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux__DOT__Enable 
        = vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_is_jalr;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_input_valid 
        = vlSelf->top__DOT__cpu__DOT__is_input_valid;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_PC;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_pht_idx 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_idx) 
           ^ (IData)(vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BHSR));
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux__DOT__C 
        = vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux_out;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__Add_imm__DOT__in_1 
        = vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux_out;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__jump_addr 
        = (vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux_out 
           + vlSelf->top__DOT__cpu__DOT__ID_EX_imm);
    top__DOT__cpu__DOT__alu_ctrl_unit__DOT____VdfgRegularize_pre_inline_ALUControlUnit_tmp_h20fe2cfa__0 
        = ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
            ? 6U : ((4U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                     ? 7U : ((6U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                              ? 8U : ((7U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                       ? 9U : ((5U 
                                                == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                ? 0xaU
                                                : 0xfU)))));
    if ((1U != (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
        if ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_read = 1U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_write = 0U;
        } else if ((3U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_read = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_write = 1U;
        }
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_read;
    } else {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_read;
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_write;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived 
        = (((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_read) 
            | (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_write)) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_input_valid));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_ready 
        = (0U == vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__din = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
    vlSelf->top__DOT__cpu__DOT__is_halted = vlSelf->top__DOT__is_halted;
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_halted = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & ((IData)(vlSelf->top__DOT__cpu__DOT__is_ecall) 
                                                      & (0xaU 
                                                         == vlSelf->top__DOT__cpu__DOT__rs1_17)));
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__ID_EX_mem_read 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__Add_imm__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__jump_addr;
    vlSelf->top__DOT__cpu__DOT__alu_op = ((0x40U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                           ? ((0x20U 
                                               & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                               ? ((0x10U 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                   ? 0xfU
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode))
                                                    ? 
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
                                                     : 0xfU)
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
                                               ? ((0x10U 
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
                                                           : (IData)(top__DOT__cpu__DOT__alu_ctrl_unit__DOT____VdfgRegularize_pre_inline_ALUControlUnit_tmp_h20fe2cfa__0)))
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
                                               : ((0x10U 
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
                                                        : (IData)(top__DOT__cpu__DOT__alu_ctrl_unit__DOT____VdfgRegularize_pre_inline_ALUControlUnit_tmp_h20fe2cfa__0))
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
                                                      : 0xfU))))));
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__C 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__C 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__addr = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo = (3U 
                                                  & (vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
                                                     >> 2U));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag = (vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
                                                   >> 7U);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__idx = (7U 
                                                   & (vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
                                                      >> 4U));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_ready;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_clean = 0U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_output_valid 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_ready));
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo_mux__DOT__control 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__bo;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_way 
        = (vlSelf->top__DOT__cpu__DOT__cache__DOT__tag 
           == vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank
           [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
           [1U]);
    if ((vlSelf->top__DOT__cpu__DOT__cache__DOT__tag 
         == vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank
         [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
         [0U])) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[0U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
            [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
            [0U][0U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[1U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
            [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
            [0U][1U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[2U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
            [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
            [0U][2U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[3U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
            [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
            [0U][3U];
    } else {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[0U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
            [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
            [1U][0U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[1U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
            [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
            [1U][1U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[2U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
            [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
            [1U][2U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[3U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
            [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
            [1U][3U];
    }
    vlSelf->top__DOT__cpu__DOT__is_hit = (((vlSelf->top__DOT__cpu__DOT__cache__DOT__tag 
                                            == vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank
                                            [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
                                            [0U]) & 
                                           vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid
                                           [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
                                           [0U]) | 
                                          ((vlSelf->top__DOT__cpu__DOT__cache__DOT__tag 
                                            == vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank
                                            [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
                                            [1U]) & 
                                           vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid
                                           [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
                                           [1U]));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_output_valid;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_alloc = 0U;
    if ((1U != (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
        if ((2U != (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
            if ((3U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
                if (vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_ready) {
                    vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_clean = 1U;
                }
                vlSelf->top__DOT__cpu__DOT__cache__DOT__din_dmem[0U] 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
                    [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
                    [vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU
                    [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]][0U];
                vlSelf->top__DOT__cpu__DOT__cache__DOT__din_dmem[1U] 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
                    [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
                    [vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU
                    [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]][1U];
                vlSelf->top__DOT__cpu__DOT__cache__DOT__din_dmem[2U] 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
                    [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
                    [vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU
                    [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]][2U];
                vlSelf->top__DOT__cpu__DOT__cache__DOT__din_dmem[3U] 
                    = vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank
                    [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
                    [vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU
                    [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]][3U];
            } else {
                vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_clean = 0U;
            }
        }
        if ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__addr_dmem 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
            if (vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_output_valid) {
                vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_alloc = 1U;
            }
        } else {
            if ((3U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
                vlSelf->top__DOT__cpu__DOT__cache__DOT__addr_dmem 
                    = ((vlSelf->top__DOT__cpu__DOT__cache__DOT__tag 
                        << 7U) | (((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__idx) 
                                   << 4U) | (((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__bo) 
                                              << 2U) 
                                             | (3U 
                                                & vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out))));
            }
            if ((3U != (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
                vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_alloc = 0U;
            }
        }
    }
    if (vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_output_valid) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[0U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][0U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[1U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][1U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[2U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][2U];
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[3U] 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem
            [(0x3fffU & vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr)][3U];
    } else {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[3U] = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux__DOT__Enable 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_pc_to_reg;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__addr = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__current_pc, 2U);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__not_taken_pc 
        = ((IData)(4U) + vlSelf->top__DOT__cpu__DOT__current_pc);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__tag 
        = (vlSelf->top__DOT__cpu__DOT__current_pc >> 7U);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__idx 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__current_pc 
                    >> 2U));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[0U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__din_dmem[0U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[1U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__din_dmem[1U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[2U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__din_dmem[2U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din[3U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__din_dmem[3U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__addr 
        = (vlSelf->top__DOT__cpu__DOT__cache__DOT__addr_dmem 
           >> (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__clog2));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo_mux__DOT__A 
        = (((0U == 0U) ? 0U : (vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[
                               (((IData)(0x1fU) + (IData)(0U)) 
                                >> 5U)] << ((IData)(0x20U) 
                                            - (IData)(0U)))) 
           | (vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[0U] 
              >> 0U));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo_mux__DOT__B 
        = (((0U == 0U) ? 0U : (vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[
                               (((IData)(0x1fU) + (IData)(0x20U)) 
                                >> 5U)] << ((IData)(0x20U) 
                                            - (IData)(0U)))) 
           | (vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[1U] 
              >> 0U));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo_mux__DOT__C 
        = (((0U == 0U) ? 0U : (vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[
                               (((IData)(0x1fU) + (IData)(0x40U)) 
                                >> 5U)] << ((IData)(0x20U) 
                                            - (IData)(0U)))) 
           | (vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[2U] 
              >> 0U));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo_mux__DOT__D 
        = (((0U == 0U) ? 0U : (vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[
                               (((IData)(0x1fU) + (IData)(0x60U)) 
                                >> 5U)] << ((IData)(0x20U) 
                                            - (IData)(0U)))) 
           | (vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[3U] 
              >> 0U));
    vlSelf->top__DOT__cpu__DOT__Cache_d_out = ((0U 
                                                == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__bo))
                                                ? vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[0U]
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__bo))
                                                    ? 
                                                   vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[1U]
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__bo))
                                                     ? 
                                                    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[2U]
                                                     : 
                                                    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS[3U])));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_hit 
        = vlSelf->top__DOT__cpu__DOT__is_hit;
    if ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
        if (vlSelf->top__DOT__cpu__DOT__is_hit) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__is_output_valid_temp = 1U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_write = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__flip_LRU = 0U;
            if (vlSelf->top__DOT__cpu__DOT__mem_rw) {
                vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_write = 1U;
            }
            if (((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_way) 
                 == vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU
                 [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx])) {
                vlSelf->top__DOT__cpu__DOT__cache__DOT__flip_LRU = 1U;
            }
        } else {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__is_output_valid_temp = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_write = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__flip_LRU = 0U;
        }
    } else {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_output_valid_temp = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_write = 0U;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__flip_LRU = 0U;
        if ((2U != (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
            if ((3U != (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
                vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_write = 0U;
                vlSelf->top__DOT__cpu__DOT__cache__DOT__flip_LRU = 0U;
            }
        }
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__next_state 
        = ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))
            ? ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))
                ? ((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_ready)
                    ? 2U : 3U) : ((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_ready)
                                   ? 1U : 2U)) : ((1U 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__cpu__DOT__is_hit)
                                                    ? 0U
                                                    : 
                                                   (vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty
                                                    [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]
                                                    [
                                                    vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU
                                                    [vlSelf->top__DOT__cpu__DOT__cache__DOT__idx]]
                                                     ? 3U
                                                     : 2U))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__cpu__DOT__is_input_valid)
                                                    ? 1U
                                                    : 0U)));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[0U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[0U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[1U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[1U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[2U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[2U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[3U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[3U];
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__Add_PC_4_NT__DOT__in_1 
        = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__Add_PC_4_NT__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__not_taken_pc;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__not_taken_pc;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB
        [vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__idx];
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pht_idx 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__idx) 
           ^ (IData)(vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BHSR));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__addr;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__dout = vlSelf->top__DOT__cpu__DOT__Cache_d_out;
    vlSelf->top__DOT__cpu__DOT__pred_taken = ((vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__tag 
                                               == vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table
                                               [vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__idx]) 
                                              & (vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT
                                                 [vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pht_idx] 
                                                 >> 1U));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo_mux__DOT__result 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__dout;
    if (vlSelf->top__DOT__cpu__DOT__pred_taken) {
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken = 1U;
        vlSelf->top__DOT__cpu__DOT__pred_pc = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB
            [vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__idx];
    } else {
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken = 0U;
        vlSelf->top__DOT__cpu__DOT__pred_pc = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__not_taken_pc;
    }
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken_mux__DOT__Enable 
        = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken;
    vlSelf->top__DOT__cpu__DOT__miss_mux__DOT__A = vlSelf->top__DOT__cpu__DOT__pred_pc;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_pc 
        = vlSelf->top__DOT__cpu__DOT__pred_pc;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken_mux__DOT__C 
        = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_pc;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0;
    // Body
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0U;
    __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 0U;
    if (vlSelf->clk) {
        if (vlSelf->reset) {
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
            __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 1U;
        }
    } else if (((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write) 
                & (0U != (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_rd)))) {
        __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 
            = vlSelf->top__DOT__cpu__DOT__rd_din;
        __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32 
            = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0x2ffcU;
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
    }
    if (__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v32) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v32] 
            = __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v32;
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
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hf1f34e79_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h4390399c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_he4685dc5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h7ca8bf9e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha96ed2bf_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h98f8cc8a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_he94ab748_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hbd434190_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hcf214628_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top__DOT__cpu__DOT__rd_din = ((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg)
                                           ? vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2
                                           : vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__C 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable 
            = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
        vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_reg_write 
            = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
        vlSelf->top__DOT__cpu__DOT__MEM_WB_rd = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd 
            = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
        vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_rd 
            = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
        vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__CacheStall)))) {
            vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write 
                = vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write;
            vlSelf->top__DOT__cpu__DOT__MEM_WB_rd = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
            vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write 
                = vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write;
        }
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable 
            = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
        vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_reg_write 
            = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd 
            = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
        vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_rd 
            = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
    }
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_reg_write 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write;
    if (((((IData)(vlSelf->reset) | (IData)(vlSelf->top__DOT__cpu__DOT__is_hazard)) 
          | (IData)(vlSelf->top__DOT__cpu__DOT__miss)) 
         | (IData)(vlSelf->top__DOT__cpu__DOT__IF_ID_miss))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__CacheStall)))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write 
            = vlSelf->top__DOT__cpu__DOT__write_enable;
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__EX_MEM_rd = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__CacheStall)))) {
        vlSelf->top__DOT__cpu__DOT__EX_MEM_rd = vlSelf->top__DOT__cpu__DOT__ID_EX_rd;
    }
    if (((((IData)(vlSelf->reset) | (IData)(vlSelf->top__DOT__cpu__DOT__is_hazard)) 
          | (IData)(vlSelf->top__DOT__cpu__DOT__miss)) 
         | (IData)(vlSelf->top__DOT__cpu__DOT__IF_ID_miss))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_rd = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__CacheStall)))) {
        vlSelf->top__DOT__cpu__DOT__ID_EX_rd = (0x1fU 
                                                & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 7U));
    }
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__IF_ID_miss = 0U;
        vlSelf->top__DOT__cpu__DOT__IF_ID_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__cpu__DOT__CacheStall)))) {
        if (vlSelf->top__DOT__cpu__DOT__IF_ID_inst_write) {
            vlSelf->top__DOT__cpu__DOT__IF_ID_miss 
                = vlSelf->top__DOT__cpu__DOT__miss;
            vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                = vlSelf->top__DOT__cpu__DOT__dout;
        }
    }
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_rd 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelf->top__DOT__cpu__DOT__forwardA = ((((0U != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1)) 
                                              & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1) 
                                                 == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd))) 
                                             & (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write))
                                             ? 2U : 
                                            ((((0U 
                                                != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1)) 
                                               & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1) 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_rd))) 
                                              & (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write))
                                              ? 1U : 0U));
    vlSelf->top__DOT__cpu__DOT__forwardB = ((((0U != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2)) 
                                              & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2) 
                                                 == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd))) 
                                             & (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write))
                                             ? 2U : 
                                            ((((0U 
                                                != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2)) 
                                               & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2) 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_rd))) 
                                              & (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write))
                                              ? 1U : 0U));
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__forwardA 
        = vlSelf->top__DOT__cpu__DOT__forwardA;
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__control 
        = vlSelf->top__DOT__cpu__DOT__forwardA;
    vlSelf->top__DOT__cpu__DOT__forwardA_mux_out = 
        ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__forwardA))
          ? vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data
          : ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__forwardA))
              ? vlSelf->top__DOT__cpu__DOT__rd_din : 
             ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__forwardA))
               ? vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out
               : 0U)));
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__forwardB 
        = vlSelf->top__DOT__cpu__DOT__forwardB;
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__control 
        = vlSelf->top__DOT__cpu__DOT__forwardB;
    vlSelf->top__DOT__cpu__DOT__forwardB_mux_out = 
        ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__forwardB))
          ? vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data
          : ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__forwardB))
              ? vlSelf->top__DOT__cpu__DOT__rd_din : 
             ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__forwardB))
               ? vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out
               : 0U)));
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__ID_EX_reg_write 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write;
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__result 
        = vlSelf->top__DOT__cpu__DOT__forwardA_mux_out;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__forwardA_mux_out;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out = 
        ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_pc_to_reg)
          ? vlSelf->top__DOT__cpu__DOT__ID_EX_PC : vlSelf->top__DOT__cpu__DOT__forwardA_mux_out);
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__result 
        = vlSelf->top__DOT__cpu__DOT__forwardB_mux_out;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__forwardB_mux_out;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out = 
        ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src_B))
          ? vlSelf->top__DOT__cpu__DOT__forwardB_mux_out
          : ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src_B))
              ? vlSelf->top__DOT__cpu__DOT__ID_EX_imm
              : ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src_B))
                  ? 4U : 0U)));
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__ID_EX_rd 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rd;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux__DOT__C 
        = vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 
        = vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__result 
        = vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 
        = vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out;
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
                    = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out, vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out);
                vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
            vlSelf->top__DOT__cpu__DOT__alu_result 
                = (vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out 
                   & vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out);
            vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
        } else {
            vlSelf->top__DOT__cpu__DOT__alu_result 
                = (vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out 
                   | vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out);
            vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
        }
    } else if ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
            if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
                vlSelf->top__DOT__cpu__DOT__alu_result 
                    = (vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out 
                       ^ vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out);
                vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
            } else {
                vlSelf->top__DOT__cpu__DOT__alu_result 
                    = VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out, vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out);
                vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
            vlSelf->top__DOT__cpu__DOT__alu_result 
                = (vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out 
                   - vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out);
            vlSelf->top__DOT__cpu__DOT__alu_bcond = 
                (vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out 
                 >= vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out);
        } else {
            vlSelf->top__DOT__cpu__DOT__alu_result 
                = (vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out 
                   - vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out);
            vlSelf->top__DOT__cpu__DOT__alu_bcond = 
                (vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out 
                 < vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out);
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
            vlSelf->top__DOT__cpu__DOT__alu_result 
                = (vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out 
                   - vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out);
            vlSelf->top__DOT__cpu__DOT__alu_bcond = 
                (0U != vlSelf->top__DOT__cpu__DOT__alu_result);
        } else {
            vlSelf->top__DOT__cpu__DOT__alu_result 
                = (vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out 
                   - vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out);
            vlSelf->top__DOT__cpu__DOT__alu_bcond = 
                (0U == vlSelf->top__DOT__cpu__DOT__alu_result);
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out 
                                                  - vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out);
        vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
    } else {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out 
                                                  + vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out);
        vlSelf->top__DOT__cpu__DOT__alu_bcond = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__dout = vlSelf->top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3fffU & vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr)];
    vlSelf->top__DOT__cpu__DOT__CacheStall = ((~ (IData)(vlSelf->top__DOT__cpu__DOT__is_output_valid)) 
                                              & (IData)(vlSelf->top__DOT__cpu__DOT__is_input_valid));
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result 
        = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_bcond 
        = vlSelf->top__DOT__cpu__DOT__alu_bcond;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__alu_bcond 
        = vlSelf->top__DOT__cpu__DOT__alu_bcond;
    if ((((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal) 
          | (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr)) 
         | ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_branch) 
            & (IData)(vlSelf->top__DOT__cpu__DOT__alu_bcond)))) {
        vlSelf->top__DOT__cpu__DOT__actual_taken = 1U;
        vlSelf->top__DOT__cpu__DOT__update_B_target = 0U;
        vlSelf->top__DOT__cpu__DOT__actual_pc = vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__jump_addr;
    } else {
        vlSelf->top__DOT__cpu__DOT__actual_taken = 0U;
        vlSelf->top__DOT__cpu__DOT__update_B_target = 0U;
        vlSelf->top__DOT__cpu__DOT__actual_pc = ((IData)(4U) 
                                                 + vlSelf->top__DOT__cpu__DOT__ID_EX_PC);
    }
    if (vlSelf->top__DOT__cpu__DOT__actual_taken) {
        vlSelf->top__DOT__cpu__DOT__update_B_target = 1U;
        vlSelf->top__DOT__cpu__DOT__miss = (vlSelf->top__DOT__cpu__DOT__ID_EX_pred_PC 
                                            != vlSelf->top__DOT__cpu__DOT__actual_pc);
    } else {
        vlSelf->top__DOT__cpu__DOT__miss = vlSelf->top__DOT__cpu__DOT__ID_EX_pred_taken;
    }
    vlSelf->top__DOT__cpu__DOT__imem__DOT__dout = vlSelf->top__DOT__cpu__DOT__dout;
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__IF_ID_rs1 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0xfU));
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__IF_ID_rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst 
        = vlSelf->top__DOT__cpu__DOT__IF_ID_inst;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__update_B_target 
        = vlSelf->top__DOT__cpu__DOT__update_B_target;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__update_B_target 
        = vlSelf->top__DOT__cpu__DOT__update_B_target;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__actual_taken 
        = vlSelf->top__DOT__cpu__DOT__actual_taken;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__actual_taken 
        = vlSelf->top__DOT__cpu__DOT__actual_taken;
    vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__actual_taken 
        = vlSelf->top__DOT__cpu__DOT__actual_taken;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__extended_actual_taken 
        = ((0x1eU & (IData)(vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__extended_actual_taken)) 
           | (IData)(vlSelf->top__DOT__cpu__DOT__actual_taken));
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__actual_pc 
        = vlSelf->top__DOT__cpu__DOT__actual_pc;
    vlSelf->top__DOT__cpu__DOT__miss_mux__DOT__B = vlSelf->top__DOT__cpu__DOT__actual_pc;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__actual_pc 
        = vlSelf->top__DOT__cpu__DOT__actual_pc;
    vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__actual_pc 
        = vlSelf->top__DOT__cpu__DOT__actual_pc;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__part_of_inst 
        = vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode;
    __Vtableidx1 = vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode;
    vlSelf->top__DOT__cpu__DOT__is_jal = Vtop__ConstPool__TABLE_hf1f34e79_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__is_jalr = Vtop__ConstPool__TABLE_h4390399c_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__branch = Vtop__ConstPool__TABLE_he4685dc5_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__mem_read = Vtop__ConstPool__TABLE_h7ca8bf9e_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__mem_to_reg = Vtop__ConstPool__TABLE_h7ca8bf9e_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__mem_write = Vtop__ConstPool__TABLE_ha96ed2bf_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__alu_src_B = Vtop__ConstPool__TABLE_h98f8cc8a_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__write_enable = Vtop__ConstPool__TABLE_he94ab748_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__pc_to_reg = Vtop__ConstPool__TABLE_hbd434190_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__is_ecall = Vtop__ConstPool__TABLE_hcf214628_0
        [__Vtableidx1];
    if (vlSelf->top__DOT__cpu__DOT__miss) {
        vlSelf->top__DOT__cpu__DOT__miss_mux__DOT__Enable = 1U;
        vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__miss = 1U;
        vlSelf->top__DOT__cpu__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__actual_pc;
    } else {
        vlSelf->top__DOT__cpu__DOT__miss_mux__DOT__Enable = 0U;
        vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__miss = 0U;
        vlSelf->top__DOT__cpu__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__pred_pc;
    }
    if ((0x40U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    if ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
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
                } else if ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
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
                } else if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
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
            if ((0x10U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
            } else if ((8U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                if ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                            vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                                = ((0xfffff800U & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                                   | ((0x7e0U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                 >> 0x14U)) 
                                      | (0x1eU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                  >> 0x14U))));
                            vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                                = ((0xffe007ffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                                   | ((0x100000U & 
                                       (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0xbU)) | 
                                      ((0xff000U & vlSelf->top__DOT__cpu__DOT__IF_ID_inst) 
                                       | (0x800U & 
                                          (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                           >> 9U)))));
                            vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                                = ((0xff1fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                                   | ((0x800000U & 
                                       (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                        >> 8U)) | (
                                                   (0x400000U 
                                                    & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                       >> 9U)) 
                                                   | (0x200000U 
                                                      & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                         >> 0xaU)))));
                            vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                                = ((0xf8ffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                                   | ((0x4000000U & 
                                       (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                        >> 5U)) | (
                                                   (0x2000000U 
                                                    & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                       >> 6U)) 
                                                   | (0x1000000U 
                                                      & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                         >> 7U)))));
                            vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                                = ((0xc7ffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                                   | ((0x20000000U 
                                       & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                          >> 2U)) | 
                                      ((0x10000000U 
                                        & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                           >> 3U)) 
                                       | (0x8000000U 
                                          & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                             >> 4U)))));
                            vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                                = ((0x3fffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                                   | ((0x80000000U 
                                       & vlSelf->top__DOT__cpu__DOT__IF_ID_inst) 
                                      | (0x40000000U 
                                         & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
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
            } else if ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                            = ((0xffffc000U & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                               | ((0x2000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                              >> 0x12U)) 
                                  | ((0x1000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                 >> 0x13U)) 
                                     | (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0x14U))));
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                            = ((0xfffe3fffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                               | ((0x10000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                               >> 0xfU)) 
                                  | ((0x8000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                 >> 0x10U)) 
                                     | (0x4000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 0x11U)))));
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                            = ((0xfff1ffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                               | ((0x80000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                               >> 0xcU)) 
                                  | ((0x40000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                  >> 0xdU)) 
                                     | (0x20000U & 
                                        (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                         >> 0xeU)))));
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                            = ((0xff8fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                               | ((0x400000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                >> 9U)) 
                                  | ((0x200000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 0xaU)) 
                                     | (0x100000U & 
                                        (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                         >> 0xbU)))));
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                            = ((0xfc7fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                               | ((0x2000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                 >> 6U)) 
                                  | ((0x1000000U & 
                                      (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                       >> 7U)) | (0x800000U 
                                                  & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 8U)))));
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                            = ((0xe3ffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                               | ((0x10000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                  >> 3U)) 
                                  | ((0x8000000U & 
                                      (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                       >> 4U)) | (0x4000000U 
                                                  & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 5U)))));
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                            = ((0x1fffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                               | ((0x80000000U & vlSelf->top__DOT__cpu__DOT__IF_ID_inst) 
                                  | ((0x40000000U & 
                                      (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                       >> 1U)) | (0x20000000U 
                                                  & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                     >> 2U)))));
                    } else {
                        vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
                    }
                } else {
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
                }
            } else if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0xfffff800U & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x7e0U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                         >> 0x14U)) 
                              | (0x1eU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                          >> 7U))));
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0xffffc7ffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x2000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                          >> 0x12U)) 
                              | ((0x1000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                             >> 0x13U)) 
                                 | (0x800U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                              << 4U)))));
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0xfffe3fffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x10000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                           >> 0xfU)) 
                              | ((0x8000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                             >> 0x10U)) 
                                 | (0x4000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                               >> 0x11U)))));
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0xfff1ffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x80000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                           >> 0xcU)) 
                              | ((0x40000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                              >> 0xdU)) 
                                 | (0x20000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                >> 0xeU)))));
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0xff8fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x400000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                            >> 9U)) 
                              | ((0x200000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                               >> 0xaU)) 
                                 | (0x100000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                 >> 0xbU)))));
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0xfc7fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x2000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                             >> 6U)) 
                              | ((0x1000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                >> 7U)) 
                                 | (0x800000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                 >> 8U)))));
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0xe3ffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x10000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                              >> 3U)) 
                              | ((0x8000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                >> 4U)) 
                                 | (0x4000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                  >> 5U)))));
                    vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                        = ((0x1fffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                           | ((0x80000000U & vlSelf->top__DOT__cpu__DOT__IF_ID_inst) 
                              | ((0x40000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                 >> 1U)) 
                                 | (0x20000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
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
    } else if ((0x20U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                      >> 4U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                        if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
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
        if ((0x10U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
        } else if ((8U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
        } else if ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
        } else if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xfffff000U & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x800U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                     >> 0x14U)) | (
                                                   (0x7e0U 
                                                    & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                         >> 7U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xffff8fffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x4000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                      >> 0x11U)) | 
                          ((0x2000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                       >> 0x12U)) | 
                           (0x1000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                       >> 0x13U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xfffc7fffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x20000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                       >> 0xeU)) | 
                          ((0x10000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0xfU)) | 
                           (0x8000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                       >> 0x10U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xffe3ffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x100000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0xbU)) | 
                          ((0x80000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0xcU)) | 
                           (0x40000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0xdU)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xff1fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x800000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                        >> 8U)) | (
                                                   (0x400000U 
                                                    & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                       >> 9U)) 
                                                   | (0x200000U 
                                                      & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                         >> 0xaU)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xf8ffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x4000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                         >> 5U)) | 
                          ((0x2000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                          >> 6U)) | 
                           (0x1000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                          >> 7U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xc7ffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x20000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                          >> 2U)) | 
                          ((0x10000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                           >> 3U)) 
                           | (0x8000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                            >> 4U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0x3fffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x80000000U & vlSelf->top__DOT__cpu__DOT__IF_ID_inst) 
                          | (0x40000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                            >> 1U))));
            } else {
                vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
            }
        } else {
            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                    if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
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
        if ((8U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
        } else if ((4U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
        } else if ((2U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
            if ((1U & (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) {
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xffffc000U & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x2000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                      >> 0x12U)) | 
                          ((0x1000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                       >> 0x13U)) | 
                           (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                            >> 0x14U))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xfffe3fffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x10000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                       >> 0xfU)) | 
                          ((0x8000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                       >> 0x10U)) | 
                           (0x4000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                       >> 0x11U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xfff1ffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x80000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                       >> 0xcU)) | 
                          ((0x40000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0xdU)) | 
                           (0x20000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                        >> 0xeU)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xff8fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x400000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                        >> 9U)) | (
                                                   (0x200000U 
                                                    & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                       >> 0xaU)) 
                                                   | (0x100000U 
                                                      & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                         >> 0xbU)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xfc7fffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x2000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                         >> 6U)) | 
                          ((0x1000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                          >> 7U)) | 
                           (0x800000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                         >> 8U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0xe3ffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x10000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                          >> 3U)) | 
                          ((0x8000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                          >> 4U)) | 
                           (0x4000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                          >> 5U)))));
                vlSelf->top__DOT__cpu__DOT__imm_gen_out 
                    = ((0x1fffffffU & vlSelf->top__DOT__cpu__DOT__imm_gen_out) 
                       | ((0x80000000U & vlSelf->top__DOT__cpu__DOT__IF_ID_inst) 
                          | ((0x40000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                             >> 1U)) 
                             | (0x20000000U & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                               >> 2U)))));
            } else {
                vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
            }
        } else {
            vlSelf->top__DOT__cpu__DOT__imm_gen_out = 0U;
        }
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal 
        = vlSelf->top__DOT__cpu__DOT__is_jal;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr 
        = vlSelf->top__DOT__cpu__DOT__is_jalr;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__branch 
        = vlSelf->top__DOT__cpu__DOT__branch;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__mem_read;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg 
        = vlSelf->top__DOT__cpu__DOT__mem_to_reg;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__mem_write;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src_B 
        = vlSelf->top__DOT__cpu__DOT__alu_src_B;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__write_enable;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_to_reg 
        = vlSelf->top__DOT__cpu__DOT__pc_to_reg;
    if (vlSelf->top__DOT__cpu__DOT__is_ecall) {
        vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__is_ecall = 1U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = 1U;
        vlSelf->top__DOT__cpu__DOT__is_hazard = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write) 
                                                 & (0x11U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)));
        vlSelf->top__DOT__cpu__DOT__IF_ID_inst_write 
            = (1U & (~ ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write) 
                        & (0x11U == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)))));
        vlSelf->top__DOT__cpu__DOT__PCWrite = (1U & 
                                               (~ ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write) 
                                                   & (0x11U 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)))));
        vlSelf->top__DOT__cpu__DOT__rs1_in = 0x11U;
    } else {
        vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__is_ecall = 0U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = 0U;
        vlSelf->top__DOT__cpu__DOT__is_hazard = ((((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                       >> 0xfU))) 
                                                  | ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                         >> 0x14U)))) 
                                                 & (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read));
        vlSelf->top__DOT__cpu__DOT__IF_ID_inst_write 
            = (1U & (~ ((((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd) 
                          == (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                       >> 0xfU))) | 
                         ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd) 
                          == (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                       >> 0x14U)))) 
                        & (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read))));
        vlSelf->top__DOT__cpu__DOT__PCWrite = (1U & 
                                               (~ (
                                                   (((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                         >> 0xfU))) 
                                                    | ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                           >> 0x14U)))) 
                                                   & (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read))));
        vlSelf->top__DOT__cpu__DOT__rs1_in = (0x1fU 
                                              & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                 >> 0xfU));
    }
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__miss_mux__DOT__C = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__is_hazard 
        = vlSelf->top__DOT__cpu__DOT__is_hazard;
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__IF_ID_inst_write 
        = vlSelf->top__DOT__cpu__DOT__IF_ID_inst_write;
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__PCWrite 
        = vlSelf->top__DOT__cpu__DOT__PCWrite;
    vlSelf->top__DOT__cpu__DOT____Vcellinp__pc__PCWrite 
        = ((~ (IData)(vlSelf->top__DOT__cpu__DOT__CacheStall)) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__PCWrite));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = vlSelf->top__DOT__cpu__DOT__rs1_in;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__PCWrite = vlSelf->top__DOT__cpu__DOT____Vcellinp__pc__PCWrite;
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__rs2_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                   >> 0x14U))];
    vlSelf->top__DOT__cpu__DOT__rs1_17 = ((0x11U == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd))
                                           ? vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out
                                           : vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
                                          [vlSelf->top__DOT__cpu__DOT__rs1_in]);
    vlSelf->top__DOT__cpu__DOT__rs1_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelf->top__DOT__cpu__DOT__rs1_in];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelf->top__DOT__cpu__DOT__rs1_dout;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
            VL_FATAL_MT("top.v", 4, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("top.v", 4, "", "NBA region did not converge.");
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
                VL_FATAL_MT("top.v", 4, "", "Active region did not converge.");
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
