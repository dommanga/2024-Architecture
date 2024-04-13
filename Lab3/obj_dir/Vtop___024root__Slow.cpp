// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__pc__DOT__word_size;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__IorD_mux__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__MemtoReg_mux__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__memory__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__ALUSrcA_mux__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__ALUSrcB_mux__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__alu__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__PCSource_mux__DOT__data_width;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtop___024root::~Vtop___024root() {
}