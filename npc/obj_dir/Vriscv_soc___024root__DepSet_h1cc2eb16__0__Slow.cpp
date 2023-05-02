// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv_soc___024root.h"

VL_ATTR_COLD void Vriscv_soc___024root___eval_static(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vriscv_soc___024root___eval_initial__TOP(Vriscv_soc___024root* vlSelf);

VL_ATTR_COLD void Vriscv_soc___024root___eval_initial(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_initial\n"); );
    // Body
    Vriscv_soc___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void Vriscv_soc___024root___eval_initial__TOP(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->io_difftest_mstatus = 0ULL;
    vlSelf->io_difftest_mcause = 0ULL;
    vlSelf->io_difftest_mepc = 0ULL;
    vlSelf->io_difftest_mtvec = 0ULL;
}

VL_ATTR_COLD void Vriscv_soc___024root___eval_final(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vriscv_soc___024root___eval_triggers__stl(Vriscv_soc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__stl(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___eval_stl(Vriscv_soc___024root* vlSelf);

VL_ATTR_COLD void Vriscv_soc___024root___eval_settle(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vriscv_soc___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vriscv_soc___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 9684, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vriscv_soc___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__stl(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_soc___024root___stl_sequent__TOP__0(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass0_val_T;
    riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass0_val_T = 0;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_13;
    riscv_soc__DOT__core__DOT__d_cache__DOT___T_13 = 0;
    VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2;
    VL_ZERO_W(128, riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2);
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76;
    riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76 = 0;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_14;
    riscv_soc__DOT__core__DOT__d_cache__DOT___T_14 = 0;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_17;
    riscv_soc__DOT__core__DOT__d_cache__DOT___T_17 = 0;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95;
    riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95 = 0;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdaab1c9d__0;
    riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdaab1c9d__0 = 0;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_26;
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_26 = 0;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_39;
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_39 = 0;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_52;
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_52 = 0;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63;
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63 = 0;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_397;
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_397 = 0;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_410;
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_410 = 0;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_423;
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_423 = 0;
    VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461;
    VL_ZERO_W(128, riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461);
    VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474;
    VL_ZERO_W(128, riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474);
    VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487;
    VL_ZERO_W(128, riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487);
    VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500;
    VL_ZERO_W(128, riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500);
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_hd9109502__0;
    riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_hd9109502__0 = 0;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19;
    VL_ZERO_W(65, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19);
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_4;
    VL_ZERO_W(65, riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_4);
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_11;
    VL_ZERO_W(65, riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_11);
    QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT___GEN_13;
    riscv_soc__DOT__core__DOT__commit__DOT___GEN_13 = 0;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT___GEN_45;
    riscv_soc__DOT__core__DOT__commit__DOT___GEN_45 = 0;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram0__DOT___GEN_21;
    VL_ZERO_W(128, riscv_soc__DOT__sram0__DOT___GEN_21);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram0__DOT___GEN_42;
    VL_ZERO_W(128, riscv_soc__DOT__sram0__DOT___GEN_42);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram1__DOT___GEN_21;
    VL_ZERO_W(128, riscv_soc__DOT__sram1__DOT___GEN_21);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram1__DOT___GEN_42;
    VL_ZERO_W(128, riscv_soc__DOT__sram1__DOT___GEN_42);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram2__DOT___GEN_21;
    VL_ZERO_W(128, riscv_soc__DOT__sram2__DOT___GEN_21);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram2__DOT___GEN_42;
    VL_ZERO_W(128, riscv_soc__DOT__sram2__DOT___GEN_42);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram3__DOT___GEN_21;
    VL_ZERO_W(128, riscv_soc__DOT__sram3__DOT___GEN_21);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram3__DOT___GEN_42;
    VL_ZERO_W(128, riscv_soc__DOT__sram3__DOT___GEN_42);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram4__DOT___sram_T;
    VL_ZERO_W(128, riscv_soc__DOT__sram4__DOT___sram_T);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram4__DOT___GEN_21;
    VL_ZERO_W(128, riscv_soc__DOT__sram4__DOT___GEN_21);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram4__DOT___GEN_42;
    VL_ZERO_W(128, riscv_soc__DOT__sram4__DOT___GEN_42);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram5__DOT___GEN_21;
    VL_ZERO_W(128, riscv_soc__DOT__sram5__DOT___GEN_21);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram5__DOT___GEN_42;
    VL_ZERO_W(128, riscv_soc__DOT__sram5__DOT___GEN_42);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram6__DOT___GEN_21;
    VL_ZERO_W(128, riscv_soc__DOT__sram6__DOT___GEN_21);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram6__DOT___GEN_42;
    VL_ZERO_W(128, riscv_soc__DOT__sram6__DOT___GEN_42);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram7__DOT___GEN_21;
    VL_ZERO_W(128, riscv_soc__DOT__sram7__DOT___GEN_21);
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram7__DOT___GEN_42;
    VL_ZERO_W(128, riscv_soc__DOT__sram7__DOT___GEN_42);
    VlWide<3>/*95:0*/ __Vtemp_h651a80f2__0;
    VlWide<5>/*159:0*/ __Vtemp_hafbeccdd__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__0;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__0;
    VlWide<5>/*159:0*/ __Vtemp_h83a42262__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__1;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__1;
    VlWide<5>/*159:0*/ __Vtemp_h00d757e1__0;
    VlWide<5>/*159:0*/ __Vtemp_hd904ae33__2;
    VlWide<5>/*159:0*/ __Vtemp_h7688b7a5__2;
    VlWide<5>/*159:0*/ __Vtemp_hcd0c4155__0;
    VlWide<5>/*159:0*/ __Vtemp_hf484a493__0;
    VlWide<5>/*159:0*/ __Vtemp_h94120845__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__0;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__0;
    VlWide<3>/*95:0*/ __Vtemp_h346bf577__0;
    VlWide<3>/*95:0*/ __Vtemp_hbf583208__0;
    VlWide<4>/*127:0*/ __Vtemp_he405bdf3__0;
    VlWide<3>/*95:0*/ __Vtemp_h7cbb49d7__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__1;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__1;
    VlWide<3>/*95:0*/ __Vtemp_h9d6f1a37__0;
    VlWide<3>/*95:0*/ __Vtemp_h24f87ff4__0;
    VlWide<5>/*159:0*/ __Vtemp_he5b4b165__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__2;
    VlWide<3>/*95:0*/ __Vtemp_h3fef5ac1__2;
    VlWide<3>/*95:0*/ __Vtemp_ha8e066d4__0;
    VlWide<5>/*159:0*/ __Vtemp_h39202ecd__0;
    VlWide<5>/*159:0*/ __Vtemp_h4ccc697d__0;
    VlWide<4>/*127:0*/ __Vtemp_h304753ce__0;
    VlWide<3>/*95:0*/ __Vtemp_h61799857__0;
    VlWide<3>/*95:0*/ __Vtemp_h9e5fa0df__1;
    VlWide<3>/*95:0*/ __Vtemp_h9eba89b7__0;
    VlWide<3>/*95:0*/ __Vtemp_h624b2931__1;
    VlWide<3>/*95:0*/ __Vtemp_h6abef518__0;
    VlWide<3>/*95:0*/ __Vtemp_h624b2931__2;
    VlWide<3>/*95:0*/ __Vtemp_hf8d20176__0;
    VlWide<3>/*95:0*/ __Vtemp_h3ade9cab__0;
    VlWide<4>/*127:0*/ __Vtemp_hff850520__0;
    VlWide<4>/*127:0*/ __Vtemp_h8302757c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc6e9d461__0;
    VlWide<4>/*127:0*/ __Vtemp_h9b0ffc5b__0;
    VlWide<4>/*127:0*/ __Vtemp_h5698ed3e__0;
    VlWide<3>/*95:0*/ __Vtemp_hcc513de2__0;
    VlWide<3>/*95:0*/ __Vtemp_h9fe2811e__0;
    VlWide<3>/*95:0*/ __Vtemp_h2e2fd781__0;
    VlWide<3>/*95:0*/ __Vtemp_hd5a7caf0__0;
    VlWide<3>/*95:0*/ __Vtemp_h2ad0fb32__0;
    VlWide<4>/*127:0*/ __Vtemp_hf333c4c0__0;
    VlWide<4>/*127:0*/ __Vtemp_ha8b81f16__0;
    VlWide<4>/*127:0*/ __Vtemp_hfea70b08__0;
    VlWide<4>/*127:0*/ __Vtemp_hc9e8dd8a__0;
    VlWide<4>/*127:0*/ __Vtemp_hbabbffe2__0;
    VlWide<4>/*127:0*/ __Vtemp_ha4c0a9e9__0;
    VlWide<4>/*127:0*/ __Vtemp_hb11deedb__0;
    VlWide<4>/*127:0*/ __Vtemp_h498e217b__0;
    VlWide<3>/*95:0*/ __Vtemp_h1c230895__0;
    VlWide<3>/*95:0*/ __Vtemp_hf6ff0c49__0;
    VlWide<3>/*95:0*/ __Vtemp_hab3058fc__0;
    VlWide<4>/*127:0*/ __Vtemp_hc70c65b4__0;
    VlWide<4>/*127:0*/ __Vtemp_heb9a1b0c__0;
    VlWide<4>/*127:0*/ __Vtemp_h468e92f4__0;
    VlWide<4>/*127:0*/ __Vtemp_h88a80d83__0;
    VlWide<4>/*127:0*/ __Vtemp_h30c50ef9__0;
    VlWide<4>/*127:0*/ __Vtemp_h4b49a7b8__0;
    VlWide<4>/*127:0*/ __Vtemp_h38607205__0;
    VlWide<4>/*127:0*/ __Vtemp_h549d89b2__0;
    VlWide<4>/*127:0*/ __Vtemp_h7eb1bf61__0;
    VlWide<4>/*127:0*/ __Vtemp_hdcb49fd9__0;
    VlWide<4>/*127:0*/ __Vtemp_h07182d46__0;
    VlWide<4>/*127:0*/ __Vtemp_hc1d5babd__0;
    VlWide<4>/*127:0*/ __Vtemp_h42f2f001__0;
    VlWide<4>/*127:0*/ __Vtemp_h06583cdc__0;
    VlWide<4>/*127:0*/ __Vtemp_h24d93bf5__0;
    VlWide<4>/*127:0*/ __Vtemp_h95196871__0;
    // Body
    vlSelf->io_difftest_reg_0 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0;
    vlSelf->io_difftest_reg_1 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1;
    vlSelf->io_difftest_reg_2 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2;
    vlSelf->io_difftest_reg_3 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3;
    vlSelf->io_difftest_reg_4 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4;
    vlSelf->io_difftest_reg_5 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5;
    vlSelf->io_difftest_reg_6 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6;
    vlSelf->io_difftest_reg_7 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7;
    vlSelf->io_difftest_reg_8 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8;
    vlSelf->io_difftest_reg_9 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9;
    vlSelf->io_difftest_reg_10 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10;
    vlSelf->io_difftest_reg_11 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11;
    vlSelf->io_difftest_reg_12 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12;
    vlSelf->io_difftest_reg_13 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13;
    vlSelf->io_difftest_reg_14 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14;
    vlSelf->io_difftest_reg_15 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15;
    vlSelf->io_difftest_reg_16 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16;
    vlSelf->io_difftest_reg_17 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17;
    vlSelf->io_difftest_reg_18 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18;
    vlSelf->io_difftest_reg_19 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19;
    vlSelf->io_difftest_reg_20 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20;
    vlSelf->io_difftest_reg_21 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21;
    vlSelf->io_difftest_reg_22 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22;
    vlSelf->io_difftest_reg_23 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23;
    vlSelf->io_difftest_reg_24 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24;
    vlSelf->io_difftest_reg_25 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25;
    vlSelf->io_difftest_reg_26 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26;
    vlSelf->io_difftest_reg_27 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27;
    vlSelf->io_difftest_reg_28 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28;
    vlSelf->io_difftest_reg_29 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29;
    vlSelf->io_difftest_reg_30 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30;
    vlSelf->io_difftest_reg_31 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31;
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_r_valid 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_105 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
            ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T 
        = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_4 
        = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5 
        = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                 - (IData)(1U)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_tail_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___reg_head_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___reg_tail_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_1 
        = (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                 - (IData)(1U)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_3 
        = (7U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    VL_SHIFTR_WWI(67,67,32, __Vtemp_h651a80f2__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2, 2U);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[0U] 
        = __Vtemp_h651a80f2__0[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[1U] 
        = __Vtemp_h651a80f2__0[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[2U] 
        = (7U & __Vtemp_h651a80f2__0[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_3 
        = ((0xffffffffffffff77ULL & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus) 
           | ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
                             >> 3U))) ? 0x1880ULL : 0x1800ULL));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcycle_T_2 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime);
    vlSelf->io_difftest_pc = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc;
    vlSelf->io_difftest_inst = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst;
    vlSelf->io_difftest_commit = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit;
    vlSelf->io_inst_counter = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter;
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___inst_counter_T_1 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter);
    vlSelf->io_difftest_irq = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq;
    vlSelf->io_difftest_peripheral = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_1 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb) 
           << 8U);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_2 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_head_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_head_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_tail_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___reg_w_addr_T_1 
        = (8ULL + vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
           | (1ULL << (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                        >> 4U)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram1_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid 
           | (1ULL << (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                        >> 4U)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
           | (1ULL << (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                        >> 4U)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T_1 
        = ((~ (1ULL << (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                         >> 4U))))) 
           & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
           >> (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_101 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_100 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T_1 
        = ((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))) 
           & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T_1 
        = ((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))) 
           & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_104 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_102 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_103 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1 
        = ((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))) 
           & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[0U] 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
           << 2U);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[1U] 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
            >> 0x1eU) | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                  >> 0x20U)) << 2U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[2U] 
        = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                     >> 9U)) << 3U) | ((4U & ((IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 2U)) 
                                              << 2U)) 
                                       | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                   >> 0x20U)) 
                                          >> 0x1eU)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____VdfgTmp_h9f76bb7a__0[3U] 
        = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                     >> 9U)) >> 0x1dU) | ((IData)((
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                    >> 9U) 
                                                   >> 0x20U)) 
                                          << 3U));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_9 = 
        ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen))
          ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
          : (8ULL + vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_7 = 
        ((0U != (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)) 
         & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_518 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0
            : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_519 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0
            : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_520 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0
            : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_521 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0
            : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_522 
        = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0
            : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_523 
        = ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0
            : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_9 
        = ((0x300U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mepc_T_2 
        = ((0x341U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcause_T_3 
        = ((0x342U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mtval_T_1 
        = ((0x343U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret 
        = ((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) | (0x18U == 
                                           (0x1fU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3)
            : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2)
                : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
        = ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_5 
        = ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_6 
        = ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_7 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
    __Vtemp_hafbeccdd__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U];
    __Vtemp_hafbeccdd__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U];
    __Vtemp_hafbeccdd__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U];
    __Vtemp_hafbeccdd__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U];
    __Vtemp_hafbeccdd__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U];
    __Vtemp_hd904ae33__0[0U] = 1U;
    __Vtemp_hd904ae33__0[1U] = 0U;
    __Vtemp_hd904ae33__0[2U] = 0U;
    __Vtemp_hd904ae33__0[3U] = 0U;
    __Vtemp_hd904ae33__0[4U] = 0U;
    __Vtemp_h7688b7a5__0[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp_h7688b7a5__0[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp_h7688b7a5__0[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp_h7688b7a5__0[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp_h7688b7a5__0[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp_h83a42262__0, __Vtemp_hd904ae33__0, __Vtemp_h7688b7a5__0);
    __Vtemp_hd904ae33__1[0U] = 1U;
    __Vtemp_hd904ae33__1[1U] = 0U;
    __Vtemp_hd904ae33__1[2U] = 0U;
    __Vtemp_hd904ae33__1[3U] = 0U;
    __Vtemp_hd904ae33__1[4U] = 0U;
    __Vtemp_h7688b7a5__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp_h7688b7a5__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp_h7688b7a5__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp_h7688b7a5__1[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp_h7688b7a5__1[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp_h00d757e1__0, __Vtemp_hd904ae33__1, __Vtemp_h7688b7a5__1);
    __Vtemp_hd904ae33__2[0U] = 1U;
    __Vtemp_hd904ae33__2[1U] = 0U;
    __Vtemp_hd904ae33__2[2U] = 0U;
    __Vtemp_hd904ae33__2[3U] = 0U;
    __Vtemp_hd904ae33__2[4U] = 0U;
    __Vtemp_h7688b7a5__2[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp_h7688b7a5__2[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp_h7688b7a5__2[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp_h7688b7a5__2[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp_h7688b7a5__2[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp_hcd0c4155__0, __Vtemp_hd904ae33__2, __Vtemp_h7688b7a5__2);
    if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_hf484a493__0[0U] = __Vtemp_h83a42262__0[0U];
        __Vtemp_hf484a493__0[1U] = __Vtemp_h83a42262__0[1U];
        __Vtemp_hf484a493__0[2U] = __Vtemp_h83a42262__0[2U];
        __Vtemp_hf484a493__0[3U] = __Vtemp_h83a42262__0[3U];
        __Vtemp_hf484a493__0[4U] = (3U & __Vtemp_h83a42262__0[4U]);
    } else if ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_hf484a493__0[0U] = __Vtemp_h00d757e1__0[0U];
        __Vtemp_hf484a493__0[1U] = __Vtemp_h00d757e1__0[1U];
        __Vtemp_hf484a493__0[2U] = __Vtemp_h00d757e1__0[2U];
        __Vtemp_hf484a493__0[3U] = __Vtemp_h00d757e1__0[3U];
        __Vtemp_hf484a493__0[4U] = (3U & __Vtemp_h00d757e1__0[4U]);
    } else if ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_hf484a493__0[0U] = (__Vtemp_hcd0c4155__0[0U] 
                                    << 1U);
        __Vtemp_hf484a493__0[1U] = ((__Vtemp_hcd0c4155__0[0U] 
                                     >> 0x1fU) | (__Vtemp_hcd0c4155__0[1U] 
                                                  << 1U));
        __Vtemp_hf484a493__0[2U] = ((__Vtemp_hcd0c4155__0[1U] 
                                     >> 0x1fU) | (__Vtemp_hcd0c4155__0[2U] 
                                                  << 1U));
        __Vtemp_hf484a493__0[3U] = ((__Vtemp_hcd0c4155__0[2U] 
                                     >> 0x1fU) | (__Vtemp_hcd0c4155__0[3U] 
                                                  << 1U));
        __Vtemp_hf484a493__0[4U] = ((__Vtemp_hcd0c4155__0[3U] 
                                     >> 0x1fU) | (6U 
                                                  & (__Vtemp_hcd0c4155__0[4U] 
                                                     << 1U)));
    } else if ((3U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_hf484a493__0[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                    << 1U);
        __Vtemp_hf484a493__0[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                  << 1U));
        __Vtemp_hf484a493__0[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                  << 1U));
        __Vtemp_hf484a493__0[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                  << 1U));
        __Vtemp_hf484a493__0[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                                  << 1U));
    } else if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_hf484a493__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        __Vtemp_hf484a493__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        __Vtemp_hf484a493__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        __Vtemp_hf484a493__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        __Vtemp_hf484a493__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    } else if ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp_hf484a493__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        __Vtemp_hf484a493__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        __Vtemp_hf484a493__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        __Vtemp_hf484a493__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        __Vtemp_hf484a493__0[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    } else {
        __Vtemp_hf484a493__0[0U] = 0U;
        __Vtemp_hf484a493__0[1U] = 0U;
        __Vtemp_hf484a493__0[2U] = 0U;
        __Vtemp_hf484a493__0[3U] = 0U;
        __Vtemp_hf484a493__0[4U] = 0U;
    }
    VL_ADD_W(5, __Vtemp_h94120845__0, __Vtemp_hafbeccdd__0, __Vtemp_hf484a493__0);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U] 
        = __Vtemp_h94120845__0[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U] 
        = __Vtemp_h94120845__0[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U] 
        = __Vtemp_h94120845__0[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U] 
        = __Vtemp_h94120845__0[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U] 
        = (7U & __Vtemp_h94120845__0[4U]);
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[0U] 
            = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
               << 2U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                             << 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                             << 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                             << 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[4U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                             << 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[4U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16[4U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[4U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U];
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15[4U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U];
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
        = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
            << 6U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U] 
        = (IData)((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U]))));
    riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U] 
        = (IData)(((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U]))) 
                   >> 0x20U));
    riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U] 
        = (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
    riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U] 
        = (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                   >> 0x20U));
    __Vtemp_h639dda77__0[0U] = 1U;
    __Vtemp_h639dda77__0[1U] = 0U;
    __Vtemp_h639dda77__0[2U] = 0U;
    __Vtemp_h3fef5ac1__0[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__0[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__0[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h346bf577__0, __Vtemp_h639dda77__0, __Vtemp_h3fef5ac1__0);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct 
        = (((0U != ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                     | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])) 
            & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
               ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                  >> 1U))) | ((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                        ^ __Vtemp_h346bf577__0[0U]) 
                                       | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                          ^ __Vtemp_h346bf577__0[1U])) 
                                      | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                         ^ (1U & __Vtemp_h346bf577__0[2U])))) 
                              | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                         | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                            ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                        | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                           ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])))));
    if ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata 
                       >> 0x20U));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U] = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
           ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_3 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3;
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_3 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_3 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_3 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_3 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)));
    __Vtemp_hbf583208__0[0U] = (IData)((((QData)((IData)(
                                                         ((0x80U 
                                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                           ? 0xffU
                                                           : 0U))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            ((0x40U 
                                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                              ? 0xffU
                                                              : 0U))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((0x20U 
                                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                 ? 0xffU
                                                                 : 0U))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  ((0x10U 
                                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                    ? 0xffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((8U 
                                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 0x18U) 
                                                                    | ((((4U 
                                                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                          ? 0xffU
                                                                          : 0U) 
                                                                        << 0x10U) 
                                                                       | ((((2U 
                                                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                             ? 0xffU
                                                                             : 0U) 
                                                                           << 8U) 
                                                                          | ((1U 
                                                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                              ? 0xffU
                                                                              : 0U)))))))))));
    __Vtemp_hbf583208__0[1U] = (IData)(((((QData)((IData)(
                                                          ((0x80U 
                                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                            ? 0xffU
                                                            : 0U))) 
                                          << 0x38U) 
                                         | (((QData)((IData)(
                                                             ((0x40U 
                                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                               ? 0xffU
                                                               : 0U))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                ((0x20U 
                                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                  ? 0xffU
                                                                  : 0U))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   ((0x10U 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                     ? 0xffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((((8U 
                                                                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                        ? 0xffU
                                                                        : 0U) 
                                                                      << 0x18U) 
                                                                     | ((((4U 
                                                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                           ? 0xffU
                                                                           : 0U) 
                                                                         << 0x10U) 
                                                                        | ((((2U 
                                                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                              ? 0xffU
                                                                              : 0U) 
                                                                            << 8U) 
                                                                           | ((1U 
                                                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                               ? 0xffU
                                                                               : 0U)))))))))) 
                                        >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U] 
        = __Vtemp_hbf583208__0[0U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U] 
        = __Vtemp_hbf583208__0[1U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U] 
        = ((((0x800U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
              ? 0xffU : 0U) << 0x18U) | ((((0x400U 
                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                            ? 0xffU
                                            : 0U) << 0x10U) 
                                         | ((((0x200U 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                               ? 0xffU
                                               : 0U) 
                                             << 8U) 
                                            | ((0x100U 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                ? 0xffU
                                                : 0U))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U] 
        = ((((0x8000U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
              ? 0xffU : 0U) << 0x18U) | ((((0x4000U 
                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                            ? 0xffU
                                            : 0U) << 0x10U) 
                                         | ((((0x2000U 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                               ? 0xffU
                                               : 0U) 
                                             << 8U) 
                                            | ((0x1000U 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                ? 0xffU
                                                : 0U))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_13 
        = ((0xdU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                      >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13)
            : ((0xcU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                          >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12)
                : ((0xbU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                              >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11)
                    : ((0xaU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                  >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10)
                        : ((9U == (0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                    >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9)
                            : ((8U == (0x3fU & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                        >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8)
                                : ((7U == (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7)
                                    : ((6U == (0x3fU 
                                               & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                          >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6)
                                        : ((5U == (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                              >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5)
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1)
                                                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
           == (0x3fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
           == (0x3fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    if ((7U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                 >> 3U))))) {
        __Vtemp_he405bdf3__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[0U];
        __Vtemp_he405bdf3__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[1U];
        __Vtemp_he405bdf3__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[2U];
        __Vtemp_he405bdf3__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[3U];
    } else if ((6U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 3U))))) {
        __Vtemp_he405bdf3__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[0U];
        __Vtemp_he405bdf3__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[1U];
        __Vtemp_he405bdf3__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[2U];
        __Vtemp_he405bdf3__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[3U];
    } else if ((5U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 3U))))) {
        __Vtemp_he405bdf3__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[0U];
        __Vtemp_he405bdf3__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[1U];
        __Vtemp_he405bdf3__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[2U];
        __Vtemp_he405bdf3__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[3U];
    } else if ((4U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 3U))))) {
        __Vtemp_he405bdf3__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[0U];
        __Vtemp_he405bdf3__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[1U];
        __Vtemp_he405bdf3__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[2U];
        __Vtemp_he405bdf3__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[3U];
    } else if ((3U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 3U))))) {
        __Vtemp_he405bdf3__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[0U];
        __Vtemp_he405bdf3__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[1U];
        __Vtemp_he405bdf3__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[2U];
        __Vtemp_he405bdf3__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[3U];
    } else if ((2U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 3U))))) {
        __Vtemp_he405bdf3__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[0U];
        __Vtemp_he405bdf3__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[1U];
        __Vtemp_he405bdf3__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[2U];
        __Vtemp_he405bdf3__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[3U];
    } else if ((1U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 3U))))) {
        __Vtemp_he405bdf3__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[0U];
        __Vtemp_he405bdf3__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[1U];
        __Vtemp_he405bdf3__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[2U];
        __Vtemp_he405bdf3__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[3U];
    } else {
        __Vtemp_he405bdf3__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[0U];
        __Vtemp_he405bdf3__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[1U];
        __Vtemp_he405bdf3__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[2U];
        __Vtemp_he405bdf3__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[3U];
    }
    if ((0xdU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_397 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[3U];
    } else if ((0xcU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_397 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[3U];
    } else if ((0xbU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_397 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[3U];
    } else if ((0xaU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_397 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[3U];
    } else if ((9U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_397 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[3U];
    } else if ((8U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_397 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[3U];
    } else {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_397 
            = ((7U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7)
                : ((6U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                            >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6)
                    : ((5U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5)
                        : ((4U == (0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                    >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4)
                            : ((3U == (0x3fU & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                        >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3)
                                : ((2U == (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2)
                                    : ((1U == (0x3fU 
                                               & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                          >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1)
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0))))))));
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[0U] 
            = __Vtemp_he405bdf3__0[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[1U] 
            = __Vtemp_he405bdf3__0[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[2U] 
            = __Vtemp_he405bdf3__0[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[3U] 
            = __Vtemp_he405bdf3__0[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra 
        = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                  >> 5U) | ((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 2U))) 
                            | (3U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U))))));
    riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass0_val_T 
        = ((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                             >> 4U))) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid 
        = ((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                     >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready 
        = (((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm 
        = (((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data 
        = ((IData)((0U != (9U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata
            : ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data
                : ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
                        ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                            ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                ? (((QData)((IData)(
                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                      >> 0x1fU)
                                                      ? 0xffffffffU
                                                      : 0U))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))
                            : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                ? (((QData)((IData)(
                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                      >> 0x1fU)
                                                      ? 0xffffffffU
                                                      : 0U))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))
                        : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                            ? (((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                            : ((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                             >> 2U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]))))))
                    : 0ULL)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready)));
    if ((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                  >> 0x1fU))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst 
        = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_pc 
                          >> 2U))) ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data 
                                              >> 0x20U))
            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data));
    VL_ADD_W(3, __Vtemp_h7cbb49d7__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem);
    __Vtemp_h639dda77__1[0U] = 1U;
    __Vtemp_h639dda77__1[1U] = 0U;
    __Vtemp_h639dda77__1[2U] = 0U;
    __Vtemp_h3fef5ac1__1[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__1[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__1[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h9d6f1a37__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp_h3fef5ac1__1);
    VL_ADD_W(3, __Vtemp_h24f87ff4__0, __Vtemp_h639dda77__1, __Vtemp_h9d6f1a37__0);
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22 = 0U;
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
                    = __Vtemp_h7cbb49d7__0[0U];
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
                    = __Vtemp_h7cbb49d7__0[1U];
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
                    = (1U & __Vtemp_h7cbb49d7__0[2U]);
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
                    = __Vtemp_h24f87ff4__0[0U];
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
                    = __Vtemp_h24f87ff4__0[1U];
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
                    = (1U & __Vtemp_h24f87ff4__0[2U]);
            }
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
                = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
    }
    __Vtemp_he5b4b165__0[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                << 1U);
    __Vtemp_he5b4b165__0[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                 >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                              << 1U));
    __Vtemp_he5b4b165__0[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                 << 3U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                            >> 0x1fU) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                              << 1U)));
    __Vtemp_he5b4b165__0[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                 >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              << 3U));
    __Vtemp_he5b4b165__0[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                 >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                              << 3U));
    __Vtemp_h639dda77__2[0U] = 1U;
    __Vtemp_h639dda77__2[1U] = 0U;
    __Vtemp_h639dda77__2[2U] = 0U;
    __Vtemp_h3fef5ac1__2[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__2[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__2[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_ha8e066d4__0, __Vtemp_h639dda77__2, __Vtemp_h3fef5ac1__2);
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4) {
        __Vtemp_h39202ecd__0[0U] = 0U;
        __Vtemp_h39202ecd__0[1U] = 0U;
        __Vtemp_h39202ecd__0[2U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                    << 2U);
        __Vtemp_h39202ecd__0[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                     >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                                  << 2U));
        __Vtemp_h39202ecd__0[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                     >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                                  << 2U));
    } else {
        __Vtemp_h39202ecd__0[0U] = 1U;
        __Vtemp_h39202ecd__0[1U] = 0U;
        __Vtemp_h39202ecd__0[2U] = (__Vtemp_ha8e066d4__0[0U] 
                                    << 2U);
        __Vtemp_h39202ecd__0[3U] = ((__Vtemp_ha8e066d4__0[0U] 
                                     >> 0x1eU) | (__Vtemp_ha8e066d4__0[1U] 
                                                  << 2U));
        __Vtemp_h39202ecd__0[4U] = ((__Vtemp_ha8e066d4__0[1U] 
                                     >> 0x1eU) | (4U 
                                                  & (__Vtemp_ha8e066d4__0[2U] 
                                                     << 2U)));
    }
    VL_ADD_W(5, __Vtemp_h4ccc697d__0, __Vtemp_he5b4b165__0, __Vtemp_h39202ecd__0);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[0U] 
        = __Vtemp_h4ccc697d__0[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[1U] 
        = __Vtemp_h4ccc697d__0[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U] 
        = __Vtemp_h4ccc697d__0[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
        = __Vtemp_h4ccc697d__0[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
        = (0xfU & __Vtemp_h4ccc697d__0[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9 
        = ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? 4U : ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                     ? 2U : ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                              ? 2U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_3))));
    riscv_soc__DOT__sram4__DOT___sram_T[0U] = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U] 
                                               & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U]);
    riscv_soc__DOT__sram4__DOT___sram_T[1U] = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U] 
                                               & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U]);
    riscv_soc__DOT__sram4__DOT___sram_T[2U] = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U] 
                                               & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U]);
    riscv_soc__DOT__sram4__DOT___sram_T[3U] = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U] 
                                               & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U]);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdb124cd4__0 
        = (1U & (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T)) 
                  & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
                             >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))) 
                 | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
                             >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))) 
                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_26 
        = ((0x1aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26)
            : ((0x19U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25)
                : ((0x18U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24)
                    : ((0x17U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23)
                        : ((0x16U == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22)
                            : ((0x15U == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21)
                                : ((0x14U == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20)
                                    : ((0x13U == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19)
                                        : ((0x12U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18)
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14)
                                                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_13))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_h1e8875ce__0 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_haa56ce0f__0 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
           | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T 
        = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T) 
                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)));
    if ((0x14U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                    >> 3U))))) {
        __Vtemp_h304753ce__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[0U];
        __Vtemp_h304753ce__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[1U];
        __Vtemp_h304753ce__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[2U];
        __Vtemp_h304753ce__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[3U];
    } else if ((0x13U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_h304753ce__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[0U];
        __Vtemp_h304753ce__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[1U];
        __Vtemp_h304753ce__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[2U];
        __Vtemp_h304753ce__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[3U];
    } else if ((0x12U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_h304753ce__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[0U];
        __Vtemp_h304753ce__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[1U];
        __Vtemp_h304753ce__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[2U];
        __Vtemp_h304753ce__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[3U];
    } else if ((0x11U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_h304753ce__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[0U];
        __Vtemp_h304753ce__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[1U];
        __Vtemp_h304753ce__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[2U];
        __Vtemp_h304753ce__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[3U];
    } else if ((0x10U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_h304753ce__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[0U];
        __Vtemp_h304753ce__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[1U];
        __Vtemp_h304753ce__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[2U];
        __Vtemp_h304753ce__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[3U];
    } else if ((0xfU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 3U))))) {
        __Vtemp_h304753ce__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[0U];
        __Vtemp_h304753ce__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[1U];
        __Vtemp_h304753ce__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[2U];
        __Vtemp_h304753ce__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[3U];
    } else if ((0xeU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 3U))))) {
        __Vtemp_h304753ce__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[0U];
        __Vtemp_h304753ce__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[1U];
        __Vtemp_h304753ce__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[2U];
        __Vtemp_h304753ce__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[3U];
    } else {
        __Vtemp_h304753ce__0[0U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[0U];
        __Vtemp_h304753ce__0[1U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[1U];
        __Vtemp_h304753ce__0[2U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[2U];
        __Vtemp_h304753ce__0[3U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_461[3U];
    }
    if ((0x1aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                    >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_410 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[3U];
    } else if ((0x19U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_410 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[3U];
    } else if ((0x18U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_410 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[3U];
    } else if ((0x17U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_410 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[3U];
    } else if ((0x16U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_410 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[3U];
    } else if ((0x15U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_410 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[3U];
    } else {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_410 
            = ((0x14U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20)
                : ((0x13U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19)
                    : ((0x12U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18)
                        : ((0x11U == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17)
                            : ((0x10U == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16)
                                : ((0xfU == (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                        >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15)
                                    : ((0xeU == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14)
                                        : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_397))))))));
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[0U] 
            = __Vtemp_h304753ce__0[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[1U] 
            = __Vtemp_h304753ce__0[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[2U] 
            = __Vtemp_h304753ce__0[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[3U] 
            = __Vtemp_h304753ce__0[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType 
        = ((0x1cU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                     >> 0xaU)) | ((2U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                         >> 4U)) | 
                                  (1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                         >> 3U))));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op 
        = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                  >> 4U)) | ((2U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                    >> 3U)) | (1U & 
                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 2U))));
    riscv_soc__DOT__core__DOT__commit__DOT___GEN_13 
        = ((0xdU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                              >> 0xfU))) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13
            : ((0xcU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                  >> 0xfU))) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12
                : ((0xbU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                      >> 0xfU))) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11
                    : ((0xaU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                          >> 0xfU)))
                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10
                        : ((9U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0xfU)))
                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9
                            : ((8U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0xfU)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8
                                : ((7U == (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0xfU)))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7
                                    : ((6U == (0x1fU 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                  >> 0xfU)))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6
                                        : ((5U == (0x1fU 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0xfU)))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0xfU)))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1
                                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0)))))))))))));
    riscv_soc__DOT__core__DOT__commit__DOT___GEN_45 
        = ((0xdU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                              >> 0x14U))) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13
            : ((0xcU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                  >> 0x14U))) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12
                : ((0xbU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                      >> 0x14U))) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11
                    : ((0xaU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                          >> 0x14U)))
                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10
                        : ((9U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0x14U)))
                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9
                            : ((8U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0x14U)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8
                                : ((7U == (0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 0x14U)))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7
                                    : ((6U == (0x1fU 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                  >> 0x14U)))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6
                                        : ((5U == (0x1fU 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0x14U)))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0x14U)))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1
                                                      : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0)))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index 
        = (0x3fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready)
                     ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr 
                                >> 4U)) : (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                   >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_is_fence_i 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_is_exception 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_time_irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_soft_irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_commit 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_3));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid) 
            | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en) 
               | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w)))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_flush 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready));
    __Vtemp_h61799857__0[0U] = 1U;
    __Vtemp_h61799857__0[1U] = 0U;
    __Vtemp_h61799857__0[2U] = 0U;
    __Vtemp_h9e5fa0df__1[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                << 1U);
    __Vtemp_h9e5fa0df__1[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                 >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                              << 1U));
    __Vtemp_h9e5fa0df__1[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                 >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                              << 1U));
    VL_ADD_W(3, __Vtemp_h9eba89b7__0, __Vtemp_h61799857__0, __Vtemp_h9e5fa0df__1);
    __Vtemp_h624b2931__1[0U] = 1U;
    __Vtemp_h624b2931__1[1U] = 0U;
    __Vtemp_h624b2931__1[2U] = 0U;
    VL_SUB_W(3, __Vtemp_h6abef518__0, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q, __Vtemp_h624b2931__1);
    __Vtemp_h624b2931__2[0U] = 1U;
    __Vtemp_h624b2931__2[1U] = 0U;
    __Vtemp_h624b2931__2[2U] = 0U;
    VL_ADD_W(3, __Vtemp_hf8d20176__0, __Vtemp_h624b2931__2, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q);
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[2U] 
            = (7U & (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U]));
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] 
            = __Vtemp_h9eba89b7__0[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] 
            = __Vtemp_h9eba89b7__0[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[2U] 
            = (7U & __Vtemp_h9eba89b7__0[2U]);
    } else {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4) {
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] 
                        = __Vtemp_h6abef518__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] 
                        = __Vtemp_h6abef518__0[1U];
                } else {
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] 
                        = __Vtemp_hf8d20176__0[0U];
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] 
                        = __Vtemp_hf8d20176__0[1U];
                }
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
            }
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
        }
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[2U] 
            = (7U & (3U & ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                            ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                                    ? __Vtemp_h6abef518__0[2U]
                                    : __Vtemp_hf8d20176__0[2U])
                                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U])
                            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U])));
    }
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_39 
        = ((0x27U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39)
            : ((0x26U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38)
                : ((0x25U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37)
                    : ((0x24U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36)
                        : ((0x23U == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35)
                            : ((0x22U == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34)
                                : ((0x21U == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33)
                                    : ((0x20U == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32)
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31)
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30)
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29)
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28)
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27)
                                                      : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_26))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_32 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_haa56ce0f__0) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_35 
        = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_haa56ce0f__0)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)));
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_haa56ce0f__0) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_29 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[0U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_33 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata;
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_33 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0)
                    ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                        ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U])))
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U]))))
                    : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                        ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U])))
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U])))));
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_29 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_33 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_53 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdb124cd4__0)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_49 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdb124cd4__0) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_50 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdb124cd4__0) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdb124cd4__0) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_55 = 1U;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))
                    ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U])))
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U]))));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_55 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_53 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_49 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_50 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_55 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata;
    }
    if ((0x21U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                    >> 3U))))) {
        __Vtemp_hff850520__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[0U];
        __Vtemp_hff850520__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[1U];
        __Vtemp_hff850520__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[2U];
        __Vtemp_hff850520__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[3U];
    } else if ((0x20U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_hff850520__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[0U];
        __Vtemp_hff850520__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[1U];
        __Vtemp_hff850520__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[2U];
        __Vtemp_hff850520__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[3U];
    } else if ((0x1fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_hff850520__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[0U];
        __Vtemp_hff850520__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[1U];
        __Vtemp_hff850520__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[2U];
        __Vtemp_hff850520__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[3U];
    } else if ((0x1eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_hff850520__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[0U];
        __Vtemp_hff850520__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[1U];
        __Vtemp_hff850520__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[2U];
        __Vtemp_hff850520__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[3U];
    } else if ((0x1dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_hff850520__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[0U];
        __Vtemp_hff850520__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[1U];
        __Vtemp_hff850520__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[2U];
        __Vtemp_hff850520__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[3U];
    } else if ((0x1cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_hff850520__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[0U];
        __Vtemp_hff850520__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[1U];
        __Vtemp_hff850520__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[2U];
        __Vtemp_hff850520__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[3U];
    } else if ((0x1bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_hff850520__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[0U];
        __Vtemp_hff850520__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[1U];
        __Vtemp_hff850520__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[2U];
        __Vtemp_hff850520__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[3U];
    } else {
        __Vtemp_hff850520__0[0U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[0U];
        __Vtemp_hff850520__0[1U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[1U];
        __Vtemp_hff850520__0[2U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[2U];
        __Vtemp_hff850520__0[3U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_474[3U];
    }
    if ((0x27U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                    >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_423 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[3U];
    } else if ((0x26U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_423 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[3U];
    } else if ((0x25U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_423 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[3U];
    } else if ((0x24U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_423 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[3U];
    } else if ((0x23U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_423 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[3U];
    } else if ((0x22U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_423 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[3U];
    } else {
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_423 
            = ((0x21U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33)
                : ((0x20U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32)
                    : ((0x1fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31)
                        : ((0x1eU == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30)
                            : ((0x1dU == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29)
                                : ((0x1cU == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28)
                                    : ((0x1bU == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27)
                                        : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_410))))))));
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[0U] 
            = __Vtemp_hff850520__0[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[1U] 
            = __Vtemp_hff850520__0[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[2U] 
            = __Vtemp_hff850520__0[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[3U] 
            = __Vtemp_hff850520__0[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk 
        = ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                     >> 0x19U)) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
           | ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
              & ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                 | ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                     ? (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                           >> 3U)) : ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                      | ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                         | ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                            & ((6U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                               & ((0U 
                                                   != 
                                                   (7U 
                                                    & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                       >> 0xcU))) 
                                                  & (~ 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0xeU)))))))))));
    if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg 
            = (1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                     >> 5U));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType 
            = ((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                ? 6U : (((1U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                       >> 0xcU))) | 
                         (5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                       >> 0xcU)))) ? 4U
                         : 0xcU));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg 
            = (1U & ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                     & ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                        | ((5U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                           & ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                              | ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                    >> 5U)))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType 
            = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                ? 1U : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                         ? 6U : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                  ? ((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                      ? 2U : 0xcU) : 
                                 ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                   ? 7U : ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                            ? ((0x20U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                                ? 3U
                                                : 0xcU)
                                            : ((1U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                ? 0U
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                         >> 0xcU)))
                                                     ? 0U
                                                     : 5U)
                                                    : 0U)))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_26 
        = ((0x1aU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                               >> 0xfU))) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26
            : ((0x19U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                   >> 0xfU))) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25
                : ((0x18U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                       >> 0xfU))) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24
                    : ((0x17U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0xfU)))
                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23
                        : ((0x16U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0xfU)))
                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22
                            : ((0x15U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0xfU)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21
                                : ((0x14U == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xfU)))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0xfU)))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0xfU)))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0xfU)))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14
                                                      : riscv_soc__DOT__core__DOT__commit__DOT___GEN_13)))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_58 
        = ((0x1aU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                               >> 0x14U))) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26
            : ((0x19U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                   >> 0x14U))) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25
                : ((0x18U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                       >> 0x14U))) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24
                    : ((0x17U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U)))
                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23
                        : ((0x16U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0x14U)))
                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22
                            : ((0x15U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0x14U)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21
                                : ((0x14U == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U)))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0x14U)))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0x14U)))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0x14U)))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14
                                                      : riscv_soc__DOT__core__DOT__commit__DOT___GEN_45)))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_soft_irq) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_time_irq));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_minstret_T_3 
        = (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret 
           + (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_commit)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_25 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)) 
           | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)
               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4)
               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_26 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)) 
           | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)
               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_5)
               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_27 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)) 
           | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)
               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_6)
               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_28 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)) 
           | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)
               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_7)
               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mepc 
        = (((0x341U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
        = (((0x300U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie 
        = (((0x304U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_in_w_csr_en))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_flush) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_flush)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_52 
        = ((0x34U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52)
            : ((0x33U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51)
                : ((0x32U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50)
                    : ((0x31U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49)
                        : ((0x30U == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48)
                            : ((0x2fU == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47)
                                : ((0x2eU == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46)
                                    : ((0x2dU == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45)
                                        : ((0x2cU == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44)
                                            : ((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43)
                                                : (
                                                   (0x2aU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42)
                                                    : 
                                                   ((0x29U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41)
                                                     : 
                                                    ((0x28U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40)
                                                      : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_39))))))))))))));
    if ((0x2eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                    >> 3U))))) {
        __Vtemp_h8302757c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[0U];
        __Vtemp_h8302757c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[1U];
        __Vtemp_h8302757c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[2U];
        __Vtemp_h8302757c__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[3U];
    } else if ((0x2dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_h8302757c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[0U];
        __Vtemp_h8302757c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[1U];
        __Vtemp_h8302757c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[2U];
        __Vtemp_h8302757c__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[3U];
    } else if ((0x2cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_h8302757c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[0U];
        __Vtemp_h8302757c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[1U];
        __Vtemp_h8302757c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[2U];
        __Vtemp_h8302757c__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[3U];
    } else if ((0x2bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_h8302757c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[0U];
        __Vtemp_h8302757c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[1U];
        __Vtemp_h8302757c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[2U];
        __Vtemp_h8302757c__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[3U];
    } else if ((0x2aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_h8302757c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[0U];
        __Vtemp_h8302757c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[1U];
        __Vtemp_h8302757c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[2U];
        __Vtemp_h8302757c__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[3U];
    } else if ((0x29U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_h8302757c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[0U];
        __Vtemp_h8302757c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[1U];
        __Vtemp_h8302757c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[2U];
        __Vtemp_h8302757c__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[3U];
    } else if ((0x28U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_h8302757c__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[0U];
        __Vtemp_h8302757c__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[1U];
        __Vtemp_h8302757c__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[2U];
        __Vtemp_h8302757c__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[3U];
    } else {
        __Vtemp_h8302757c__0[0U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[0U];
        __Vtemp_h8302757c__0[1U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[1U];
        __Vtemp_h8302757c__0[2U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[2U];
        __Vtemp_h8302757c__0[3U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_487[3U];
    }
    if ((0x34U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                    >> 3U))))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_436 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[3U];
    } else if ((0x33U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_436 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[3U];
    } else if ((0x32U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_436 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[3U];
    } else if ((0x31U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_436 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[3U];
    } else if ((0x30U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_436 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[3U];
    } else if ((0x2fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_436 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47;
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_436 
            = ((0x2eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46)
                : ((0x2dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45)
                    : ((0x2cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44)
                        : ((0x2bU == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43)
                            : ((0x2aU == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42)
                                : ((0x29U == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41)
                                    : ((0x28U == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40)
                                        : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_423))))))));
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[0U] 
            = __Vtemp_h8302757c__0[0U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[1U] 
            = __Vtemp_h8302757c__0[1U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[2U] 
            = __Vtemp_h8302757c__0[2U];
        riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[3U] 
            = __Vtemp_h8302757c__0[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip) 
           & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                       >> 3U)) & (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie 
                                          >> 3U))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq 
        = ((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
            <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime) 
           & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                       >> 3U)) & (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie 
                                          >> 7U))));
    riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_4[0U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data);
    riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_4[1U] 
        = (IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data 
                                  >> 0x1fU))) ? 0x1ffffffffULL
                    : 0ULL));
    riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_4[2U] 
        = (IData)((((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data 
                                   >> 0x1fU))) ? 0x1ffffffffULL
                     : 0ULL) >> 0x20U));
    riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_11[0U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data);
    riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_11[1U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data 
                   >> 0x20U));
    riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_11[2U] 
        = (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data 
                         >> 0x3fU)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data 
        = ((0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
        = (((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                          >> 2U))) ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data
             : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
           + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
           + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready)) 
           & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
              & (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
    riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_hd9109502__0 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & ((5U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
              & (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                  | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid) 
                    & ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_ready))))));
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63 
        = ((0x3fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63)
            : ((0x3eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62)
                : ((0x3dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61)
                    : ((0x3cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60)
                        : ((0x3bU == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59)
                            : ((0x3aU == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58)
                                : ((0x39U == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57)
                                    : ((0x38U == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56)
                                        : ((0x37U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55)
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54)
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53)
                                                    : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_52))))))))))));
    if ((0x3bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                    >> 3U))))) {
        __Vtemp_hc6e9d461__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[0U];
        __Vtemp_hc6e9d461__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[1U];
        __Vtemp_hc6e9d461__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[2U];
        __Vtemp_hc6e9d461__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[3U];
    } else if ((0x3aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_hc6e9d461__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[0U];
        __Vtemp_hc6e9d461__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[1U];
        __Vtemp_hc6e9d461__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[2U];
        __Vtemp_hc6e9d461__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[3U];
    } else if ((0x39U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_hc6e9d461__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[0U];
        __Vtemp_hc6e9d461__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[1U];
        __Vtemp_hc6e9d461__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[2U];
        __Vtemp_hc6e9d461__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[3U];
    } else if ((0x38U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_hc6e9d461__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[0U];
        __Vtemp_hc6e9d461__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[1U];
        __Vtemp_hc6e9d461__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[2U];
        __Vtemp_hc6e9d461__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[3U];
    } else if ((0x37U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_hc6e9d461__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[0U];
        __Vtemp_hc6e9d461__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[1U];
        __Vtemp_hc6e9d461__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[2U];
        __Vtemp_hc6e9d461__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[3U];
    } else if ((0x36U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_hc6e9d461__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[0U];
        __Vtemp_hc6e9d461__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[1U];
        __Vtemp_hc6e9d461__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[2U];
        __Vtemp_hc6e9d461__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[3U];
    } else if ((0x35U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        __Vtemp_hc6e9d461__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[0U];
        __Vtemp_hc6e9d461__0[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[1U];
        __Vtemp_hc6e9d461__0[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[2U];
        __Vtemp_hc6e9d461__0[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[3U];
    } else {
        __Vtemp_hc6e9d461__0[0U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[0U];
        __Vtemp_hc6e9d461__0[1U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[1U];
        __Vtemp_hc6e9d461__0[2U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[2U];
        __Vtemp_hc6e9d461__0[3U] = riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_500[3U];
    }
    if ((0x3fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                    >> 3U))))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[0U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[1U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[2U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[3U];
    } else if ((0x3eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[0U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[1U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[2U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[3U];
    } else if ((0x3dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[0U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[1U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[2U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[3U];
    } else if ((0x3cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[0U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[1U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[2U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U] 
            = __Vtemp_hc6e9d461__0[0U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U] 
            = __Vtemp_hc6e9d461__0[1U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U] 
            = __Vtemp_hc6e9d461__0[2U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
            = __Vtemp_hc6e9d461__0[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
    if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
            = riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_4[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
            = riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_4[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
            = riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_4[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[0U] 
            = riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_4[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[1U] 
            = riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_4[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[2U] 
            = riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_4[2U];
        if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                = riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_11[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                = riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_11[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                = riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_11[2U];
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data 
                           >> 0x20U));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] = 0U;
        }
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U] 
            = riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_11[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U] 
            = riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_11[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U] 
            = riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_11[2U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2 
        = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? (((QData)((IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data)))
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
        = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm);
    if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[2U] = 0U;
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                = (IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                          >> 0x1fU)))
                            ? 0x1ffffffffULL : 0ULL));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
                = (IData)((((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                           >> 0x1fU)))
                             ? 0x1ffffffffULL : 0ULL) 
                           >> 0x20U));
            if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                               >> 0x1fU)))) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[0U] = 0xffffffffU;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[1U] = 0xffffffffU;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[2U] = 1U;
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[0U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[1U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[2U] = 0U;
            }
        }
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
            = (((QData)((IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data 
            = (0x3fU & (0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    } else {
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                           >> 0x20U));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[2U] = 0U;
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                           >> 0x20U));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
                = (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                                 >> 0x3fU)));
            if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data 
                               >> 0x3fU)))) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[0U] = 0xffffffffU;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[1U] = 0xffffffffU;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[2U] = 1U;
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[0U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[1U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[2U] = 0U;
            }
        }
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs1_data;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data 
           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
        = ((~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data) 
           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
           == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
        = ((0x40U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb 
        = ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? (QData)((IData)((0x7ffU & ((IData)(0xfU) 
                                         << (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
            : ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? (QData)((IData)((0x1ffU & ((IData)(3U) 
                                             << (7U 
                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
                : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                    ? (QData)((IData)((0x7fffU & ((IData)(0xffU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
                    : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                        ? (QData)((IData)((0xffU & 
                                           ((IData)(1U) 
                                            << (7U 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
                        : 0ULL))));
    __Vtemp_h9b0ffc5b__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data);
    __Vtemp_h9b0ffc5b__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_rs2_data 
                                        >> 0x20U));
    __Vtemp_h9b0ffc5b__0[2U] = 0U;
    __Vtemp_h9b0ffc5b__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h5698ed3e__0, __Vtemp_h9b0ffc5b__0, 
                  (0x38U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr) 
                            << 3U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U] 
        = __Vtemp_h5698ed3e__0[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U] 
        = __Vtemp_h5698ed3e__0[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U] 
        = __Vtemp_h5698ed3e__0[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U] 
        = (0x7fffffffU & __Vtemp_h5698ed3e__0[3U]);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_h1e8875ce__0) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_haa56ce0f__0) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
                               >> 0x20U));
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                               << 4U));
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                << 4U) >> 0x20U));
            }
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[2U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U] 
                = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                           << 4U));
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U] 
                = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                            << 4U) >> 0x20U));
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[2U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U] 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdb124cd4__0)
                        ? (IData)(((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))
                                      ? (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U])))
                                      : (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U])))) 
                                    << 0xaU) | (QData)((IData)(
                                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index) 
                                                                << 4U)))))
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr))
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr));
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    }
    __Vtemp_h3ade9cab__0[1U] = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                 ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr 
                                            >> 0x20U))
                                 : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_h1e8875ce__0)
                                         ? (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr 
                                                    >> 0x20U))
                                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdb124cd4__0)
                                                 ? (IData)(
                                                           (((((1U 
                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U])))
                                                                : 
                                                               (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U])))) 
                                                              << 0xaU) 
                                                             | (QData)((IData)(
                                                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index) 
                                                                                << 4U)))) 
                                                            >> 0x20U))
                                                 : (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr 
                                                            >> 0x20U)))
                                             : (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr 
                                                        >> 0x20U))))
                                     : (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr 
                                                >> 0x20U))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[3U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U] 
            = __Vtemp_h3ade9cab__0[1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                         ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_h1e8875ce__0)
                             ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                                      ? 0U : 0U)) : 0U));
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35 
                = (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[1U] 
                = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata 
                           >> 0x20U));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[2U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[3U] = 0U;
        } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U];
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35 = 0ULL;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[2U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[3U] = 0U;
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_5 
        = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush) 
                 | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid)
                     ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram))
                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write 
            = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag)));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 4U)));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & (IData)(riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_hd9109502__0));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
              & (IData)(riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_hd9109502__0)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & ((5U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
              & ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                 & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_3) 
                       & (IData)(riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_hd9109502__0))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
              >> 1U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_3 
        = (3U & ((3U == (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63))
                  ? (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63)
                  : ((IData)(1U) + (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___chage_pht_counter_T_7 
        = (3U & ((0U == (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63))
                  ? (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63)
                  : ((IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63) 
                     - (IData)(1U))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid 
        = ((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
            >> 0x1aU) & (((0xffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                                     >> 2U))) 
                          == ((0xfffffffffffffeULL 
                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                  >> 8U)) | (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                        >> 2U))))))) 
                         & (((0x3fU == (0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U))))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63)
                              : ((0x3eU == (0x3fU & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                             >> 3U))))
                                  ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62)
                                  : ((0x3dU == (0x3fU 
                                                & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U))))
                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61)
                                      : ((0x3cU == 
                                          (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                          ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60)
                                          : ((0x3bU 
                                              == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                             >> 3U))))
                                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59)
                                              : ((0x3aU 
                                                  == 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                              >> 3U))))
                                                  ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58)
                                                  : 
                                                 ((0x39U 
                                                   == 
                                                   (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                               >> 3U))))
                                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57)
                                                   : 
                                                  ((0x38U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56)
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55)
                                                     : 
                                                    ((0x36U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54)
                                                      : 
                                                     ((0x35U 
                                                       == 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                   >> 3U))))
                                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53)
                                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_436)))))))))))) 
                            >> 1U)));
    __Vtemp_hcc513de2__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data);
    __Vtemp_hcc513de2__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                        >> 0x20U));
    __Vtemp_hcc513de2__0[2U] = 0U;
    __Vtemp_h9fe2811e__0[0U] = (IData)(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                         ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp_h9fe2811e__0[1U] = (IData)((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                          ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                        >> 0x20U));
    __Vtemp_h9fe2811e__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h2e2fd781__0, __Vtemp_hcc513de2__0, __Vtemp_h9fe2811e__0);
    __Vtemp_hd5a7caf0__0[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra;
    __Vtemp_hd5a7caf0__0[1U] = 0U;
    __Vtemp_hd5a7caf0__0[2U] = 0U;
    VL_ADD_W(3, __Vtemp_h2ad0fb32__0, __Vtemp_h2e2fd781__0, __Vtemp_hd5a7caf0__0);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[0U] 
        = __Vtemp_h2ad0fb32__0[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U] 
        = __Vtemp_h2ad0fb32__0[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U] 
        = (1U & __Vtemp_h2ad0fb32__0[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) 
           & (IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass0_val_T));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) 
           & (IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass0_val_T));
    if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[3U];
    } else if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[3U];
    } else if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[3U];
    } else if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[3U];
    } else if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[3U];
    } else if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[3U];
    } else if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[3U];
    } else if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[3U];
    } else if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[3U];
    } else if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[3U];
    } else if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[3U];
    } else if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[3U];
    } else if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[3U];
    } else if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[3U];
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[3U];
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[3U];
    } else {
        __Vtemp_hf333c4c0__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[0U];
        __Vtemp_hf333c4c0__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[1U];
        __Vtemp_hf333c4c0__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[2U];
        __Vtemp_hf333c4c0__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[3U];
        __Vtemp_ha8b81f16__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[0U];
        __Vtemp_ha8b81f16__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[1U];
        __Vtemp_ha8b81f16__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[2U];
        __Vtemp_ha8b81f16__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[3U];
        __Vtemp_hfea70b08__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[0U];
        __Vtemp_hfea70b08__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[1U];
        __Vtemp_hfea70b08__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[2U];
        __Vtemp_hfea70b08__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[3U];
        __Vtemp_hc9e8dd8a__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[0U];
        __Vtemp_hc9e8dd8a__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[1U];
        __Vtemp_hc9e8dd8a__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[2U];
        __Vtemp_hc9e8dd8a__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[3U];
    }
    if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram0__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[0U];
        riscv_soc__DOT__sram0__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[1U];
        riscv_soc__DOT__sram0__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[2U];
        riscv_soc__DOT__sram0__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[3U];
        riscv_soc__DOT__sram1__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[0U];
        riscv_soc__DOT__sram1__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[1U];
        riscv_soc__DOT__sram1__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[2U];
        riscv_soc__DOT__sram1__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[3U];
        riscv_soc__DOT__sram2__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[0U];
        riscv_soc__DOT__sram2__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[1U];
        riscv_soc__DOT__sram2__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[2U];
        riscv_soc__DOT__sram2__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[3U];
        riscv_soc__DOT__sram3__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[0U];
        riscv_soc__DOT__sram3__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[1U];
        riscv_soc__DOT__sram3__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[2U];
        riscv_soc__DOT__sram3__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[3U];
    } else if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram0__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[0U];
        riscv_soc__DOT__sram0__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[1U];
        riscv_soc__DOT__sram0__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[2U];
        riscv_soc__DOT__sram0__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[3U];
        riscv_soc__DOT__sram1__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[0U];
        riscv_soc__DOT__sram1__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[1U];
        riscv_soc__DOT__sram1__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[2U];
        riscv_soc__DOT__sram1__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[3U];
        riscv_soc__DOT__sram2__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[0U];
        riscv_soc__DOT__sram2__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[1U];
        riscv_soc__DOT__sram2__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[2U];
        riscv_soc__DOT__sram2__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[3U];
        riscv_soc__DOT__sram3__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[0U];
        riscv_soc__DOT__sram3__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[1U];
        riscv_soc__DOT__sram3__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[2U];
        riscv_soc__DOT__sram3__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[3U];
    } else if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram0__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[0U];
        riscv_soc__DOT__sram0__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[1U];
        riscv_soc__DOT__sram0__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[2U];
        riscv_soc__DOT__sram0__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[3U];
        riscv_soc__DOT__sram1__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[0U];
        riscv_soc__DOT__sram1__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[1U];
        riscv_soc__DOT__sram1__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[2U];
        riscv_soc__DOT__sram1__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[3U];
        riscv_soc__DOT__sram2__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[0U];
        riscv_soc__DOT__sram2__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[1U];
        riscv_soc__DOT__sram2__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[2U];
        riscv_soc__DOT__sram2__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[3U];
        riscv_soc__DOT__sram3__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[0U];
        riscv_soc__DOT__sram3__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[1U];
        riscv_soc__DOT__sram3__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[2U];
        riscv_soc__DOT__sram3__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[3U];
    } else if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram0__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[0U];
        riscv_soc__DOT__sram0__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[1U];
        riscv_soc__DOT__sram0__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[2U];
        riscv_soc__DOT__sram0__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[3U];
        riscv_soc__DOT__sram1__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[0U];
        riscv_soc__DOT__sram1__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[1U];
        riscv_soc__DOT__sram1__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[2U];
        riscv_soc__DOT__sram1__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[3U];
        riscv_soc__DOT__sram2__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[0U];
        riscv_soc__DOT__sram2__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[1U];
        riscv_soc__DOT__sram2__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[2U];
        riscv_soc__DOT__sram2__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[3U];
        riscv_soc__DOT__sram3__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[0U];
        riscv_soc__DOT__sram3__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[1U];
        riscv_soc__DOT__sram3__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[2U];
        riscv_soc__DOT__sram3__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[3U];
    } else if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram0__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[0U];
        riscv_soc__DOT__sram0__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[1U];
        riscv_soc__DOT__sram0__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[2U];
        riscv_soc__DOT__sram0__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[3U];
        riscv_soc__DOT__sram1__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[0U];
        riscv_soc__DOT__sram1__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[1U];
        riscv_soc__DOT__sram1__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[2U];
        riscv_soc__DOT__sram1__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[3U];
        riscv_soc__DOT__sram2__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[0U];
        riscv_soc__DOT__sram2__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[1U];
        riscv_soc__DOT__sram2__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[2U];
        riscv_soc__DOT__sram2__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[3U];
        riscv_soc__DOT__sram3__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[0U];
        riscv_soc__DOT__sram3__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[1U];
        riscv_soc__DOT__sram3__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[2U];
        riscv_soc__DOT__sram3__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[3U];
    } else {
        riscv_soc__DOT__sram0__DOT___GEN_21[0U] = __Vtemp_hf333c4c0__0[0U];
        riscv_soc__DOT__sram0__DOT___GEN_21[1U] = __Vtemp_hf333c4c0__0[1U];
        riscv_soc__DOT__sram0__DOT___GEN_21[2U] = __Vtemp_hf333c4c0__0[2U];
        riscv_soc__DOT__sram0__DOT___GEN_21[3U] = __Vtemp_hf333c4c0__0[3U];
        riscv_soc__DOT__sram1__DOT___GEN_21[0U] = __Vtemp_ha8b81f16__0[0U];
        riscv_soc__DOT__sram1__DOT___GEN_21[1U] = __Vtemp_ha8b81f16__0[1U];
        riscv_soc__DOT__sram1__DOT___GEN_21[2U] = __Vtemp_ha8b81f16__0[2U];
        riscv_soc__DOT__sram1__DOT___GEN_21[3U] = __Vtemp_ha8b81f16__0[3U];
        riscv_soc__DOT__sram2__DOT___GEN_21[0U] = __Vtemp_hfea70b08__0[0U];
        riscv_soc__DOT__sram2__DOT___GEN_21[1U] = __Vtemp_hfea70b08__0[1U];
        riscv_soc__DOT__sram2__DOT___GEN_21[2U] = __Vtemp_hfea70b08__0[2U];
        riscv_soc__DOT__sram2__DOT___GEN_21[3U] = __Vtemp_hfea70b08__0[3U];
        riscv_soc__DOT__sram3__DOT___GEN_21[0U] = __Vtemp_hc9e8dd8a__0[0U];
        riscv_soc__DOT__sram3__DOT___GEN_21[1U] = __Vtemp_hc9e8dd8a__0[1U];
        riscv_soc__DOT__sram3__DOT___GEN_21[2U] = __Vtemp_hc9e8dd8a__0[2U];
        riscv_soc__DOT__sram3__DOT___GEN_21[3U] = __Vtemp_hc9e8dd8a__0[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U))) | (8U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
              >> 4U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid 
        = ((~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
               >> 4U)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
            = (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc 
            = ((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))
                ? ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5
                    : ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                        ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4
                        : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3
                            : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                                ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2
                                : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1
                                    : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0)))))
                : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                    << 0x3eU) | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])) 
                                               >> 2U))));
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_0_T_2 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_0_T_2 
            = (4ULL + vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2 
        = (1U & ((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                           ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                          >> 0x3fU)) ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                >> 0x3fU))
                  : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U] 
                     >> 0x1fU)));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            >> 0xaU) == (0x3fffffffffffffULL & (((QData)((IData)(
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                   ? (IData)(
                                                                             ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                               >> 0xaU) 
                                                                              >> 0x20U))
                                                                   : (IData)(
                                                                             ((0x3fffffffffffffULL 
                                                                               & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))) 
                                                                              >> 0x20U))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                    ? (IData)(
                                                                              (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                               >> 0xaU))
                                                                    : (IData)(
                                                                              (0x3fffffffffffffULL 
                                                                               & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))))))))));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            >> 0xaU) == (0x3fffffffffffffULL & (((QData)((IData)(
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                   ? (IData)(
                                                                             ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                               >> 0xaU) 
                                                                              >> 0x20U))
                                                                   : (IData)(
                                                                             ((0x3fffffffffffffULL 
                                                                               & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))) 
                                                                              >> 0x20U))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                    ? (IData)(
                                                                              (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                                               >> 0xaU))
                                                                    : (IData)(
                                                                              (0x3fffffffffffffULL 
                                                                               & (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))))))))));
    if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[3U];
    } else if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[3U];
    } else if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[3U];
    } else if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[3U];
    } else if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[3U];
    } else if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[3U];
    } else if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[3U];
    } else if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[3U];
    } else if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[3U];
    } else if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[3U];
    } else if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[3U];
    } else if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[3U];
    } else if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[3U];
    } else if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[3U];
    } else if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[3U];
    } else if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hbabbffe2__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[0U];
        __Vtemp_hbabbffe2__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[1U];
        __Vtemp_hbabbffe2__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[2U];
        __Vtemp_hbabbffe2__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[3U];
        __Vtemp_ha4c0a9e9__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[0U];
        __Vtemp_ha4c0a9e9__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[1U];
        __Vtemp_ha4c0a9e9__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[2U];
        __Vtemp_ha4c0a9e9__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[3U];
        __Vtemp_hb11deedb__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[0U];
        __Vtemp_hb11deedb__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[1U];
        __Vtemp_hb11deedb__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[2U];
        __Vtemp_hb11deedb__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[3U];
        __Vtemp_h498e217b__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[0U];
        __Vtemp_h498e217b__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[1U];
        __Vtemp_h498e217b__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[2U];
        __Vtemp_h498e217b__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[3U];
    } else {
        __Vtemp_hbabbffe2__0[0U] = riscv_soc__DOT__sram0__DOT___GEN_21[0U];
        __Vtemp_hbabbffe2__0[1U] = riscv_soc__DOT__sram0__DOT___GEN_21[1U];
        __Vtemp_hbabbffe2__0[2U] = riscv_soc__DOT__sram0__DOT___GEN_21[2U];
        __Vtemp_hbabbffe2__0[3U] = riscv_soc__DOT__sram0__DOT___GEN_21[3U];
        __Vtemp_ha4c0a9e9__0[0U] = riscv_soc__DOT__sram1__DOT___GEN_21[0U];
        __Vtemp_ha4c0a9e9__0[1U] = riscv_soc__DOT__sram1__DOT___GEN_21[1U];
        __Vtemp_ha4c0a9e9__0[2U] = riscv_soc__DOT__sram1__DOT___GEN_21[2U];
        __Vtemp_ha4c0a9e9__0[3U] = riscv_soc__DOT__sram1__DOT___GEN_21[3U];
        __Vtemp_hb11deedb__0[0U] = riscv_soc__DOT__sram2__DOT___GEN_21[0U];
        __Vtemp_hb11deedb__0[1U] = riscv_soc__DOT__sram2__DOT___GEN_21[1U];
        __Vtemp_hb11deedb__0[2U] = riscv_soc__DOT__sram2__DOT___GEN_21[2U];
        __Vtemp_hb11deedb__0[3U] = riscv_soc__DOT__sram2__DOT___GEN_21[3U];
        __Vtemp_h498e217b__0[0U] = riscv_soc__DOT__sram3__DOT___GEN_21[0U];
        __Vtemp_h498e217b__0[1U] = riscv_soc__DOT__sram3__DOT___GEN_21[1U];
        __Vtemp_h498e217b__0[2U] = riscv_soc__DOT__sram3__DOT___GEN_21[2U];
        __Vtemp_h498e217b__0[3U] = riscv_soc__DOT__sram3__DOT___GEN_21[3U];
    }
    if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram0__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[0U];
        riscv_soc__DOT__sram0__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[1U];
        riscv_soc__DOT__sram0__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[2U];
        riscv_soc__DOT__sram0__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[3U];
        riscv_soc__DOT__sram1__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[0U];
        riscv_soc__DOT__sram1__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[1U];
        riscv_soc__DOT__sram1__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[2U];
        riscv_soc__DOT__sram1__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[3U];
        riscv_soc__DOT__sram2__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[0U];
        riscv_soc__DOT__sram2__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[1U];
        riscv_soc__DOT__sram2__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[2U];
        riscv_soc__DOT__sram2__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[3U];
        riscv_soc__DOT__sram3__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[0U];
        riscv_soc__DOT__sram3__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[1U];
        riscv_soc__DOT__sram3__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[2U];
        riscv_soc__DOT__sram3__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[3U];
    } else if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram0__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[0U];
        riscv_soc__DOT__sram0__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[1U];
        riscv_soc__DOT__sram0__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[2U];
        riscv_soc__DOT__sram0__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[3U];
        riscv_soc__DOT__sram1__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[0U];
        riscv_soc__DOT__sram1__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[1U];
        riscv_soc__DOT__sram1__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[2U];
        riscv_soc__DOT__sram1__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[3U];
        riscv_soc__DOT__sram2__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[0U];
        riscv_soc__DOT__sram2__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[1U];
        riscv_soc__DOT__sram2__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[2U];
        riscv_soc__DOT__sram2__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[3U];
        riscv_soc__DOT__sram3__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[0U];
        riscv_soc__DOT__sram3__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[1U];
        riscv_soc__DOT__sram3__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[2U];
        riscv_soc__DOT__sram3__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[3U];
    } else if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram0__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[0U];
        riscv_soc__DOT__sram0__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[1U];
        riscv_soc__DOT__sram0__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[2U];
        riscv_soc__DOT__sram0__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[3U];
        riscv_soc__DOT__sram1__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[0U];
        riscv_soc__DOT__sram1__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[1U];
        riscv_soc__DOT__sram1__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[2U];
        riscv_soc__DOT__sram1__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[3U];
        riscv_soc__DOT__sram2__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[0U];
        riscv_soc__DOT__sram2__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[1U];
        riscv_soc__DOT__sram2__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[2U];
        riscv_soc__DOT__sram2__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[3U];
        riscv_soc__DOT__sram3__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[0U];
        riscv_soc__DOT__sram3__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[1U];
        riscv_soc__DOT__sram3__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[2U];
        riscv_soc__DOT__sram3__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[3U];
    } else if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram0__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[0U];
        riscv_soc__DOT__sram0__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[1U];
        riscv_soc__DOT__sram0__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[2U];
        riscv_soc__DOT__sram0__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[3U];
        riscv_soc__DOT__sram1__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[0U];
        riscv_soc__DOT__sram1__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[1U];
        riscv_soc__DOT__sram1__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[2U];
        riscv_soc__DOT__sram1__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[3U];
        riscv_soc__DOT__sram2__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[0U];
        riscv_soc__DOT__sram2__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[1U];
        riscv_soc__DOT__sram2__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[2U];
        riscv_soc__DOT__sram2__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[3U];
        riscv_soc__DOT__sram3__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[0U];
        riscv_soc__DOT__sram3__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[1U];
        riscv_soc__DOT__sram3__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[2U];
        riscv_soc__DOT__sram3__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[3U];
    } else if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram0__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[0U];
        riscv_soc__DOT__sram0__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[1U];
        riscv_soc__DOT__sram0__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[2U];
        riscv_soc__DOT__sram0__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[3U];
        riscv_soc__DOT__sram1__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[0U];
        riscv_soc__DOT__sram1__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[1U];
        riscv_soc__DOT__sram1__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[2U];
        riscv_soc__DOT__sram1__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[3U];
        riscv_soc__DOT__sram2__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[0U];
        riscv_soc__DOT__sram2__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[1U];
        riscv_soc__DOT__sram2__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[2U];
        riscv_soc__DOT__sram2__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[3U];
        riscv_soc__DOT__sram3__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[0U];
        riscv_soc__DOT__sram3__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[1U];
        riscv_soc__DOT__sram3__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[2U];
        riscv_soc__DOT__sram3__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[3U];
    } else {
        riscv_soc__DOT__sram0__DOT___GEN_42[0U] = __Vtemp_hbabbffe2__0[0U];
        riscv_soc__DOT__sram0__DOT___GEN_42[1U] = __Vtemp_hbabbffe2__0[1U];
        riscv_soc__DOT__sram0__DOT___GEN_42[2U] = __Vtemp_hbabbffe2__0[2U];
        riscv_soc__DOT__sram0__DOT___GEN_42[3U] = __Vtemp_hbabbffe2__0[3U];
        riscv_soc__DOT__sram1__DOT___GEN_42[0U] = __Vtemp_ha4c0a9e9__0[0U];
        riscv_soc__DOT__sram1__DOT___GEN_42[1U] = __Vtemp_ha4c0a9e9__0[1U];
        riscv_soc__DOT__sram1__DOT___GEN_42[2U] = __Vtemp_ha4c0a9e9__0[2U];
        riscv_soc__DOT__sram1__DOT___GEN_42[3U] = __Vtemp_ha4c0a9e9__0[3U];
        riscv_soc__DOT__sram2__DOT___GEN_42[0U] = __Vtemp_hb11deedb__0[0U];
        riscv_soc__DOT__sram2__DOT___GEN_42[1U] = __Vtemp_hb11deedb__0[1U];
        riscv_soc__DOT__sram2__DOT___GEN_42[2U] = __Vtemp_hb11deedb__0[2U];
        riscv_soc__DOT__sram2__DOT___GEN_42[3U] = __Vtemp_hb11deedb__0[3U];
        riscv_soc__DOT__sram3__DOT___GEN_42[0U] = __Vtemp_h498e217b__0[0U];
        riscv_soc__DOT__sram3__DOT___GEN_42[1U] = __Vtemp_h498e217b__0[1U];
        riscv_soc__DOT__sram3__DOT___GEN_42[2U] = __Vtemp_h498e217b__0[2U];
        riscv_soc__DOT__sram3__DOT___GEN_42[3U] = __Vtemp_h498e217b__0[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_39 
        = (1U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                  ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid))
                  : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready)
                      : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                          ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready)
                          : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22 
        = (1U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                  ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid))
                  : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready)
                      : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready)))));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_msip_T_1 
        = (1U & ((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))
                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U]
                  : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip)));
    if ((0x4000U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtimecmp_T 
            = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___temp_data_T_4 
            = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtimecmp_T 
            = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp;
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___temp_data_T_4 
            = ((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))
                ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip))
                : 0ULL);
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cpu_valid 
        = ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                     >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint 
        = ((0x2000000U > (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))) 
           | (0x200ffffU < (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))));
    __Vtemp_h1c230895__0[1U] = ((6U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U)))
                                 ? ((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])
                                     ? (IData)(((4ULL 
                                                 + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                                >> 0x20U))
                                     : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                >> 0x20U)))
                                 : ((4U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U)))
                                     ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                         ? (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                    >> 0x20U))
                                         : (IData)(
                                                   ((4ULL 
                                                     + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                                    >> 0x20U)))
                                     : ((1U == (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                         ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                             ? (IData)(
                                                       ((4ULL 
                                                         + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                                        >> 0x20U))
                                             : (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                        >> 0x20U)))
                                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                             ? (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                        >> 0x20U))
                                             : (IData)(
                                                       ((4ULL 
                                                         + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                                                        >> 0x20U))))));
    __Vtemp_hf6ff0c49__0[0U] = ((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U)))
                                 ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                     ? (IData)((4ULL 
                                                + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc))
                                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1))
                                 : ((6U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U)))
                                     ? ((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])
                                         ? (IData)(
                                                   (4ULL 
                                                    + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc))
                                         : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1))
                                     : ((4U == (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                         ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                             ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                             : (IData)(
                                                       (4ULL 
                                                        + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)))
                                         : ((1U == 
                                             (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))
                                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                                 ? (IData)(
                                                           (4ULL 
                                                            + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc))
                                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1))
                                             : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                                 ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                                 : (IData)(
                                                           (4ULL 
                                                            + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)))))));
    if ((3U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                      >> 2U)))) {
        __Vtemp_hab3058fc__0[2U] = 1U;
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                       >> 0x20U));
    } else if ((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U)))) {
        if ((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])) {
            __Vtemp_hab3058fc__0[2U] = 1U;
            riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
            riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
                = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                           >> 0x20U));
        } else {
            __Vtemp_hab3058fc__0[2U] = 0U;
            riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U] 
                = (IData)((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
            riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
                = (IData)(((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                           >> 0x20U));
        }
    } else {
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U] 
            = __Vtemp_hf6ff0c49__0[0U];
        if ((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                          >> 2U)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2) {
                __Vtemp_hab3058fc__0[2U] = 0U;
                riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
                    = (IData)(((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                               >> 0x20U));
            } else {
                __Vtemp_hab3058fc__0[2U] = 1U;
                riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                               >> 0x20U));
            }
        } else {
            __Vtemp_hab3058fc__0[2U] = ((6U == (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                         ? ((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])
                                             ? 0U : 1U)
                                         : ((4U == 
                                             (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))
                                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                 ? 1U
                                                 : 0U)
                                             : ((1U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                                 ? 
                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                                  ? 1U
                                                  : 0U))));
            riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
                = __Vtemp_h1c230895__0[1U];
        }
    }
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[2U] 
        = __Vtemp_hab3058fc__0[2U];
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_2 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT____VdfgTmp_h59dedee5__0 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_7 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0)) 
           | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1)));
    if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[3U];
    } else if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[3U];
    } else if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[3U];
    } else if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[3U];
    } else if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[3U];
    } else if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[3U];
    } else if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[3U];
    } else if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[3U];
    } else if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[3U];
    } else if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[3U];
    } else if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[3U];
    } else if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[3U];
    } else if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[3U];
    } else if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[3U];
    } else if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[3U];
    } else if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp_hc70c65b4__0[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[0U];
        __Vtemp_hc70c65b4__0[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[1U];
        __Vtemp_hc70c65b4__0[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[2U];
        __Vtemp_hc70c65b4__0[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[3U];
        __Vtemp_heb9a1b0c__0[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[0U];
        __Vtemp_heb9a1b0c__0[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[1U];
        __Vtemp_heb9a1b0c__0[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[2U];
        __Vtemp_heb9a1b0c__0[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[3U];
        __Vtemp_h468e92f4__0[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[0U];
        __Vtemp_h468e92f4__0[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[1U];
        __Vtemp_h468e92f4__0[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[2U];
        __Vtemp_h468e92f4__0[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[3U];
        __Vtemp_h88a80d83__0[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[0U];
        __Vtemp_h88a80d83__0[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[1U];
        __Vtemp_h88a80d83__0[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[2U];
        __Vtemp_h88a80d83__0[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[3U];
    } else {
        __Vtemp_hc70c65b4__0[0U] = riscv_soc__DOT__sram0__DOT___GEN_42[0U];
        __Vtemp_hc70c65b4__0[1U] = riscv_soc__DOT__sram0__DOT___GEN_42[1U];
        __Vtemp_hc70c65b4__0[2U] = riscv_soc__DOT__sram0__DOT___GEN_42[2U];
        __Vtemp_hc70c65b4__0[3U] = riscv_soc__DOT__sram0__DOT___GEN_42[3U];
        __Vtemp_heb9a1b0c__0[0U] = riscv_soc__DOT__sram1__DOT___GEN_42[0U];
        __Vtemp_heb9a1b0c__0[1U] = riscv_soc__DOT__sram1__DOT___GEN_42[1U];
        __Vtemp_heb9a1b0c__0[2U] = riscv_soc__DOT__sram1__DOT___GEN_42[2U];
        __Vtemp_heb9a1b0c__0[3U] = riscv_soc__DOT__sram1__DOT___GEN_42[3U];
        __Vtemp_h468e92f4__0[0U] = riscv_soc__DOT__sram2__DOT___GEN_42[0U];
        __Vtemp_h468e92f4__0[1U] = riscv_soc__DOT__sram2__DOT___GEN_42[1U];
        __Vtemp_h468e92f4__0[2U] = riscv_soc__DOT__sram2__DOT___GEN_42[2U];
        __Vtemp_h468e92f4__0[3U] = riscv_soc__DOT__sram2__DOT___GEN_42[3U];
        __Vtemp_h88a80d83__0[0U] = riscv_soc__DOT__sram3__DOT___GEN_42[0U];
        __Vtemp_h88a80d83__0[1U] = riscv_soc__DOT__sram3__DOT___GEN_42[1U];
        __Vtemp_h88a80d83__0[2U] = riscv_soc__DOT__sram3__DOT___GEN_42[2U];
        __Vtemp_h88a80d83__0[3U] = riscv_soc__DOT__sram3__DOT___GEN_42[3U];
    }
    if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[0U];
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[1U];
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[2U];
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[3U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[0U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[1U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[2U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[3U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[0U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[1U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[2U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[3U];
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[0U];
    } else if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[0U];
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[1U];
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[2U];
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[3U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[0U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[1U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[2U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[3U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[0U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[1U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[2U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[3U];
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[0U];
    } else if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[0U];
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[1U];
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[2U];
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[3U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[0U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[1U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[2U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[3U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[0U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[1U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[2U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[3U];
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[0U];
    } else {
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[0U] 
            = __Vtemp_hc70c65b4__0[0U];
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[1U] 
            = __Vtemp_hc70c65b4__0[1U];
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[2U] 
            = __Vtemp_hc70c65b4__0[2U];
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[3U] 
            = __Vtemp_hc70c65b4__0[3U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[0U] 
            = __Vtemp_heb9a1b0c__0[0U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[1U] 
            = __Vtemp_heb9a1b0c__0[1U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[2U] 
            = __Vtemp_heb9a1b0c__0[2U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[3U] 
            = __Vtemp_heb9a1b0c__0[3U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[0U] 
            = __Vtemp_h468e92f4__0[0U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[1U] 
            = __Vtemp_h468e92f4__0[1U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[2U] 
            = __Vtemp_h468e92f4__0[2U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[3U] 
            = __Vtemp_h468e92f4__0[3U];
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[0U] 
            = __Vtemp_h88a80d83__0[0U];
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_18 = 
        (0xfU & ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)
                  ? ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                      ? ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen))
                          ? (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)
                          : ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen) 
                             - (IData)(1U))) : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen))
                  : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)));
    if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[1U];
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[2U];
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[3U];
    } else if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[1U];
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[2U];
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[3U];
    } else if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[1U];
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[2U];
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[3U];
    } else {
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[1U] 
            = __Vtemp_h88a80d83__0[1U];
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[2U] 
            = __Vtemp_h88a80d83__0[2U];
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[3U] 
            = __Vtemp_h88a80d83__0[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_23 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cpu_valid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
    if ((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                  >> 0x1fU))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                ? vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata
                : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata);
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr 
        = (0x3fU & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                     ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                >> 4U)) : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[3U];
    } else if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[3U];
    } else if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[3U];
    } else if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[3U];
    } else if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[3U];
    } else if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[3U];
    } else if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[3U];
    } else if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[3U];
    } else if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[3U];
    } else if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[3U];
    } else if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[3U];
    } else if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[3U];
    } else if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[3U];
    } else if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[3U];
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[3U];
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[3U];
    } else {
        __Vtemp_h30c50ef9__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[0U];
        __Vtemp_h30c50ef9__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[1U];
        __Vtemp_h30c50ef9__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[2U];
        __Vtemp_h30c50ef9__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[3U];
        __Vtemp_h4b49a7b8__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[0U];
        __Vtemp_h4b49a7b8__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[1U];
        __Vtemp_h4b49a7b8__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[2U];
        __Vtemp_h4b49a7b8__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[3U];
        __Vtemp_h38607205__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[0U];
        __Vtemp_h38607205__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[1U];
        __Vtemp_h38607205__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[2U];
        __Vtemp_h38607205__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[3U];
        __Vtemp_h549d89b2__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[0U];
        __Vtemp_h549d89b2__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[1U];
        __Vtemp_h549d89b2__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[2U];
        __Vtemp_h549d89b2__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[3U];
    }
    if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram5__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[0U];
        riscv_soc__DOT__sram5__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[1U];
        riscv_soc__DOT__sram5__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[2U];
        riscv_soc__DOT__sram5__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[3U];
        riscv_soc__DOT__sram7__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[0U];
        riscv_soc__DOT__sram7__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[1U];
        riscv_soc__DOT__sram7__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[2U];
        riscv_soc__DOT__sram7__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[3U];
        riscv_soc__DOT__sram4__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[0U];
        riscv_soc__DOT__sram4__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[1U];
        riscv_soc__DOT__sram4__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[2U];
        riscv_soc__DOT__sram4__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[3U];
        riscv_soc__DOT__sram6__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[0U];
        riscv_soc__DOT__sram6__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[1U];
        riscv_soc__DOT__sram6__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[2U];
        riscv_soc__DOT__sram6__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[3U];
    } else if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram5__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[0U];
        riscv_soc__DOT__sram5__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[1U];
        riscv_soc__DOT__sram5__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[2U];
        riscv_soc__DOT__sram5__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[3U];
        riscv_soc__DOT__sram7__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[0U];
        riscv_soc__DOT__sram7__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[1U];
        riscv_soc__DOT__sram7__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[2U];
        riscv_soc__DOT__sram7__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[3U];
        riscv_soc__DOT__sram4__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[0U];
        riscv_soc__DOT__sram4__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[1U];
        riscv_soc__DOT__sram4__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[2U];
        riscv_soc__DOT__sram4__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[3U];
        riscv_soc__DOT__sram6__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[0U];
        riscv_soc__DOT__sram6__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[1U];
        riscv_soc__DOT__sram6__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[2U];
        riscv_soc__DOT__sram6__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[3U];
    } else if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram5__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[0U];
        riscv_soc__DOT__sram5__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[1U];
        riscv_soc__DOT__sram5__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[2U];
        riscv_soc__DOT__sram5__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[3U];
        riscv_soc__DOT__sram7__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[0U];
        riscv_soc__DOT__sram7__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[1U];
        riscv_soc__DOT__sram7__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[2U];
        riscv_soc__DOT__sram7__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[3U];
        riscv_soc__DOT__sram4__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[0U];
        riscv_soc__DOT__sram4__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[1U];
        riscv_soc__DOT__sram4__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[2U];
        riscv_soc__DOT__sram4__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[3U];
        riscv_soc__DOT__sram6__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[0U];
        riscv_soc__DOT__sram6__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[1U];
        riscv_soc__DOT__sram6__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[2U];
        riscv_soc__DOT__sram6__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[3U];
    } else if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram5__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[0U];
        riscv_soc__DOT__sram5__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[1U];
        riscv_soc__DOT__sram5__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[2U];
        riscv_soc__DOT__sram5__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[3U];
        riscv_soc__DOT__sram7__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[0U];
        riscv_soc__DOT__sram7__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[1U];
        riscv_soc__DOT__sram7__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[2U];
        riscv_soc__DOT__sram7__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[3U];
        riscv_soc__DOT__sram4__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[0U];
        riscv_soc__DOT__sram4__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[1U];
        riscv_soc__DOT__sram4__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[2U];
        riscv_soc__DOT__sram4__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[3U];
        riscv_soc__DOT__sram6__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[0U];
        riscv_soc__DOT__sram6__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[1U];
        riscv_soc__DOT__sram6__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[2U];
        riscv_soc__DOT__sram6__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[3U];
    } else if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram5__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[0U];
        riscv_soc__DOT__sram5__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[1U];
        riscv_soc__DOT__sram5__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[2U];
        riscv_soc__DOT__sram5__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[3U];
        riscv_soc__DOT__sram7__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[0U];
        riscv_soc__DOT__sram7__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[1U];
        riscv_soc__DOT__sram7__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[2U];
        riscv_soc__DOT__sram7__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[3U];
        riscv_soc__DOT__sram4__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[0U];
        riscv_soc__DOT__sram4__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[1U];
        riscv_soc__DOT__sram4__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[2U];
        riscv_soc__DOT__sram4__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[3U];
        riscv_soc__DOT__sram6__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[0U];
        riscv_soc__DOT__sram6__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[1U];
        riscv_soc__DOT__sram6__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[2U];
        riscv_soc__DOT__sram6__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[3U];
    } else {
        riscv_soc__DOT__sram5__DOT___GEN_21[0U] = __Vtemp_h30c50ef9__0[0U];
        riscv_soc__DOT__sram5__DOT___GEN_21[1U] = __Vtemp_h30c50ef9__0[1U];
        riscv_soc__DOT__sram5__DOT___GEN_21[2U] = __Vtemp_h30c50ef9__0[2U];
        riscv_soc__DOT__sram5__DOT___GEN_21[3U] = __Vtemp_h30c50ef9__0[3U];
        riscv_soc__DOT__sram7__DOT___GEN_21[0U] = __Vtemp_h4b49a7b8__0[0U];
        riscv_soc__DOT__sram7__DOT___GEN_21[1U] = __Vtemp_h4b49a7b8__0[1U];
        riscv_soc__DOT__sram7__DOT___GEN_21[2U] = __Vtemp_h4b49a7b8__0[2U];
        riscv_soc__DOT__sram7__DOT___GEN_21[3U] = __Vtemp_h4b49a7b8__0[3U];
        riscv_soc__DOT__sram4__DOT___GEN_21[0U] = __Vtemp_h38607205__0[0U];
        riscv_soc__DOT__sram4__DOT___GEN_21[1U] = __Vtemp_h38607205__0[1U];
        riscv_soc__DOT__sram4__DOT___GEN_21[2U] = __Vtemp_h38607205__0[2U];
        riscv_soc__DOT__sram4__DOT___GEN_21[3U] = __Vtemp_h38607205__0[3U];
        riscv_soc__DOT__sram6__DOT___GEN_21[0U] = __Vtemp_h549d89b2__0[0U];
        riscv_soc__DOT__sram6__DOT___GEN_21[1U] = __Vtemp_h549d89b2__0[1U];
        riscv_soc__DOT__sram6__DOT___GEN_21[2U] = __Vtemp_h549d89b2__0[2U];
        riscv_soc__DOT__sram6__DOT___GEN_21[3U] = __Vtemp_h549d89b2__0[3U];
    }
    if ((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                      >> 2U)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[0U] 
            = ((IData)((0x8000000000000000ULL | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                 >> 1U))) 
               << 1U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[1U] 
            = (((IData)((0x8000000000000000ULL | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                  >> 1U))) 
                >> 0x1fU) | ((IData)(((0x8000000000000000ULL 
                                       | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                          >> 1U)) >> 0x20U)) 
                             << 1U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U] 
            = ((IData)(((0x8000000000000000ULL | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                  >> 1U)) 
                        >> 0x20U)) >> 0x1fU);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[0U] 
            = riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[1U] 
            = riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U] 
            = riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[2U];
    }
    if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
            = (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc 
            = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[0U])));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
            = ((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U))) ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra)
                                          ? VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                          : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                               ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                               : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                             >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
                : ((1U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                 >> 2U))) ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                             << (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                    : ((4U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                     >> 2U))) ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                                 ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                        : ((6U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U))) ? 
                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                            | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                            : ((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                : ((3U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                    ? (QData)((IData)(
                                                      (1U 
                                                       & (~ 
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))))
                                    : ((2U == (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                        ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2))
                                        : (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[0U]))))))))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc = 0ULL;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_7) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_13 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_10 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit)
                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                  >> 3U))) ? (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))
                : ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                  >> 3U))) ? (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U])))));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_21 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT____VdfgTmp_h59dedee5__0;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_13 
            = (0xfffffffffffffff0ULL & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_10 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_21 = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
        = ((7U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
            ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata 
               >> 0x38U) : ((6U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                             ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata 
                                >> 0x30U) : ((5U == 
                                              (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                                              ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata 
                                                 >> 0x28U)
                                              : ((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                                                  ? 
                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata 
                                                  >> 0x20U)
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                                                   ? 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata 
                                                   >> 0x18U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                                                    ? 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata 
                                                    >> 0x10U)
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                                                     ? 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata 
                                                     >> 8U)
                                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata)))))));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_6 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_5 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_6 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid));
    if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[3U];
    } else if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[3U];
    } else if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[3U];
    } else if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[3U];
    } else if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[3U];
    } else if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[3U];
    } else if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[3U];
    } else if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[3U];
    } else if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[3U];
    } else if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[3U];
    } else if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[3U];
    } else if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[3U];
    } else if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[3U];
    } else if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[3U];
    } else if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[3U];
    } else if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h7eb1bf61__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[0U];
        __Vtemp_h7eb1bf61__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[1U];
        __Vtemp_h7eb1bf61__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[2U];
        __Vtemp_h7eb1bf61__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[3U];
        __Vtemp_hdcb49fd9__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[0U];
        __Vtemp_hdcb49fd9__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[1U];
        __Vtemp_hdcb49fd9__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[2U];
        __Vtemp_hdcb49fd9__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[3U];
        __Vtemp_h07182d46__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[0U];
        __Vtemp_h07182d46__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[1U];
        __Vtemp_h07182d46__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[2U];
        __Vtemp_h07182d46__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[3U];
        __Vtemp_hc1d5babd__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[0U];
        __Vtemp_hc1d5babd__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[1U];
        __Vtemp_hc1d5babd__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[2U];
        __Vtemp_hc1d5babd__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[3U];
    } else {
        __Vtemp_h7eb1bf61__0[0U] = riscv_soc__DOT__sram5__DOT___GEN_21[0U];
        __Vtemp_h7eb1bf61__0[1U] = riscv_soc__DOT__sram5__DOT___GEN_21[1U];
        __Vtemp_h7eb1bf61__0[2U] = riscv_soc__DOT__sram5__DOT___GEN_21[2U];
        __Vtemp_h7eb1bf61__0[3U] = riscv_soc__DOT__sram5__DOT___GEN_21[3U];
        __Vtemp_hdcb49fd9__0[0U] = riscv_soc__DOT__sram7__DOT___GEN_21[0U];
        __Vtemp_hdcb49fd9__0[1U] = riscv_soc__DOT__sram7__DOT___GEN_21[1U];
        __Vtemp_hdcb49fd9__0[2U] = riscv_soc__DOT__sram7__DOT___GEN_21[2U];
        __Vtemp_hdcb49fd9__0[3U] = riscv_soc__DOT__sram7__DOT___GEN_21[3U];
        __Vtemp_h07182d46__0[0U] = riscv_soc__DOT__sram4__DOT___GEN_21[0U];
        __Vtemp_h07182d46__0[1U] = riscv_soc__DOT__sram4__DOT___GEN_21[1U];
        __Vtemp_h07182d46__0[2U] = riscv_soc__DOT__sram4__DOT___GEN_21[2U];
        __Vtemp_h07182d46__0[3U] = riscv_soc__DOT__sram4__DOT___GEN_21[3U];
        __Vtemp_hc1d5babd__0[0U] = riscv_soc__DOT__sram6__DOT___GEN_21[0U];
        __Vtemp_hc1d5babd__0[1U] = riscv_soc__DOT__sram6__DOT___GEN_21[1U];
        __Vtemp_hc1d5babd__0[2U] = riscv_soc__DOT__sram6__DOT___GEN_21[2U];
        __Vtemp_hc1d5babd__0[3U] = riscv_soc__DOT__sram6__DOT___GEN_21[3U];
    }
    if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram5__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[0U];
        riscv_soc__DOT__sram5__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[1U];
        riscv_soc__DOT__sram5__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[2U];
        riscv_soc__DOT__sram5__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[3U];
        riscv_soc__DOT__sram7__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[0U];
        riscv_soc__DOT__sram7__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[1U];
        riscv_soc__DOT__sram7__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[2U];
        riscv_soc__DOT__sram7__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[3U];
        riscv_soc__DOT__sram4__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[0U];
        riscv_soc__DOT__sram4__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[1U];
        riscv_soc__DOT__sram4__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[2U];
        riscv_soc__DOT__sram4__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[3U];
        riscv_soc__DOT__sram6__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[0U];
        riscv_soc__DOT__sram6__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[1U];
        riscv_soc__DOT__sram6__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[2U];
        riscv_soc__DOT__sram6__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[3U];
    } else if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram5__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[0U];
        riscv_soc__DOT__sram5__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[1U];
        riscv_soc__DOT__sram5__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[2U];
        riscv_soc__DOT__sram5__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[3U];
        riscv_soc__DOT__sram7__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[0U];
        riscv_soc__DOT__sram7__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[1U];
        riscv_soc__DOT__sram7__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[2U];
        riscv_soc__DOT__sram7__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[3U];
        riscv_soc__DOT__sram4__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[0U];
        riscv_soc__DOT__sram4__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[1U];
        riscv_soc__DOT__sram4__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[2U];
        riscv_soc__DOT__sram4__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[3U];
        riscv_soc__DOT__sram6__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[0U];
        riscv_soc__DOT__sram6__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[1U];
        riscv_soc__DOT__sram6__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[2U];
        riscv_soc__DOT__sram6__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[3U];
    } else if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram5__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[0U];
        riscv_soc__DOT__sram5__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[1U];
        riscv_soc__DOT__sram5__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[2U];
        riscv_soc__DOT__sram5__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[3U];
        riscv_soc__DOT__sram7__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[0U];
        riscv_soc__DOT__sram7__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[1U];
        riscv_soc__DOT__sram7__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[2U];
        riscv_soc__DOT__sram7__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[3U];
        riscv_soc__DOT__sram4__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[0U];
        riscv_soc__DOT__sram4__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[1U];
        riscv_soc__DOT__sram4__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[2U];
        riscv_soc__DOT__sram4__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[3U];
        riscv_soc__DOT__sram6__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[0U];
        riscv_soc__DOT__sram6__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[1U];
        riscv_soc__DOT__sram6__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[2U];
        riscv_soc__DOT__sram6__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[3U];
    } else if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram5__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[0U];
        riscv_soc__DOT__sram5__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[1U];
        riscv_soc__DOT__sram5__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[2U];
        riscv_soc__DOT__sram5__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[3U];
        riscv_soc__DOT__sram7__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[0U];
        riscv_soc__DOT__sram7__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[1U];
        riscv_soc__DOT__sram7__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[2U];
        riscv_soc__DOT__sram7__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[3U];
        riscv_soc__DOT__sram4__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[0U];
        riscv_soc__DOT__sram4__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[1U];
        riscv_soc__DOT__sram4__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[2U];
        riscv_soc__DOT__sram4__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[3U];
        riscv_soc__DOT__sram6__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[0U];
        riscv_soc__DOT__sram6__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[1U];
        riscv_soc__DOT__sram6__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[2U];
        riscv_soc__DOT__sram6__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[3U];
    } else if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram5__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[0U];
        riscv_soc__DOT__sram5__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[1U];
        riscv_soc__DOT__sram5__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[2U];
        riscv_soc__DOT__sram5__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[3U];
        riscv_soc__DOT__sram7__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[0U];
        riscv_soc__DOT__sram7__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[1U];
        riscv_soc__DOT__sram7__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[2U];
        riscv_soc__DOT__sram7__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[3U];
        riscv_soc__DOT__sram4__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[0U];
        riscv_soc__DOT__sram4__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[1U];
        riscv_soc__DOT__sram4__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[2U];
        riscv_soc__DOT__sram4__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[3U];
        riscv_soc__DOT__sram6__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[0U];
        riscv_soc__DOT__sram6__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[1U];
        riscv_soc__DOT__sram6__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[2U];
        riscv_soc__DOT__sram6__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[3U];
    } else {
        riscv_soc__DOT__sram5__DOT___GEN_42[0U] = __Vtemp_h7eb1bf61__0[0U];
        riscv_soc__DOT__sram5__DOT___GEN_42[1U] = __Vtemp_h7eb1bf61__0[1U];
        riscv_soc__DOT__sram5__DOT___GEN_42[2U] = __Vtemp_h7eb1bf61__0[2U];
        riscv_soc__DOT__sram5__DOT___GEN_42[3U] = __Vtemp_h7eb1bf61__0[3U];
        riscv_soc__DOT__sram7__DOT___GEN_42[0U] = __Vtemp_hdcb49fd9__0[0U];
        riscv_soc__DOT__sram7__DOT___GEN_42[1U] = __Vtemp_hdcb49fd9__0[1U];
        riscv_soc__DOT__sram7__DOT___GEN_42[2U] = __Vtemp_hdcb49fd9__0[2U];
        riscv_soc__DOT__sram7__DOT___GEN_42[3U] = __Vtemp_hdcb49fd9__0[3U];
        riscv_soc__DOT__sram4__DOT___GEN_42[0U] = __Vtemp_h07182d46__0[0U];
        riscv_soc__DOT__sram4__DOT___GEN_42[1U] = __Vtemp_h07182d46__0[1U];
        riscv_soc__DOT__sram4__DOT___GEN_42[2U] = __Vtemp_h07182d46__0[2U];
        riscv_soc__DOT__sram4__DOT___GEN_42[3U] = __Vtemp_h07182d46__0[3U];
        riscv_soc__DOT__sram6__DOT___GEN_42[0U] = __Vtemp_hc1d5babd__0[0U];
        riscv_soc__DOT__sram6__DOT___GEN_42[1U] = __Vtemp_hc1d5babd__0[1U];
        riscv_soc__DOT__sram6__DOT___GEN_42[2U] = __Vtemp_hc1d5babd__0[2U];
        riscv_soc__DOT__sram6__DOT___GEN_42[3U] = __Vtemp_hc1d5babd__0[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_data_result 
        = ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
            ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))
            : ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                ? (((QData)((IData)(((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))
                : ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                    ? (QData)((IData)((0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))))
                    : ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                        ? ((((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                            >> 0xfU)))
                              ? 0xffffffffffffULL : 0ULL) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))))
                        : ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                            ? (QData)((IData)((0xffU 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))))
                            : ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                ? ((((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                    >> 7U)))
                                      ? 0xffffffffffffffULL
                                      : 0ULL) << 8U) 
                                   | (QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))))
                                : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data
                                    : 0ULL)))))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1)
                         ? 1U : 2U)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_10 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid)
            ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_6)
                     ? 3U : 0U));
    if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[3U];
    } else if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[3U];
    } else if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[3U];
    } else if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[3U];
    } else if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[3U];
    } else if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[3U];
    } else if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[3U];
    } else if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[3U];
    } else if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[3U];
    } else if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[3U];
    } else if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[3U];
    } else if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[3U];
    } else if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[3U];
    } else if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[3U];
    } else if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[3U];
    } else if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp_h42f2f001__0[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[0U];
        __Vtemp_h42f2f001__0[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[1U];
        __Vtemp_h42f2f001__0[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[2U];
        __Vtemp_h42f2f001__0[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[3U];
        __Vtemp_h06583cdc__0[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[0U];
        __Vtemp_h06583cdc__0[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[1U];
        __Vtemp_h06583cdc__0[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[2U];
        __Vtemp_h06583cdc__0[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[3U];
        __Vtemp_h24d93bf5__0[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[0U];
        __Vtemp_h24d93bf5__0[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[1U];
        __Vtemp_h24d93bf5__0[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[2U];
        __Vtemp_h24d93bf5__0[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[3U];
        __Vtemp_h95196871__0[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[0U];
        __Vtemp_h95196871__0[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[1U];
        __Vtemp_h95196871__0[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[2U];
        __Vtemp_h95196871__0[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[3U];
    } else {
        __Vtemp_h42f2f001__0[0U] = riscv_soc__DOT__sram5__DOT___GEN_42[0U];
        __Vtemp_h42f2f001__0[1U] = riscv_soc__DOT__sram5__DOT___GEN_42[1U];
        __Vtemp_h42f2f001__0[2U] = riscv_soc__DOT__sram5__DOT___GEN_42[2U];
        __Vtemp_h42f2f001__0[3U] = riscv_soc__DOT__sram5__DOT___GEN_42[3U];
        __Vtemp_h06583cdc__0[0U] = riscv_soc__DOT__sram7__DOT___GEN_42[0U];
        __Vtemp_h06583cdc__0[1U] = riscv_soc__DOT__sram7__DOT___GEN_42[1U];
        __Vtemp_h06583cdc__0[2U] = riscv_soc__DOT__sram7__DOT___GEN_42[2U];
        __Vtemp_h06583cdc__0[3U] = riscv_soc__DOT__sram7__DOT___GEN_42[3U];
        __Vtemp_h24d93bf5__0[0U] = riscv_soc__DOT__sram4__DOT___GEN_42[0U];
        __Vtemp_h24d93bf5__0[1U] = riscv_soc__DOT__sram4__DOT___GEN_42[1U];
        __Vtemp_h24d93bf5__0[2U] = riscv_soc__DOT__sram4__DOT___GEN_42[2U];
        __Vtemp_h24d93bf5__0[3U] = riscv_soc__DOT__sram4__DOT___GEN_42[3U];
        __Vtemp_h95196871__0[0U] = riscv_soc__DOT__sram6__DOT___GEN_42[0U];
        __Vtemp_h95196871__0[1U] = riscv_soc__DOT__sram6__DOT___GEN_42[1U];
        __Vtemp_h95196871__0[2U] = riscv_soc__DOT__sram6__DOT___GEN_42[2U];
        __Vtemp_h95196871__0[3U] = riscv_soc__DOT__sram6__DOT___GEN_42[3U];
    }
    if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[0U];
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[1U];
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[2U];
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[3U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[0U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[1U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[2U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[3U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[0U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[1U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[2U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[3U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[0U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[1U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[2U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[3U];
    } else if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[0U];
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[1U];
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[2U];
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[3U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[0U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[1U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[2U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[3U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[0U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[1U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[2U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[3U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[0U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[1U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[2U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[3U];
    } else if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[0U];
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[1U];
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[2U];
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[3U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[0U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[1U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[2U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[3U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[0U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[1U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[2U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[3U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[0U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[1U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[2U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[3U];
    } else {
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[0U] 
            = __Vtemp_h42f2f001__0[0U];
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[1U] 
            = __Vtemp_h42f2f001__0[1U];
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[2U] 
            = __Vtemp_h42f2f001__0[2U];
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[3U] 
            = __Vtemp_h42f2f001__0[3U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[0U] 
            = __Vtemp_h06583cdc__0[0U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[1U] 
            = __Vtemp_h06583cdc__0[1U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[2U] 
            = __Vtemp_h06583cdc__0[2U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[3U] 
            = __Vtemp_h06583cdc__0[3U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[0U] 
            = __Vtemp_h24d93bf5__0[0U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[1U] 
            = __Vtemp_h24d93bf5__0[1U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[2U] 
            = __Vtemp_h24d93bf5__0[2U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[3U] 
            = __Vtemp_h24d93bf5__0[3U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[0U] 
            = __Vtemp_h95196871__0[0U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[1U] 
            = __Vtemp_h95196871__0[1U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[2U] 
            = __Vtemp_h95196871__0[2U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[3U] 
            = __Vtemp_h95196871__0[3U];
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict 
            = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc) 
                   & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc 
                      != ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                           ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                               ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3
                               : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2
                                   : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1
                                       : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0)))
                           : 0ULL)))) | (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)) 
                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc)) 
                                         | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc)) 
                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre))));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict = 0U;
    }
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast 
            = (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen));
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1));
    }
    riscv_soc__DOT__core__DOT__d_cache__DOT___T_14 
        = (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid 
        = (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
            & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid))) 
           | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid) 
                 & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok)) 
                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w)))));
    riscv_soc__DOT__core__DOT__d_cache__DOT___T_17 
        = (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen 
        = ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_10))));
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U] 
        = (riscv_soc__DOT__sram4__DOT___sram_T[0U] 
           | ((~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
              & ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                  ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[0U]
                  : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                      ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[0U]
                      : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[0U]))));
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U] 
        = (riscv_soc__DOT__sram4__DOT___sram_T[1U] 
           | ((~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
              & ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                  ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[1U]
                  : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                      ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[1U]
                      : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[1U]))));
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U] 
        = (riscv_soc__DOT__sram4__DOT___sram_T[2U] 
           | ((~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
              & ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                  ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[2U]
                  : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                      ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[2U]
                      : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[2U]))));
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U] 
        = (riscv_soc__DOT__sram4__DOT___sram_T[3U] 
           | ((~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
              & ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                  ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[3U]
                  : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                      ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[3U]
                      : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[3U]))));
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U] 
        = (riscv_soc__DOT__sram4__DOT___sram_T[0U] 
           | ((~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
              & ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                  ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[0U]
                  : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                      ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[0U]
                      : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[0U]))));
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U] 
        = (riscv_soc__DOT__sram4__DOT___sram_T[1U] 
           | ((~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
              & ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                  ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[1U]
                  : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                      ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[1U]
                      : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[1U]))));
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U] 
        = (riscv_soc__DOT__sram4__DOT___sram_T[2U] 
           | ((~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
              & ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                  ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[2U]
                  : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                      ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[2U]
                      : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[2U]))));
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U] 
        = (riscv_soc__DOT__sram4__DOT___sram_T[3U] 
           | ((~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
              & ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                  ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[3U]
                  : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                      ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[3U]
                      : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[3U]))));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6 = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid) 
                                                  & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
    if (riscv_soc__DOT__core__DOT__d_cache__DOT___T_14) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_93 
                = (3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt));
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_94 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata;
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_93 
                = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt) 
                         - (IData)(1U)));
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_94 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag)
                    ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U])))
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U]))));
        }
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_91 
            = ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt)) 
               & ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast)));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_92 
            = ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_93 
            = (3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_91 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_92 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_94 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata;
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5 = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid) 
                                                  & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_96 
        = ((~ (IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___T_17)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
    riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95 
        = ((IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___T_17) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_ready 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid;
    } else {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))) {
            vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr;
            vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid 
                = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))) {
            vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
            vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid 
                = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid));
        } else if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))) {
            vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr;
            vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid 
                = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr = 0ULL;
            vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid = 0U;
        }
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_ready = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready 
        = (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)) 
           | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
              & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid 
        = ((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                     >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)
            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_33 = 
        ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5) 
         | ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6)
             ? ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast)) 
                & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w))
             : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w)));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_34 = 
        ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5)) 
         & ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6)
             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast) 
                | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready))
             : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready)));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_35 = 
        ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5) 
         | ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6)
             ? ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast)) 
                & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))
             : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid) 
           & ((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                        >> 0x1fU)) ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))
               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1 = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid) 
                                                  & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_20 = 
        ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)
          ? ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)
              ? ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                  ? ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)) 
                     | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready))
                  : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready))
              : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready))
          : ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1)) 
             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_33 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_bits_rlast) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_32 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_bits_rlast)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_40 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_bits_rlast) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_bits_rlast) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[0U] 
            = (IData)((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U]))));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[1U] 
            = (IData)(((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U]))) 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[2U] 
            = (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[3U] 
            = (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_34 
            = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                              >> 3U))) ? vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata
                : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U]))));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[1U] 
            = (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_34 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata;
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_54 
        = (1U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))
                  ? ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_21))
                  : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))
                      ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_bus_r_bits_rlast) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))
                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_23 
        = (3U & (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)))
                  ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                     - (IData)(1U)) : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                                       - ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                                          & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w)) 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)))))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T 
        = (((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                      >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)
             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    riscv_soc__DOT__core__DOT__d_cache__DOT___T_13 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
    riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_h1e8875ce__0) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_haa56ce0f__0) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                    ? ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdb124cd4__0)) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish))
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156 = 0U;
        }
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160 
            = riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156 
            = ((IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___T_13)
                ? (IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_32 
        = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                  ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                      ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready))
                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready))
                  : (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid))));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_1 = 
        ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1) 
         | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_2 = 
        ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1) 
         | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_4 = 
        ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1)
          ? ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
             | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)))
          : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size 
        = ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
           & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0_io_flush)) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid)));
    if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_43 
            = ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_43 
            = ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    }
    if (riscv_soc__DOT__core__DOT__d_cache__DOT___T_13) {
        if (vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_80 = 0xffffU;
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_83 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata;
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[0U] 
                    = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[0U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
                       | ((~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
                          & riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U]));
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[1U] 
                    = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
                       | ((~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
                          & riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U]));
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[2U] 
                    = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
                       | ((~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
                          & riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U]));
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[3U] 
                    = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
                       | ((~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
                          & riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U]));
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_83 
                    = ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                        ? vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U]))));
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[0U] 
                    = riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[1U] 
                    = riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[2U] 
                    = riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[3U] 
                    = riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U];
            }
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_80 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_83 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[1U] 
                = (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                           >> 0x20U));
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[2U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[3U] = 0U;
        }
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_79 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_80 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_79 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_83 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U];
    }
    riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdaab1c9d__0 
        = ((IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76) 
           & (IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__result_size 
        = (7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                  + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                 - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_98 
        = ((IData)(riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdaab1c9d__0)
            ? 3U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_99 
        = ((IData)(riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdaab1c9d__0) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_97 
        = ((IData)(riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdaab1c9d__0) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
}
