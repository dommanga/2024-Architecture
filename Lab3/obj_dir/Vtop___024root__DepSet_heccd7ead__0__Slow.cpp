// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__ALUSrcB_mux__DOT__B = 4U;
    vlSelf->top__DOT__cpu__DOT__ALUSrcB_mux__DOT__D = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h27fea5f1__0;
    top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h27fea5f1__0 = 0;
    CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h519f6366__0;
    top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h519f6366__0 = 0;
    CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgTmp_ha506c762__0;
    top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgTmp_ha506c762__0 = 0;
    // Body
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__A = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__B = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__MemtoReg_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__MemtoReg_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__MDR;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = 
        (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 7U));
    vlSelf->top__DOT__cpu__DOT__memory__DOT__din = vlSelf->top__DOT__cpu__DOT__B;
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
    vlSelf->top__DOT__cpu__DOT__ALUSrcA_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__ALUSrcA_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__A;
    vlSelf->top__DOT__cpu__DOT__ALUSrcB_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__PCSource_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IR);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IR);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__unused 
        = (0U != vlSelf->top__DOT__cpu__DOT__IR);
    vlSelf->top__DOT__cpu__DOT__IRWrite = ((1U & (~ 
                                                  ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                   >> 2U))) 
                                           && ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                    >> 1U))) 
                                               && (1U 
                                                   & (~ (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state)))));
    vlSelf->top__DOT__cpu__DOT__rs2_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 0x14U))];
    vlSelf->top__DOT__cpu__DOT__RegWrite = ((1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                   >> 2U)) 
                                            && ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                     >> 1U))) 
                                                && (1U 
                                                    & (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state))));
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
    vlSelf->top__DOT__reset = vlSelf->reset;
    vlSelf->top__DOT__clk = vlSelf->clk;
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
    vlSelf->top__DOT__cpu__DOT__IorD = ((1U & ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                               >> 2U)) 
                                        && ((1U & (~ 
                                                   ((IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state) 
                                                    >> 1U))) 
                                            && (1U 
                                                & (~ (IData)(vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state)))));
    vlSelf->top__DOT__cpu__DOT__is_ecall = (0x73U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__cpu__DOT__IR));
    top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgExtracted_h519f6366__0 
        = ((0x33U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR)) 
           | (0x13U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR)));
    top__DOT__cpu__DOT__ctrl_unit__DOT____VdfgTmp_ha506c762__0 
        = ((3U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR)) 
           | (0x23U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR)));
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
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IRWrite 
        = vlSelf->top__DOT__cpu__DOT__IRWrite;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__RegWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__RegWrite 
        = vlSelf->top__DOT__cpu__DOT__RegWrite;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__MemWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__MemWrite 
        = vlSelf->top__DOT__cpu__DOT__MemWrite;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCWriteNotCond 
        = vlSelf->top__DOT__cpu__DOT__PCWriteNotCond;
    vlSelf->top__DOT__cpu__DOT__reset = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__clk = vlSelf->top__DOT__clk;
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
    if (vlSelf->top__DOT__cpu__DOT__IorD) {
        vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__Enable = 1U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IorD = 1U;
        vlSelf->top__DOT__cpu__DOT__addr = vlSelf->top__DOT__cpu__DOT__ALUOut;
    } else {
        vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__Enable = 0U;
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IorD = 0U;
        vlSelf->top__DOT__cpu__DOT__addr = vlSelf->top__DOT__cpu__DOT__current_pc;
    }
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
    vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__C = vlSelf->top__DOT__cpu__DOT__addr;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__addr = vlSelf->top__DOT__cpu__DOT__addr;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__addr, 2U);
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
    vlSelf->top__DOT__cpu__DOT__dout = ((IData)(vlSelf->top__DOT__cpu__DOT__MemRead)
                                         ? vlSelf->top__DOT__cpu__DOT__memory__DOT__mem
                                        [(0x3fffU & vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr)]
                                         : 0U);
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
    vlSelf->top__DOT__cpu__DOT__memory__DOT__dout = vlSelf->top__DOT__cpu__DOT__dout;
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

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PCWriteNotCond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IorD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IRWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PCSource = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ALUOp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ALUSrcA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PC_update = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ALU_op_sig = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ALUSrcB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs1_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs2_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__IR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MDR = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUOut = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__PC_update = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__Enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IorD_mux__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MemtoReg_mux__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MemtoReg_mux__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MemtoReg_mux__DOT__Enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MemtoReg_mux__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__memory__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__part_of_inst = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__ALUSrcB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__ALU_op_sig = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IorD = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__IRWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCWriteNotCond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__PCSource = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__cur_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__part_of_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__ALU_op_sig = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__unused = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ALUSrcA_mux__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrcA_mux__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrcA_mux__DOT__Enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ALUSrcA_mux__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrcB_mux__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrcB_mux__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrcB_mux__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrcB_mux__DOT__D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrcB_mux__DOT__control = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ALUSrcB_mux__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PCSource_mux__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PCSource_mux__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__PCSource_mux__DOT__Enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__PCSource_mux__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
