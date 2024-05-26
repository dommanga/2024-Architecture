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
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__extended_actual_taken = 0U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__clog2 = 4U;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__Add_PC_4_NT__DOT__in_2 = 4U;
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__D = 0U;
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__D = 0U;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__C = 4U;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__D = 0U;
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
            VL_FATAL_MT("top.v", 4, "", "Settle region did not converge.");
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
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hf1f34e79_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h4390399c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_he4685dc5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h7ca8bf9e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_ha96ed2bf_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h98f8cc8a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_he94ab748_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hbd434190_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hcf214628_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT____VdfgRegularize_pre_inline_ALUControlUnit_tmp_h20fe2cfa__0;
    top__DOT__cpu__DOT__alu_ctrl_unit__DOT____VdfgRegularize_pre_inline_ALUControlUnit_tmp_h20fe2cfa__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_PC 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_PC;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__addr = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__IF_ID_rs1 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0xfU));
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__IF_ID_rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__ID_EX_mem_read 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read;
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__ID_EX_rd 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rd;
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__ID_EX_reg_write 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst 
        = vlSelf->top__DOT__cpu__DOT__IF_ID_inst;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs1 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs1;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs2 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs2;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_rd 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_rd 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_reg_write 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_reg_write 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data;
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__C 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data;
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__C 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_PC;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux__DOT__Enable 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_pc_to_reg;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_imm;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__control 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src_B;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__part_of_inst 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_branch 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_branch;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_is_jal 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal;
    vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__ID_EX_pred_taken 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_pred_taken;
    vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__ID_EX_pred_PC 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_pred_PC;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__addr = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__din = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_output_valid 
        = vlSelf->top__DOT__cpu__DOT__is_output_valid;
    vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1;
    vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2;
    vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__Enable 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_tag 
        = (vlSelf->top__DOT__cpu__DOT__ID_EX_PC >> 7U);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__unused 
        = (0U != vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_PC 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_PC;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_rs1_data 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_imm 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_imm;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_is_jalr 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr;
    vlSelf->top__DOT__cpu__DOT__rs2_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                   >> 0x14U))];
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_idx 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__ID_EX_PC 
                    >> 2U));
    vlSelf->top__DOT__cpu__DOT__update_B_history = 0U;
    if (vlSelf->top__DOT__cpu__DOT__ID_EX_branch) {
        vlSelf->top__DOT__cpu__DOT__update_B_history = 1U;
    }
    vlSelf->is_halted = vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__current_pc, 2U);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_input_valid = 0U;
    vlSelf->top__DOT__cpu__DOT__mem_rw = vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write;
    vlSelf->top__DOT__reset = vlSelf->reset;
    vlSelf->top__DOT__clk = vlSelf->clk;
    vlSelf->top__DOT__cpu__DOT__is_input_valid = ((IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read) 
                                                  | (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo = (3U 
                                                  & (vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
                                                     >> 2U));
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__not_taken_pc 
        = ((IData)(4U) + vlSelf->top__DOT__cpu__DOT__current_pc);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_ready 
        = (0U == vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__tag 
        = (vlSelf->top__DOT__cpu__DOT__current_pc >> 7U);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux_out 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr)
            ? vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data
            : vlSelf->top__DOT__cpu__DOT__ID_EX_PC);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag = (vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
                                                   >> 7U);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__idx 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__current_pc 
                    >> 2U));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__idx = (7U 
                                                   & (vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out 
                                                      >> 4U));
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7 
        = (vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input 
           >> 0x19U);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst);
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
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 
        = (7U & (vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input 
                 >> 0xcU));
    vlSelf->top__DOT__cpu__DOT__rd_din = ((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg)
                                           ? vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2
                                           : vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1);
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
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__Add_PC_4_NT__DOT__in_1 
        = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_PC;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_rs1_data;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__Add_imm__DOT__in_2 
        = vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_imm;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux__DOT__Enable 
        = vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_is_jalr;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_pht_idx 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_idx) 
           ^ (IData)(vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BHSR));
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__update_B_history 
        = vlSelf->top__DOT__cpu__DOT__update_B_history;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__update_B_history 
        = vlSelf->top__DOT__cpu__DOT__update_B_history;
    vlSelf->top__DOT__is_halted = vlSelf->is_halted;
    vlSelf->top__DOT__cpu__DOT__dout = vlSelf->top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3fffU & vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr)];
    if ((1U != (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
        if ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_write = 0U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_read = 1U;
        } else if ((3U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state))) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_write = 1U;
            vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_read = 0U;
        }
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_write;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_read;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_input_valid 
            = ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state)) 
               || (3U == (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state)));
    } else {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_write;
        vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read 
            = vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_read;
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_input_valid;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived 
        = (((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_read) 
            | (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_write)) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_input_valid));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_rw 
        = vlSelf->top__DOT__cpu__DOT__mem_rw;
    vlSelf->top__DOT__cpu__DOT__reset = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_input_valid 
        = vlSelf->top__DOT__cpu__DOT__is_input_valid;
    vlSelf->top__DOT__cpu__DOT__CacheStall = ((~ (IData)(vlSelf->top__DOT__cpu__DOT__is_output_valid)) 
                                              & (IData)(vlSelf->top__DOT__cpu__DOT__is_input_valid));
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo_mux__DOT__control 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__bo;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__Add_PC_4_NT__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__not_taken_pc;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__not_taken_pc;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_ready;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_clean = 0U;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_output_valid 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read) 
           & (IData)(vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_ready));
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux__DOT__C 
        = vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux_out;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__Add_imm__DOT__in_1 
        = vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux_out;
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__jump_addr 
        = (vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux_out 
           + vlSelf->top__DOT__cpu__DOT__ID_EX_imm);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB
        [vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__idx];
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pht_idx 
        = ((IData)(vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__idx) 
           ^ (IData)(vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BHSR));
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
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__forwardA 
        = vlSelf->top__DOT__cpu__DOT__forwardA;
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__control 
        = vlSelf->top__DOT__cpu__DOT__forwardA;
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__forwardB 
        = vlSelf->top__DOT__cpu__DOT__forwardB;
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__control 
        = vlSelf->top__DOT__cpu__DOT__forwardB;
    top__DOT__cpu__DOT__alu_ctrl_unit__DOT____VdfgRegularize_pre_inline_ALUControlUnit_tmp_h20fe2cfa__0 
        = ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
            ? 6U : ((4U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                     ? 7U : ((6U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                              ? 8U : ((7U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                       ? 9U : ((5U 
                                                == (IData)(vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3))
                                                ? 0xaU
                                                : 0xfU)))));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__C 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__forwardB_mux_out = 
        ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__forwardB))
          ? vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data
          : ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__forwardB))
              ? vlSelf->top__DOT__cpu__DOT__rd_din : 
             ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__forwardB))
               ? vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out
               : 0U)));
    vlSelf->top__DOT__cpu__DOT__forwardA_mux_out = 
        ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__forwardA))
          ? vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data
          : ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__forwardA))
              ? vlSelf->top__DOT__cpu__DOT__rd_din : 
             ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__forwardA))
               ? vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out
               : 0U)));
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
    vlSelf->top__DOT__cpu__DOT__is_halted = vlSelf->top__DOT__is_halted;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__dout = vlSelf->top__DOT__cpu__DOT__dout;
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
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__Add_imm__DOT__out 
        = vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__jump_addr;
    vlSelf->top__DOT__cpu__DOT__pred_taken = ((vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__tag 
                                               == vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table
                                               [vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__idx]) 
                                              & (vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT
                                                 [vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pht_idx] 
                                                 >> 1U));
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
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__result 
        = vlSelf->top__DOT__cpu__DOT__forwardA_mux_out;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__forwardA_mux_out;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out = 
        ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_pc_to_reg)
          ? vlSelf->top__DOT__cpu__DOT__ID_EX_PC : vlSelf->top__DOT__cpu__DOT__forwardA_mux_out);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[0U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[0U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[1U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[1U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[2U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[2U];
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout[3U] 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem[3U];
    if (vlSelf->top__DOT__cpu__DOT__pred_taken) {
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken = 1U;
        vlSelf->top__DOT__cpu__DOT__pred_pc = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB
            [vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__idx];
    } else {
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken = 0U;
        vlSelf->top__DOT__cpu__DOT__pred_pc = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__not_taken_pc;
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__addr;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__dout = vlSelf->top__DOT__cpu__DOT__Cache_d_out;
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
    vlSelf->top__DOT__cpu__DOT__rs1_17 = ((0x11U == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd))
                                           ? vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out
                                           : vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
                                          [vlSelf->top__DOT__cpu__DOT__rs1_in]);
    vlSelf->top__DOT__cpu__DOT__rs1_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelf->top__DOT__cpu__DOT__rs1_in];
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__result 
        = vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 
        = vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out;
    vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux__DOT__C 
        = vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 
        = vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out;
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
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken_mux__DOT__Enable 
        = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken;
    vlSelf->top__DOT__cpu__DOT__miss_mux__DOT__A = vlSelf->top__DOT__cpu__DOT__pred_pc;
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_pc 
        = vlSelf->top__DOT__cpu__DOT__pred_pc;
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo_mux__DOT__result 
        = vlSelf->top__DOT__cpu__DOT__cache__DOT__dout;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__PCWrite = vlSelf->top__DOT__cpu__DOT____Vcellinp__pc__PCWrite;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelf->top__DOT__cpu__DOT__rs1_dout;
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
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken_mux__DOT__C 
            = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_pc;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__update_B_target 
            = vlSelf->top__DOT__cpu__DOT__update_B_target;
        vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__update_B_target 
            = vlSelf->top__DOT__cpu__DOT__update_B_target;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__actual_taken = 1U;
        vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__actual_taken = 1U;
        vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__actual_taken = 1U;
    } else {
        vlSelf->top__DOT__cpu__DOT__miss = vlSelf->top__DOT__cpu__DOT__ID_EX_pred_taken;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken_mux__DOT__C 
            = vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_pc;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__update_B_target 
            = vlSelf->top__DOT__cpu__DOT__update_B_target;
        vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__update_B_target 
            = vlSelf->top__DOT__cpu__DOT__update_B_target;
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__actual_taken = 0U;
        vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__actual_taken = 0U;
        vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__actual_taken = 0U;
    }
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
    if (vlSelf->top__DOT__cpu__DOT__miss) {
        vlSelf->top__DOT__cpu__DOT__miss_mux__DOT__Enable = 1U;
        vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__miss = 1U;
        vlSelf->top__DOT__cpu__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__actual_pc;
    } else {
        vlSelf->top__DOT__cpu__DOT__miss_mux__DOT__Enable = 0U;
        vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__miss = 0U;
        vlSelf->top__DOT__cpu__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__pred_pc;
    }
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__miss_mux__DOT__C = vlSelf->top__DOT__cpu__DOT__next_pc;
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
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
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
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] clk)\n");
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
    vlSelf->top__DOT__cpu__DOT__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_hazard = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IF_ID_inst_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_output_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_input_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_rw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__Cache_d_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__CacheStall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__actual_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pred_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__update_B_history = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__update_B_target = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_src_B = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forwardA = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forwardB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forwardA_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwardB_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__actual_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pred_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs2_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs1_17 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs1_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__mem_data_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__miss = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IF_ID_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IF_ID_PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IF_ID_pred_PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IF_ID_miss = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IF_ID_pred_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src_B = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_ALU_ctrl_unit_input = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__ID_EX_PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_pred_PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_pred_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT____Vcellinp__pc__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__update_B_history = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__update_B_target = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__actual_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__actual_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__idx = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__tag = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pht_idx = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__not_taken_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_idx = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_tag = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__ID_EX_pht_idx = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__extended_actual_taken = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BHSR = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__BTB[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__TAG_table[__Vi0] = VL_RAND_RESET_I(25);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__Add_PC_4_NT__DOT__in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__Add_PC_4_NT__DOT__in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__Add_PC_4_NT__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken_mux__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken_mux__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken_mux__DOT__Enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_predictor__DOT__pred_taken_mux__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__miss_mux__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__miss_mux__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__miss_mux__DOT__Enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__miss_mux__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__IF_ID_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__IF_ID_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__ID_EX_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__ID_EX_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__ID_EX_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__is_hazard = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__IF_ID_inst_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazard_detection_unit__DOT__PCWrite = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__part_of_inst = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src_B = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__part_of_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__ID_EX_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__EX_MEM_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__MEM_WB_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__forwardA = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forwarding_unit__DOT__forwardB = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__control = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forwardA_mux__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__control = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forwardB_mux__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux__DOT__Enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ALUSrc_A_mux__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__control = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ALUSrc_B_mux__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__part_of_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__unused = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__alu_bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__ID_EX_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__actual_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__actual_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__update_B_history = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__update_B_target = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__jump_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux__DOT__Enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__is_jalr_mux__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__Add_imm__DOT__in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__Add_imm__DOT__in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__branch_calculator__DOT__Add_imm__DOT__out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__actual_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__ID_EX_pred_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__ID_EX_pred_PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__actual_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Miss_Detection_Unit__DOT__miss = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_input_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__mem_rw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_output_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_output_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__clog2 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__dout_dmem);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__tag = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__idx = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_BUS);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__hit_way = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_output_valid_temp = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__addr_dmem = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__din_dmem);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__TagBank[__Vi0][__Vi1] = VL_RAND_RESET_I(25);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__is_valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dirty[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__DataBank[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__cache__DOT__LRU[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__flip_LRU = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__is_dmem_input_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__dmem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_alloc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__cache_clean = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT____Vcellinp__data_mem__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo_mux__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo_mux__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo_mux__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo_mux__DOT__D = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo_mux__DOT__control = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__bo_mux__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem[__Vi0]);
    }
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din);
    vlSelf->top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__Enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_to_reg_mux__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
