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

void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_inst_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a);
void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_pc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a);
void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_commit_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a);
void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_inst_counter_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a);
void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_irq__Vdpioc2_TOP(const QData/*63:0*/ &a);
void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_peripheral__Vdpioc2_TOP(const QData/*63:0*/ &a);
void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mstatus_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a);
void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mcause_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a);
void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mtvec_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a);
void Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mepc_ptr__Vdpioc2_TOP(const QData/*63:0*/ &a);

VL_ATTR_COLD void Vriscv_soc___024root___eval_initial__TOP(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_initial__TOP\n"); );
    // Body
    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_gpr_ptr__Vdpioc2_TOP(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file);
    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_inst_ptr__Vdpioc2_TOP(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst);
    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_pc_ptr__Vdpioc2_TOP(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc);
    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_commit_ptr__Vdpioc2_TOP(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit);
    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_inst_counter_ptr__Vdpioc2_TOP(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter);
    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_irq__Vdpioc2_TOP(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq);
    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__set_difftest_peripheral__Vdpioc2_TOP(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral);
    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mstatus_ptr__Vdpioc2_TOP(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus);
    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mcause_ptr__Vdpioc2_TOP(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause);
    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mtvec_ptr__Vdpioc2_TOP(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec);
    Vriscv_soc___024root____Vdpiimwrap_riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__set_difftest_mepc_ptr__Vdpioc2_TOP(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc);
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
                VL_FATAL_MT("/home/xingk/ysyx-workbench/npc/verilog/src/riscv_soc.v", 8, "", "Settle region did not converge.");
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
    VlWide<3>/*95:0*/ __Vtemp_h651a80f2__0;
    VlWide<3>/*95:0*/ __Vtemp_hbf583208__0;
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
    VlWide<3>/*95:0*/ __Vtemp_h61799857__0;
    VlWide<3>/*95:0*/ __Vtemp_h9e5fa0df__1;
    VlWide<3>/*95:0*/ __Vtemp_h9eba89b7__0;
    VlWide<3>/*95:0*/ __Vtemp_h624b2931__1;
    VlWide<3>/*95:0*/ __Vtemp_h6abef518__0;
    VlWide<3>/*95:0*/ __Vtemp_h624b2931__2;
    VlWide<3>/*95:0*/ __Vtemp_hf8d20176__0;
    VlWide<4>/*127:0*/ __Vtemp_h2590d376__0;
    VlWide<4>/*127:0*/ __Vtemp_h76f34b8e__0;
    VlWide<3>/*95:0*/ __Vtemp_hcc513de2__0;
    VlWide<3>/*95:0*/ __Vtemp_h9fe2811e__0;
    VlWide<3>/*95:0*/ __Vtemp_h2e2fd781__0;
    VlWide<3>/*95:0*/ __Vtemp_hd5a7caf0__0;
    VlWide<3>/*95:0*/ __Vtemp_h2ad0fb32__0;
    VlWide<3>/*95:0*/ __Vtemp_h1c230895__0;
    VlWide<3>/*95:0*/ __Vtemp_hf6ff0c49__0;
    VlWide<3>/*95:0*/ __Vtemp_hab3058fc__0;
    // Body
    vlSelf->riscv_soc__DOT__core_io_axi_bus_r_valid 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_w_valid 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_offset 
        = (0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T 
        = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_4 
        = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5 
        = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                 - (IData)(1U)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_tail_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail)));
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
    vlSelf->riscv_soc__DOT__sram4__DOT__bwen[0U] = 
        __Vtemp_hbf583208__0[0U];
    vlSelf->riscv_soc__DOT__sram4__DOT__bwen[1U] = 
        __Vtemp_hbf583208__0[1U];
    vlSelf->riscv_soc__DOT__sram4__DOT__bwen[2U] = 
        ((((0x800U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
            ? 0xffU : 0U) << 0x18U) | ((((0x400U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                          ? 0xffU : 0U) 
                                        << 0x10U) | 
                                       ((((0x200U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                           ? 0xffU : 0U) 
                                         << 8U) | (
                                                   (0x100U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                    ? 0xffU
                                                    : 0U))));
    vlSelf->riscv_soc__DOT__sram4__DOT__bwen[3U] = 
        ((((0x8000U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
            ? 0xffU : 0U) << 0x18U) | ((((0x4000U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                          ? 0xffU : 0U) 
                                        << 0x10U) | 
                                       ((((0x2000U 
                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                           ? 0xffU : 0U) 
                                         << 8U) | (
                                                   (0x1000U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                    ? 0xffU
                                                    : 0U))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_head_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_head_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_tail_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___inst_counter_T_1 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__lru_1_or_chose 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
           | (1ULL << (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                        >> 4U)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__lru_1_and_neg_chose 
        = ((~ (1ULL << (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                         >> 4U))))) 
           & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
           >> (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
           == (0x3fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
           == (0x3fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_0 
        = (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid 
                         >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_2 
        = (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid 
                         >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__LRU_2 
        = (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
                         >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__temp_addr 
        = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
            << 0xaU) | (QData)((IData)(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index) 
                                        << 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_dirty_0 
        = (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
                         >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_dirty_2 
        = (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
                         >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_pht_data 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                           >> 3U)))];
    vlSelf->riscv_soc__DOT__sram4__DOT__wen = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag)) 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__sram6__DOT__wen = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
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
    vlSelf->riscv_soc__DOT__core_io_axi_bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_valid 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid
        [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail];
    __Vtemp_h639dda77__0[0U] = 1U;
    __Vtemp_h639dda77__0[1U] = 0U;
    __Vtemp_h639dda77__0[2U] = 0U;
    __Vtemp_h3fef5ac1__0[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp_h3fef5ac1__0[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp_h3fef5ac1__0[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp_h346bf577__0, __Vtemp_h639dda77__0, __Vtemp_h3fef5ac1__0);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready)) 
           & (((0U != ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                       | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])) 
               & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                  ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                     >> 1U))) | ((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                           ^ __Vtemp_h346bf577__0[0U]) 
                                          | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                             ^ __Vtemp_h346bf577__0[1U])) 
                                         | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                            ^ (1U & 
                                               __Vtemp_h346bf577__0[2U])))) 
                                 | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]) 
                                            | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                           | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready 
        = (((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
           ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][0U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][1U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][2U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_3 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           | (2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst
        [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail];
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass0_val_T 
        = ((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                             >> 4U))) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra 
        = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                  >> 5U) | ((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                          >> 2U))) 
                            | (3U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U))))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid 
        = ((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                     >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm 
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index 
        = (0x3fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready)
                     ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr 
                                >> 4U)) : (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                   >> 4U))));
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_9[0U] 
        = __Vtemp_h4ccc697d__0[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_9[1U] 
        = __Vtemp_h4ccc697d__0[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_9[2U] 
        = __Vtemp_h4ccc697d__0[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_9[3U] 
        = __Vtemp_h4ccc697d__0[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_9[4U] 
        = (0xfU & __Vtemp_h4ccc697d__0[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid 
        = ((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U] 
            >> 0x1aU) & (((0xffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                                                     >> 2U))) 
                          == ((0xfffffffffffffeULL 
                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                  >> 8U)) | (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                        >> 2U))))))) 
                         & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT
                            [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 3U)))] 
                            >> 1U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? 4U : ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                     ? 2U : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                              ? 2U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_3))));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType 
        = ((0x1cU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                     >> 0xaU)) | ((2U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                         >> 4U)) | 
                                  (1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                         >> 3U))));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op 
        = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                  >> 4U)) | ((2U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                    >> 3U)) | (1U & 
                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                >> 2U))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_is_fence_i 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid) 
            | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en) 
               | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w)))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__fetch_io_flush 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
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
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[2U] 
                = (7U & 0U);
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_9[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_9[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[2U] 
                = (7U & (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_9[2U]));
        }
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
    if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc 
            = ((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U]))
                ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS
               [(3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))]
                : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[2U])) 
                    << 0x3eU) | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[1U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data[0U])) 
                                               >> 2U))));
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_0_T_2 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_0_T_2 
            = (4ULL + vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0);
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk 
        = ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                     >> 0x19U)) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
           | ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
              & ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                  ? (~ (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                        >> 3U)) : ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                   | ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                      | ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                         & ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                                            & ((0U 
                                                != 
                                                (7U 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                    >> 0xcU))) 
                                               & (~ 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                   >> 0xeU))))))))));
    if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg 
            = (1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                     >> 5U));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType 
            = ((0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                ? 6U : (((1U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                       >> 0xcU))) | 
                         (5U == (7U & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                       >> 0xcU)))) ? 4U
                         : 0xcU));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg 
            = (1U & ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                     & ((5U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                        & ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                           | ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op)) 
                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                 >> 5U))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType 
            = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                ? 1U : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                         ? ((8U & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                             ? 2U : 0xcU) : ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                              ? 7U : 
                                             ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                               ? ((0x20U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst)
                                                   ? 3U
                                                   : 0xcU)
                                               : ((1U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                   ? 0U
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst 
                                                         >> 0xcU)))
                                                     ? 0U
                                                     : 5U)
                                                    : 0U))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_minstret_T_3 
        = (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret 
           + (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mepc 
        = (((0x341U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_mie 
        = (((0x304U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
        = (((0x300U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_flush) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_flush)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip) 
           & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                       >> 3U)) & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute_io_mie 
                                          >> 3U))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq 
        = ((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
            <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime) 
           & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus 
                       >> 3U)) & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute_io_mie 
                                          >> 7U))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_4[0U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_4[1U] 
        = (IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2 
                                  >> 0x1fU))) ? 0x1ffffffffULL
                    : 0ULL));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_4[2U] 
        = (IData)((((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2 
                                   >> 0x1fU))) ? 0x1ffffffffULL
                     : 0ULL) >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_6[0U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_6[1U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_6[2U] 
        = (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2 
                         >> 0x3fU)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data 
        = ((0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
        = (((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                          >> 2U))) ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1
             : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
           + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
           + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready)) 
           & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
              & (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_hd9109502__0 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid 
        = ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
              & (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                  | (5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid) 
                    & ((6U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
    if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_4[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_4[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_4[2U];
    } else if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_6[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_6[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_6[2U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[1U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9[2U] = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2 
        = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? (((QData)((IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)))
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
        = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm);
    if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
            = (((QData)((IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1)));
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15[2U] = 0U;
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_4[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_4[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_4[2U];
        }
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data 
            = (0x3fU & (0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1;
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15[1U] 
                = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2 
                           >> 0x20U));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15[2U] = 0U;
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_6[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_6[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_6[2U];
        }
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
    __Vtemp_h2590d376__0[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2);
    __Vtemp_h2590d376__0[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2 
                                        >> 0x20U));
    __Vtemp_h2590d376__0[2U] = 0U;
    __Vtemp_h2590d376__0[3U] = 0U;
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h76f34b8e__0, __Vtemp_h2590d376__0, 
                  (0x38U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr) 
                            << 3U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U] 
        = __Vtemp_h76f34b8e__0[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U] 
        = __Vtemp_h76f34b8e__0[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U] 
        = __Vtemp_h76f34b8e__0[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U] 
        = (0x7fffffffU & __Vtemp_h76f34b8e__0[3U]);
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram) {
        vlSelf->riscv_soc__DOT__core_io_isram_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__sram0__DOT__wen = (1U 
                                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag)));
        vlSelf->riscv_soc__DOT__sram2__DOT__wen = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag;
    } else {
        vlSelf->riscv_soc__DOT__core_io_isram_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index));
        vlSelf->riscv_soc__DOT__sram0__DOT__wen = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__wen = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid 
        = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_hd9109502__0));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid 
        = ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
              & ((6U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                 & ((5U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_3) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_hd9109502__0))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid 
        = ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_hd9109502__0)));
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb 
            = ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? (QData)((IData)((0x7ffU & ((IData)(0xfU) 
                                             << (7U 
                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
                : ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                    ? (QData)((IData)((0x1ffU & ((IData)(3U) 
                                                 << 
                                                 (7U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
                    : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                        ? (QData)((IData)((0x7fffU 
                                           & ((IData)(0xffU) 
                                              << (7U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
                        : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                            ? (QData)((IData)((0xffU 
                                               & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))))
                            : 0ULL))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                     >> 1U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel 
            = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel = 0U;
    }
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[1U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35 
            = (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb));
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35 = 0ULL;
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val 
        = ((IData)(vlSelf->riscv_soc__DOT__sram0__DOT__wen) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass0_val_T));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val 
        = ((IData)(vlSelf->riscv_soc__DOT__sram2__DOT__wen) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass0_val_T));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U))) | (8U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid 
        = ((~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
               >> 4U)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
              >> 4U));
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2 
        = (1U & ((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                           ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                          >> 0x3fU)) ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                                >> 0x3fU))
                  : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U] 
                     >> 0x1fU)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
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
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22 
        = (1U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                  ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid))
                  : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready)
                      : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready)))));
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15[2U];
        if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[0U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[1U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[2U] = 0U;
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                    = (IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                              >> 0x1fU)))
                                ? 0x1ffffffffULL : 0ULL));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
                    = (IData)((((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                               >> 0x1fU)))
                                 ? 0x1ffffffffULL : 0ULL) 
                               >> 0x20U));
                if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
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
        } else if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                           >> 0x20U));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[2U] = 0U;
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                           >> 0x20U));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
                = (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                 >> 0x3fU)));
            if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
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
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[2U] = 0U;
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
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_msip_T_1 
        = (1U & ((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))
                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U]
                  : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip)));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtimecmp_T 
        = ((0x4000U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))
            ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))
            : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp);
    vlSelf->riscv_soc__DOT__core_io_dsram_addr = (0x3fU 
                                                  & ((0U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                                      ? (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                                 >> 4U))
                                                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
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
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                       >> 0x20U));
    } else if ((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U)))) {
        if ((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])) {
            __Vtemp_hab3058fc__0[2U] = 1U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
                = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                           >> 0x20U));
        } else {
            __Vtemp_hab3058fc__0[2U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U] 
                = (IData)((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
                = (IData)(((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                           >> 0x20U));
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U] 
            = __Vtemp_hf6ff0c49__0[0U];
        if ((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                          >> 2U)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2) {
                __Vtemp_hab3058fc__0[2U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
                    = (IData)(((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                               >> 0x20U));
            } else {
                __Vtemp_hab3058fc__0[2U] = 1U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
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
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
                = __Vtemp_h1c230895__0[1U];
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[2U] 
        = __Vtemp_hab3058fc__0[2U];
    vlSelf->riscv_soc__DOT__sram4__DOT__read_sram[0U] 
        = vlSelf->riscv_soc__DOT__sram4__DOT__sram[vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
    vlSelf->riscv_soc__DOT__sram4__DOT__read_sram[1U] 
        = vlSelf->riscv_soc__DOT__sram4__DOT__sram[vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
    vlSelf->riscv_soc__DOT__sram4__DOT__read_sram[2U] 
        = vlSelf->riscv_soc__DOT__sram4__DOT__sram[vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
    vlSelf->riscv_soc__DOT__sram4__DOT__read_sram[3U] 
        = vlSelf->riscv_soc__DOT__sram4__DOT__sram[vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
    vlSelf->riscv_soc__DOT__sram6__DOT__read_sram[0U] 
        = vlSelf->riscv_soc__DOT__sram6__DOT__sram[vlSelf->riscv_soc__DOT__core_io_dsram_addr][0U];
    vlSelf->riscv_soc__DOT__sram6__DOT__read_sram[1U] 
        = vlSelf->riscv_soc__DOT__sram6__DOT__sram[vlSelf->riscv_soc__DOT__core_io_dsram_addr][1U];
    vlSelf->riscv_soc__DOT__sram6__DOT__read_sram[2U] 
        = vlSelf->riscv_soc__DOT__sram6__DOT__sram[vlSelf->riscv_soc__DOT__core_io_dsram_addr][2U];
    vlSelf->riscv_soc__DOT__sram6__DOT__read_sram[3U] 
        = vlSelf->riscv_soc__DOT__sram6__DOT__sram[vlSelf->riscv_soc__DOT__core_io_dsram_addr][3U];
    if ((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                  >> 0x1fU))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata 
                = vlSelf->riscv_soc__DOT__axi_ram__DOT__mem__DOT__tem_data;
            vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid;
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata 
                = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata;
            vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid = 0U;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid = 0U;
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
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[2U];
    }
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
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
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_6 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_5 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_22 
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
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_6 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21[2U]);
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
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict 
            = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid) 
                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc) 
                   & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc 
                      != ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid)
                           ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo
                          [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail]
                           : 0ULL)))) | (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid)) 
                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc)) 
                                         | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc)) 
                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid))));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict = 0U;
    }
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))) {
        vlSelf->riscv_soc__DOT__core_io_axi_bus_w_bits_wlast 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
        vlSelf->riscv_soc__DOT__core_io_axi_bus_w_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid;
    } else {
        vlSelf->riscv_soc__DOT__core_io_axi_bus_w_bits_wlast 
            = (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen));
        vlSelf->riscv_soc__DOT__core_io_axi_bus_w_valid 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1));
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__io_cache_bus_b_fire 
        = (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
    vlSelf->riscv_soc__DOT__core_io_axi_bus_aw_valid 
        = (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
            & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid))) 
           | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid) 
                 & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok)) 
                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w)))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen 
        = ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_10))));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__io_ram_bus_w_fire 
        = ((IData)(vlSelf->riscv_soc__DOT__core_io_axi_bus_w_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__io_ram_bus_aw_fire 
        = ((IData)(vlSelf->riscv_soc__DOT__core_io_axi_bus_aw_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__core_io_axi_bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__core_io_axi_bus_r_bits_rlast));
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))) {
        vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_bits_araddr 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr;
        vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_valid 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_ready 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid;
    } else {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))) {
            vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_bits_araddr 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr;
            vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_valid 
                = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))) {
            vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_bits_araddr 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
            vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_valid 
                = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid));
        } else if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))) {
            vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_bits_araddr 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr;
            vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_valid 
                = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid));
        } else {
            vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_bits_araddr = 0ULL;
            vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_valid = 0U;
        }
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_ready = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready 
        = (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)) 
           | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
              & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    if ((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                  >> 0x1fU))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT__mem__DOT__tem_data;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid;
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__io_cache_bus_r_fire 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__io_cache_bus_r_fire 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__io_ram_bus_ar_fire 
        = ((IData)(vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid) 
           & ((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                        >> 0x1fU)) ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))
               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)));
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ff74da3__0 
            = (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_22));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ef2845d__0 
            = (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_22));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1f3d8880__0 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_22);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_data_result 
            = ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1f3d8880__0))
                : ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                    ? (((QData)((IData)((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) 
                                          & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_22 
                                                     >> 0x1fU)))
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1f3d8880__0)))
                    : ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                        ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ef2845d__0))
                        : ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                            ? (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) 
                                  & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_22 
                                             >> 0xfU)))
                                  ? 0xffffffffffffULL
                                  : 0ULL) << 0x10U) 
                               | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ef2845d__0)))
                            : ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ff74da3__0))
                                : ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                    ? (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) 
                                          & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_22 
                                                     >> 7U)))
                                          ? 0xffffffffffffffULL
                                          : 0ULL) << 8U) 
                                       | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ff74da3__0)))
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                        ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_22
                                            : 0ULL)
                                        : 0ULL)))))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_32 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                      ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready))
                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready)));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ff74da3__0 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ef2845d__0 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1f3d8880__0 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_data_result = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_32 
            = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)));
    }
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
             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size 
        = ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
           & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush)) 
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
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__result_size 
        = (7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                  + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                 - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)));
}

