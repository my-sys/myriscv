// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vriscv_soc___024root___combo__TOP__5(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___combo__TOP__5\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp598;
    VlWide<3>/*95:0*/ __Vtemp607;
    VlWide<3>/*95:0*/ __Vtemp608;
    VlWide<3>/*95:0*/ __Vtemp609;
    VlWide<3>/*95:0*/ __Vtemp612;
    VlWide<3>/*95:0*/ __Vtemp615;
    VlWide<3>/*95:0*/ __Vtemp622;
    VlWide<3>/*95:0*/ __Vtemp623;
    VlWide<3>/*95:0*/ __Vtemp624;
    VlWide<3>/*95:0*/ __Vtemp625;
    VlWide<3>/*95:0*/ __Vtemp628;
    VlWide<3>/*95:0*/ __Vtemp632;
    VlWide<4>/*127:0*/ __Vtemp639;
    VlWide<5>/*159:0*/ __Vtemp655;
    VlWide<5>/*159:0*/ __Vtemp661;
    VlWide<5>/*159:0*/ __Vtemp662;
    VlWide<5>/*159:0*/ __Vtemp663;
    VlWide<5>/*159:0*/ __Vtemp664;
    VlWide<5>/*159:0*/ __Vtemp665;
    VlWide<3>/*95:0*/ __Vtemp675;
    VlWide<3>/*95:0*/ __Vtemp676;
    VlWide<3>/*95:0*/ __Vtemp679;
    VlWide<3>/*95:0*/ __Vtemp680;
    VlWide<3>/*95:0*/ __Vtemp681;
    VlWide<3>/*95:0*/ __Vtemp682;
    VlWide<3>/*95:0*/ __Vtemp683;
    VlWide<3>/*95:0*/ __Vtemp685;
    VlWide<3>/*95:0*/ __Vtemp686;
    VlWide<3>/*95:0*/ __Vtemp687;
    VlWide<3>/*95:0*/ __Vtemp688;
    VlWide<3>/*95:0*/ __Vtemp693;
    VlWide<3>/*95:0*/ __Vtemp694;
    // Body
    VL_EXTEND_WW(131,130, __Vtemp598, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[4U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U]
                             : __Vtemp598[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U]
                             : __Vtemp598[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U]
                             : __Vtemp598[2U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[3U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U]
                             : __Vtemp598[3U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[4U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U]
                             : __Vtemp598[4U])));
    }
    VL_EXTEND_WQ(67,64, __Vtemp607, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp608, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp609, (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                     << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp612, (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                     << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp615, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp607[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
                                             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))
                                             ? __Vtemp608[0U]
                                             : __Vtemp609[0U])
                                         : __Vtemp612[0U])
                                     : __Vtemp615[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp607[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
                                             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))
                                             ? __Vtemp608[1U]
                                             : __Vtemp609[1U])
                                         : __Vtemp612[1U])
                                     : __Vtemp615[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp607[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
                                             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))
                                             ? __Vtemp608[2U]
                                             : __Vtemp609[2U])
                                         : __Vtemp612[2U])
                                     : __Vtemp615[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp622, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp623, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp624, ((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))
                                        ? (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[0U])))
                                        : (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[0U])))) 
                                      << 0xaU) | (QData)((IData)(
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index) 
                                                                  << 4U)))));
    VL_EXTEND_WQ(67,64, __Vtemp625, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp628, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp632, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp622[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? __Vtemp623[0U]
                                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                                             ? ((1U 
                                                 & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))))
                                                 ? 
                                                __Vtemp624[0U]
                                                 : 
                                                __Vtemp625[0U])
                                             : __Vtemp628[0U]))
                                     : __Vtemp632[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp622[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? __Vtemp623[1U]
                                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                                             ? ((1U 
                                                 & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))))
                                                 ? 
                                                __Vtemp624[1U]
                                                 : 
                                                __Vtemp625[1U])
                                             : __Vtemp628[1U]))
                                     : __Vtemp632[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp622[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? __Vtemp623[2U]
                                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                                             ? ((1U 
                                                 & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))))
                                                 ? 
                                                __Vtemp624[2U]
                                                 : 
                                                __Vtemp625[2U])
                                             : __Vtemp628[2U]))
                                     : __Vtemp632[2U]));
    }
    VL_EXTEND_WQ(127,64, __Vtemp639, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35 = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                ? __Vtemp639[0U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U]
                                     : 0U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                ? __Vtemp639[1U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U]
                                     : 0U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                ? __Vtemp639[2U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U]
                                     : 0U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                ? __Vtemp639[3U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U]
                                     : 0U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)
                ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb))
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb
                    : 0ULL));
    }
    VL_EXTEND_WQ(130,64, __Vtemp655, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
        __Vtemp661[0U] = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                           : ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                               : __Vtemp655[0U]));
        __Vtemp661[1U] = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                           ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U) : 
                          ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                            ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                       >> 0x20U)) : 
                           __Vtemp655[1U]));
        __Vtemp661[2U] = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                           ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U) : 
                          ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                            ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                              >> 0x3fU)))
                                ? 0xffffffffU : 0U)
                            : __Vtemp655[2U]));
        __Vtemp661[3U] = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                           ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 0xffffffffU : 0U) : 
                          ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                            ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                              >> 0x3fU)))
                                ? 0xffffffffU : 0U)
                            : __Vtemp655[3U]));
        __Vtemp661[4U] = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                           ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x1fU)))
                               ? 3U : 0U) : ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                             >> 0x3fU)))
                                                  ? 3U
                                                  : 0U)
                                              : __Vtemp655[4U]));
    } else {
        __Vtemp661[0U] = 0U;
        __Vtemp661[1U] = 0U;
        __Vtemp661[2U] = 0U;
        __Vtemp661[3U] = 0U;
        __Vtemp661[4U] = 0U;
    }
    VL_EXTEND_WW(133,130, __Vtemp662, __Vtemp661);
    __Vtemp663[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                      << 2U);
    __Vtemp663[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                       >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                    << 2U));
    __Vtemp663[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                       >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                    << 2U));
    __Vtemp663[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                       >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                    << 2U));
    __Vtemp663[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                       >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                    << 2U));
    VL_EXTEND_WW(133,132, __Vtemp664, __Vtemp663);
    VL_EXTEND_WW(133,130, __Vtemp665, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[4U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp662[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                     ? __Vtemp664[0U]
                                     : __Vtemp665[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp662[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                     ? __Vtemp664[1U]
                                     : __Vtemp665[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp662[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                     ? __Vtemp664[2U]
                                     : __Vtemp665[2U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[3U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp662[3U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                     ? __Vtemp664[3U]
                                     : __Vtemp665[3U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[4U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp662[4U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                     ? __Vtemp664[4U]
                                     : __Vtemp665[4U]));
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
        __Vtemp675[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                          << 1U);
        __Vtemp675[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                           >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                                        << 1U));
        __Vtemp675[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                           >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
                                        << 1U));
    } else {
        __Vtemp675[0U] = 0U;
        __Vtemp675[1U] = 0U;
        __Vtemp675[2U] = 0U;
    }
    VL_EXTEND_WW(67,66, __Vtemp676, __Vtemp675);
    __Vtemp679[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[0U];
    __Vtemp679[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[1U];
    __Vtemp679[2U] = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U]);
    VL_EXTEND_WW(67,66, __Vtemp680, __Vtemp679);
    __Vtemp681[0U] = 1U;
    __Vtemp681[1U] = 0U;
    __Vtemp681[2U] = 0U;
    __Vtemp682[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                      << 1U);
    __Vtemp682[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                    << 1U));
    __Vtemp682[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                       >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                    << 1U));
    VL_ADD_W(3, __Vtemp683, __Vtemp681, __Vtemp682);
    __Vtemp685[0U] = 1U;
    __Vtemp685[1U] = 0U;
    __Vtemp685[2U] = 0U;
    VL_SUB_W(3, __Vtemp686, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q, __Vtemp685);
    __Vtemp687[0U] = 1U;
    __Vtemp687[1U] = 0U;
    __Vtemp687[2U] = 0U;
    VL_ADD_W(3, __Vtemp688, __Vtemp687, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q);
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vtemp693[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                           ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                               ? __Vtemp686[0U] : __Vtemp688[0U])
                           : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]);
        __Vtemp693[1U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                           ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                               ? __Vtemp686[1U] : __Vtemp688[1U])
                           : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]);
        __Vtemp693[2U] = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                                 ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                                     ? __Vtemp686[2U]
                                     : __Vtemp688[2U])
                                 : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]));
    } else {
        __Vtemp693[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
        __Vtemp693[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
        __Vtemp693[2U] = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]);
    }
    VL_EXTEND_WW(67,66, __Vtemp694, __Vtemp693);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_39 = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_45[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? __Vtemp676[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                     ? __Vtemp680[0U]
                                     : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                         ? __Vtemp683[0U]
                                         : __Vtemp694[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_45[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? __Vtemp676[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                     ? __Vtemp680[1U]
                                     : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                         ? __Vtemp683[1U]
                                         : __Vtemp694[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_45[2U] 
            = (7U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                      ? __Vtemp676[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                           ? __Vtemp680[2U]
                                           : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                               ? __Vtemp683[2U]
                                               : __Vtemp694[2U]))));
        vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_39 
            = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)
                ? (0xfU & ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)
                            ? ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                ? ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen))
                                    ? (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)
                                    : ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen) 
                                       - (IData)(1U)))
                                : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen))
                            : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)))
                : ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1)
                    ? ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                       | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)))
                    : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)));
    }
}

void Vriscv_soc___024root___sequent__TOP__3(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__4(Vriscv_soc___024root* vlSelf);

void Vriscv_soc___024root___eval(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vriscv_soc___024root___sequent__TOP__3(vlSelf);
        Vriscv_soc___024root___sequent__TOP__4(vlSelf);
    }
    Vriscv_soc___024root___combo__TOP__5(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vriscv_soc___024root___change_request_1(Vriscv_soc___024root* vlSelf);

VL_INLINE_OPT QData Vriscv_soc___024root___change_request(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___change_request\n"); );
    // Body
    return (Vriscv_soc___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vriscv_soc___024root___change_request_1(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
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
