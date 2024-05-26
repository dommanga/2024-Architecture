// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__pc__DOT__word_size;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__branch_predictor__DOT__tag_size;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__branch_predictor__DOT__idx_size;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__branch_predictor__DOT__entry_size;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__branch_predictor__DOT__Add_PC_4_NT__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken_mux__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__miss_mux__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__imem__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__forwardA_mux__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__forwardB_mux__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__ALUSrc_A_mux__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__alu__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__branch_calculator__DOT__Add_imm__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__LINE_SIZE;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__NUM_SETS;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__NUM_WAYS;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__TAG_SIZE;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__IDX_SIZE;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__B_OFFSET;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__bo_mux__DOT__data_width;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__DELAY;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__BLOCK_SIZE;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__mem_to_reg_mux__DOT__data_width;


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