VL_ATTR_COLD void Vriscv_soc___024root___eval_stl(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vriscv_soc___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__ico(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__act(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__nba(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_soc___024root___ctor_var_reset(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core_io_axi_bus_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core_io_axi_bus_w_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core_io_axi_bus_w_bits_wlast = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core_io_axi_bus_ar_bits_araddr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core_io_axi_bus_r_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core_io_axi_bus_r_bits_rlast = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core_io_isram_addr = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core_io_dsram_addr = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_flush = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_is_fence_i = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_bits_rlast = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_w_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch_io_flush = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_mie = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass0_val_T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_offset = VL_RAND_RESET_I(4);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__lru_1_and_neg_chose = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__lru_1_or_chose = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__io_cache_bus_r_fire = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb = VL_RAND_RESET_I(8);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag = VL_RAND_RESET_Q(54);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset = VL_RAND_RESET_I(4);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_valid_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_dirty_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__tag_dirty_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__LRU_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__temp_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__io_cache_bus_r_fire = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__io_cache_bus_b_fire = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_6 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_10 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_23 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_head_T_1 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_tail_T_1 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_head_T_1 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_tail_T_1 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_0_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_43 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size = VL_RAND_RESET_I(3);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__result_size = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head = VL_RAND_RESET_I(3);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_pht_data = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_1 = VL_RAND_RESET_I(3);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_3 = VL_RAND_RESET_I(3);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mepc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid = VL_RAND_RESET_I(4);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9 = VL_RAND_RESET_I(3);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr = VL_RAND_RESET_I(5);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst = VL_RAND_RESET_I(32);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_hd9109502__0 = 0;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_sra = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb = VL_RAND_RESET_I(8);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType = VL_RAND_RESET_I(7);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___mem_r_data_T_22 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_data_result = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(127, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_32 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(127, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(127, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ff74da3__0 = 0;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1ef2845d__0 = 0;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT____VdfgTmp_h1f3d8880__0 = 0;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_15);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    VL_RAND_RESET_W(66, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem);
    VL_RAND_RESET_W(66, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = VL_RAND_RESET_I(7);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType = VL_RAND_RESET_I(7);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(132, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_9);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1 = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22 = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(67, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_39 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_4);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_6);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_9);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(67, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2);
    VL_RAND_RESET_W(130, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1);
    VL_RAND_RESET_W(130, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType = VL_RAND_RESET_I(7);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(131, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1);
    VL_RAND_RESET_W(67, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1 = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(131, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15);
    VL_RAND_RESET_W(133, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = VL_RAND_RESET_I(3);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = VL_RAND_RESET_I(7);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm = VL_RAND_RESET_I(32);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst = VL_RAND_RESET_I(32);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr = VL_RAND_RESET_I(5);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType = VL_RAND_RESET_I(5);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__fun_op = VL_RAND_RESET_I(3);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_kk = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType = VL_RAND_RESET_I(4);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___inst_counter_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mepc_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcause_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mtval_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_9 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcycle_T_2 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_minstret_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_msip_T_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtimecmp_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen = VL_RAND_RESET_I(4);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__io_ram_bus_ar_fire = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__io_ram_bus_aw_fire = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__io_ram_bus_w_fire = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__mem__DOT__t_rdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__mem__DOT__tem_data = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__Q);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram[__Vi0]);
    }
    vlSelf->riscv_soc__DOT__sram0__DOT__wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__Q);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__Q);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram[__Vi0]);
    }
    vlSelf->riscv_soc__DOT__sram2__DOT__wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__Q);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__Q);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__bwen);
    vlSelf->riscv_soc__DOT__sram4__DOT__wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__read_sram);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__Q);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__Q);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram[__Vi0]);
    }
    vlSelf->riscv_soc__DOT__sram6__DOT__wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__read_sram);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__Q);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram[__Vi0]);
    }
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
