// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv_soc___024root.h"

VL_INLINE_OPT void Vriscv_soc___024root___ico_sequent__TOP__0(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___ico_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h3ade9cab__0;
    // Body
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
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___GEN_16 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[2U] = 0U;
    } else {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
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
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___GEN_16 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready)
                ? ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                    ? 1U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                             ? 1U : ((0x1bU == (0x707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                                      ? 1U : ((0x3bU 
                                               == (0xfe00707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                                               ? 1U
                                               : ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                                                   ? 1U
                                                   : 
                                                  ((0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst))
                                                      ? 0U
                                                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_438)))))))))
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U] 
                = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
                           >> 0x20U));
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[2U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U] 
                = __Vtemp_h3ade9cab__0[1U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[2U] = 0U;
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
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U] 
                    = __Vtemp_h3ade9cab__0[1U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[2U] = 0U;
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                               << 4U));
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                << 4U) >> 0x20U));
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[2U] = 0U;
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T) {
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U] 
                        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdb124cd4__0)
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
                            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr));
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U] 
                        = __Vtemp_h3ade9cab__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[2U] = 0U;
                } else {
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U] 
                        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U] 
                        = __Vtemp_h3ade9cab__0[1U];
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[2U] = 0U;
                }
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
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U] 
                = __Vtemp_h3ade9cab__0[1U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[2U] = 0U;
        }
    }
}

void Vriscv_soc___024root___eval_ico(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vriscv_soc___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vriscv_soc___024root___eval_act(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_act\n"); );
}

void Vriscv_soc___024root___nba_sequent__TOP__0(Vriscv_soc___024root* vlSelf);

void Vriscv_soc___024root___eval_nba(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vriscv_soc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vriscv_soc___024root___eval_triggers__ico(Vriscv_soc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__ico(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG
void Vriscv_soc___024root___eval_triggers__act(Vriscv_soc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__act(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_soc___024root___dump_triggers__nba(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv_soc___024root___eval(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vriscv_soc___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vriscv_soc___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/xingk/ysyx-workbench/npc/verilog/src/riscv_soc.v", 8, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vriscv_soc___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vriscv_soc___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vriscv_soc___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/xingk/ysyx-workbench/npc/verilog/src/riscv_soc.v", 8, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vriscv_soc___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vriscv_soc___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/xingk/ysyx-workbench/npc/verilog/src/riscv_soc.v", 8, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vriscv_soc___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vriscv_soc___024root___eval_debug_assertions(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
