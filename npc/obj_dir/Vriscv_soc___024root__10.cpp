// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vriscv_soc___024root___combo__TOP__22(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___combo__TOP__22\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp4192;
    VlWide<3>/*95:0*/ __Vtemp4193;
    VlWide<3>/*95:0*/ __Vtemp4194;
    VlWide<3>/*95:0*/ __Vtemp4197;
    VlWide<3>/*95:0*/ __Vtemp4200;
    VlWide<3>/*95:0*/ __Vtemp4207;
    VlWide<3>/*95:0*/ __Vtemp4208;
    VlWide<3>/*95:0*/ __Vtemp4209;
    VlWide<3>/*95:0*/ __Vtemp4210;
    VlWide<3>/*95:0*/ __Vtemp4213;
    VlWide<3>/*95:0*/ __Vtemp4217;
    VlWide<3>/*95:0*/ __Vtemp4224;
    VlWide<3>/*95:0*/ __Vtemp4225;
    VlWide<3>/*95:0*/ __Vtemp4226;
    VlWide<3>/*95:0*/ __Vtemp4229;
    VlWide<3>/*95:0*/ __Vtemp4232;
    VlWide<3>/*95:0*/ __Vtemp4239;
    VlWide<3>/*95:0*/ __Vtemp4240;
    VlWide<3>/*95:0*/ __Vtemp4241;
    VlWide<3>/*95:0*/ __Vtemp4242;
    VlWide<3>/*95:0*/ __Vtemp4245;
    VlWide<3>/*95:0*/ __Vtemp4249;
    VlWide<5>/*159:0*/ __Vtemp4258;
    VlWide<5>/*159:0*/ __Vtemp4261;
    VlWide<4>/*127:0*/ __Vtemp4270;
    VlWide<4>/*127:0*/ __Vtemp4271;
    VlWide<5>/*159:0*/ __Vtemp4276;
    VlWide<5>/*159:0*/ __Vtemp4277;
    VlWide<5>/*159:0*/ __Vtemp4278;
    VlWide<5>/*159:0*/ __Vtemp4279;
    VlWide<3>/*95:0*/ __Vtemp4287;
    VlWide<3>/*95:0*/ __Vtemp4290;
    VlWide<3>/*95:0*/ __Vtemp4291;
    VlWide<3>/*95:0*/ __Vtemp4293;
    VlWide<3>/*95:0*/ __Vtemp4294;
    VlWide<3>/*95:0*/ __Vtemp4295;
    VlWide<3>/*95:0*/ __Vtemp4300;
    VlWide<3>/*95:0*/ __Vtemp4301;
    VlWide<3>/*95:0*/ __Vtemp4308;
    VlWide<3>/*95:0*/ __Vtemp4309;
    // Body
    VL_EXTEND_WQ(67,64, __Vtemp4192, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4193, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4194, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4197, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4200, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4192[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4193[0U]
                                              : __Vtemp4194[0U])
                                          : __Vtemp4197[0U])
                                      : __Vtemp4200[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4192[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4193[1U]
                                              : __Vtemp4194[1U])
                                          : __Vtemp4197[1U])
                                      : __Vtemp4200[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4192[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4193[2U]
                                              : __Vtemp4194[2U])
                                          : __Vtemp4197[2U])
                                      : __Vtemp4200[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp4207, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4208, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4209, ((((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_340))
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U])) 
                                                  >> 2U)))
                                         : (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[1U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U])) 
                                                  >> 2U)))) 
                                       << 0xaU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index) 
                                                                   << 4U)))));
    VL_EXTEND_WQ(67,64, __Vtemp4210, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4213, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4217, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4207[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? __Vtemp4208[0U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_340) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_340) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4209[0U]
                                                  : 
                                                 __Vtemp4210[0U])
                                              : __Vtemp4213[0U]))
                                      : __Vtemp4217[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4207[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? __Vtemp4208[1U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_340) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_340) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4209[1U]
                                                  : 
                                                 __Vtemp4210[1U])
                                              : __Vtemp4213[1U]))
                                      : __Vtemp4217[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4207[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? __Vtemp4208[2U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_340) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_340) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4209[2U]
                                                  : 
                                                 __Vtemp4210[2U])
                                              : __Vtemp4213[2U]))
                                      : __Vtemp4217[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp4224, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4225, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4226, (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4229, (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4232, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4224[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4225[0U]
                                              : __Vtemp4226[0U])
                                          : __Vtemp4229[0U])
                                      : __Vtemp4232[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4224[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4225[1U]
                                              : __Vtemp4226[1U])
                                          : __Vtemp4229[1U])
                                      : __Vtemp4232[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4224[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4225[2U]
                                              : __Vtemp4226[2U])
                                          : __Vtemp4229[2U])
                                      : __Vtemp4232[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp4239, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4240, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4241, ((((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_340))
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U])) 
                                                  >> 2U)))
                                         : (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[1U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U])) 
                                                  >> 2U)))) 
                                       << 0xaU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index) 
                                                                   << 4U)))));
    VL_EXTEND_WQ(67,64, __Vtemp4242, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4245, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4249, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4239[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? __Vtemp4240[0U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_340) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_340) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4241[0U]
                                                  : 
                                                 __Vtemp4242[0U])
                                              : __Vtemp4245[0U]))
                                      : __Vtemp4249[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4239[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? __Vtemp4240[1U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_340) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_340) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4241[1U]
                                                  : 
                                                 __Vtemp4242[1U])
                                              : __Vtemp4245[1U]))
                                      : __Vtemp4249[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4239[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? __Vtemp4240[2U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_340) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_340) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4241[2U]
                                                  : 
                                                 __Vtemp4242[2U])
                                              : __Vtemp4245[2U]))
                                      : __Vtemp4249[2U]));
    }
    VL_EXTEND_WW(131,130, __Vtemp4258, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    VL_EXTEND_WW(131,130, __Vtemp4261, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
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
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                 ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? __Vtemp4258[0U]
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U]))
                             : __Vtemp4261[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                 ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? __Vtemp4258[1U]
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U]))
                             : __Vtemp4261[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                 ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? __Vtemp4258[2U]
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U]))
                             : __Vtemp4261[2U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[3U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                 ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? __Vtemp4258[3U]
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U]))
                             : __Vtemp4261[3U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[4U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                 ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? __Vtemp4258[4U]
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U]))
                             : __Vtemp4261[4U])));
    }
    VL_EXTEND_WQ(127,64, __Vtemp4270, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata);
    VL_EXTEND_WQ(127,64, __Vtemp4271, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_43[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_44 = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_43[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp4270[0U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_w_data[0U]
                                      : __Vtemp4271[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_43[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp4270[1U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_w_data[1U]
                                      : __Vtemp4271[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_43[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp4270[2U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_w_data[2U]
                                      : __Vtemp4271[2U]));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_43[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp4270[3U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_w_data[3U]
                                      : __Vtemp4271[3U]));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_44 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb))
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                    ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb
                    : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb))));
    }
    VL_EXTEND_WW(133,130, __Vtemp4276, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data1);
    __Vtemp4277[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                       << 2U);
    __Vtemp4277[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                     << 2U));
    __Vtemp4277[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                     << 2U));
    __Vtemp4277[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                     << 2U));
    __Vtemp4277[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                     << 2U));
    VL_EXTEND_WW(133,132, __Vtemp4278, __Vtemp4277);
    VL_EXTEND_WW(133,130, __Vtemp4279, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[4U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4276[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4278[0U]
                                      : __Vtemp4279[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4276[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4278[1U]
                                      : __Vtemp4279[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4276[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4278[2U]
                                      : __Vtemp4279[2U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[3U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4276[3U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4278[3U]
                                      : __Vtemp4279[3U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[4U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4276[4U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4278[4U]
                                      : __Vtemp4279[4U]));
    }
    VL_EXTEND_WW(66,65, __Vtemp4287, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend);
    __Vtemp4290[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[0U];
    __Vtemp4290[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[1U];
    __Vtemp4290[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U]);
    VL_EXTEND_WW(66,65, __Vtemp4291, __Vtemp4290);
    __Vtemp4293[0U] = 1U;
    __Vtemp4293[1U] = 0U;
    __Vtemp4293[2U] = 0U;
    __Vtemp4294[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       << 1U);
    __Vtemp4294[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                     << 1U));
    __Vtemp4294[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                     << 1U));
    VL_ADD_W(3, __Vtemp4295, __Vtemp4293, __Vtemp4294);
    __Vtemp4300[0U] = 1U;
    __Vtemp4300[1U] = 0U;
    __Vtemp4300[2U] = 0U;
    VL_ADD_W(3, __Vtemp4301, __Vtemp4300, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q);
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vtemp4308[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                            ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]
                                     : ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                         ? __Vtemp4301[0U]
                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])));
        __Vtemp4308[1U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                            ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]
                                     : ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                         ? __Vtemp4301[1U]
                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])));
        __Vtemp4308[2U] = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                  ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]
                                           : ((1U & 
                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                               ? __Vtemp4301[2U]
                                               : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]))));
    } else {
        __Vtemp4308[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
        __Vtemp4308[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
        __Vtemp4308[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]);
    }
    VL_EXTEND_WW(66,65, __Vtemp4309, __Vtemp4308);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_39 = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_40[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? __Vtemp4287[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                      ? __Vtemp4291[0U]
                                      : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                          ? ((1U & 
                                              (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                              ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                 << 1U)
                                              : __Vtemp4295[0U])
                                          : __Vtemp4309[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_40[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? __Vtemp4287[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                      ? __Vtemp4291[1U]
                                      : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                          ? ((1U & 
                                              (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                              ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                  >> 0x1fU) 
                                                 | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                                    << 1U))
                                              : __Vtemp4295[1U])
                                          : __Vtemp4309[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_40[2U] 
            = (3U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                      ? __Vtemp4287[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                            ? __Vtemp4291[2U]
                                            : ((2U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                                ? (
                                                   (1U 
                                                    & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                       ^ 
                                                       vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                                    ? 
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                                       << 1U))
                                                    : 
                                                   __Vtemp4295[2U])
                                                : __Vtemp4309[2U]))));
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
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)
                    : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)));
    }
}

void Vriscv_soc___024root___combo__TOP__10(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__12(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__13(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__14(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__15(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__16(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__17(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__18(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__19(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__20(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__21(Vriscv_soc___024root* vlSelf);

void Vriscv_soc___024root___eval(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval\n"); );
    // Body
    Vriscv_soc___024root___combo__TOP__10(vlSelf);
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vriscv_soc___024root___sequent__TOP__12(vlSelf);
        Vriscv_soc___024root___sequent__TOP__13(vlSelf);
        Vriscv_soc___024root___sequent__TOP__14(vlSelf);
        Vriscv_soc___024root___sequent__TOP__15(vlSelf);
        Vriscv_soc___024root___sequent__TOP__16(vlSelf);
        Vriscv_soc___024root___sequent__TOP__17(vlSelf);
        Vriscv_soc___024root___sequent__TOP__18(vlSelf);
        Vriscv_soc___024root___sequent__TOP__19(vlSelf);
        Vriscv_soc___024root___sequent__TOP__20(vlSelf);
        Vriscv_soc___024root___sequent__TOP__21(vlSelf);
    }
    Vriscv_soc___024root___combo__TOP__22(vlSelf);
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
