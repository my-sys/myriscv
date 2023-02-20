// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vriscv_soc___024root___combo__TOP__20(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___combo__TOP__20\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp4114;
    VlWide<3>/*95:0*/ __Vtemp4115;
    VlWide<3>/*95:0*/ __Vtemp4116;
    VlWide<3>/*95:0*/ __Vtemp4119;
    VlWide<3>/*95:0*/ __Vtemp4122;
    VlWide<3>/*95:0*/ __Vtemp4129;
    VlWide<3>/*95:0*/ __Vtemp4130;
    VlWide<3>/*95:0*/ __Vtemp4131;
    VlWide<3>/*95:0*/ __Vtemp4132;
    VlWide<3>/*95:0*/ __Vtemp4135;
    VlWide<3>/*95:0*/ __Vtemp4139;
    VlWide<3>/*95:0*/ __Vtemp4146;
    VlWide<3>/*95:0*/ __Vtemp4147;
    VlWide<3>/*95:0*/ __Vtemp4148;
    VlWide<3>/*95:0*/ __Vtemp4151;
    VlWide<3>/*95:0*/ __Vtemp4154;
    VlWide<3>/*95:0*/ __Vtemp4161;
    VlWide<3>/*95:0*/ __Vtemp4162;
    VlWide<3>/*95:0*/ __Vtemp4163;
    VlWide<3>/*95:0*/ __Vtemp4164;
    VlWide<3>/*95:0*/ __Vtemp4167;
    VlWide<3>/*95:0*/ __Vtemp4171;
    VlWide<5>/*159:0*/ __Vtemp4179;
    VlWide<5>/*159:0*/ __Vtemp4181;
    VlWide<3>/*95:0*/ __Vtemp4193;
    VlWide<3>/*95:0*/ __Vtemp4194;
    VlWide<3>/*95:0*/ __Vtemp4195;
    VlWide<3>/*95:0*/ __Vtemp4199;
    VlWide<3>/*95:0*/ __Vtemp4200;
    VlWide<3>/*95:0*/ __Vtemp4206;
    VlWide<3>/*95:0*/ __Vtemp4207;
    VlWide<4>/*127:0*/ __Vtemp4215;
    VlWide<4>/*127:0*/ __Vtemp4216;
    VlWide<5>/*159:0*/ __Vtemp4221;
    VlWide<5>/*159:0*/ __Vtemp4222;
    VlWide<5>/*159:0*/ __Vtemp4223;
    VlWide<5>/*159:0*/ __Vtemp4224;
    VlWide<3>/*95:0*/ __Vtemp4233;
    VlWide<3>/*95:0*/ __Vtemp4234;
    VlWide<3>/*95:0*/ __Vtemp4235;
    VlWide<3>/*95:0*/ __Vtemp4236;
    VlWide<3>/*95:0*/ __Vtemp4237;
    VlWide<3>/*95:0*/ __Vtemp4240;
    VlWide<3>/*95:0*/ __Vtemp4241;
    VlWide<3>/*95:0*/ __Vtemp4242;
    VlWide<3>/*95:0*/ __Vtemp4243;
    VlWide<3>/*95:0*/ __Vtemp4244;
    VlWide<3>/*95:0*/ __Vtemp4245;
    VlWide<3>/*95:0*/ __Vtemp4247;
    VlWide<3>/*95:0*/ __Vtemp4248;
    VlWide<3>/*95:0*/ __Vtemp4249;
    VlWide<3>/*95:0*/ __Vtemp4250;
    VlWide<3>/*95:0*/ __Vtemp4251;
    VlWide<3>/*95:0*/ __Vtemp4252;
    VlWide<3>/*95:0*/ __Vtemp4256;
    VlWide<3>/*95:0*/ __Vtemp4257;
    VlWide<3>/*95:0*/ __Vtemp4258;
    VlWide<3>/*95:0*/ __Vtemp4259;
    VlWide<3>/*95:0*/ __Vtemp4260;
    VlWide<3>/*95:0*/ __Vtemp4268;
    VlWide<3>/*95:0*/ __Vtemp4269;
    // Body
    VL_EXTEND_WQ(67,64, __Vtemp4114, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4115, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4116, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4119, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4122, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4114[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4115[0U]
                                              : __Vtemp4116[0U])
                                          : __Vtemp4119[0U])
                                      : __Vtemp4122[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4114[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4115[1U]
                                              : __Vtemp4116[1U])
                                          : __Vtemp4119[1U])
                                      : __Vtemp4122[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4114[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4115[2U]
                                              : __Vtemp4116[2U])
                                          : __Vtemp4119[2U])
                                      : __Vtemp4122[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp4129, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4130, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4131, ((((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_340))
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
    VL_EXTEND_WQ(67,64, __Vtemp4132, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4135, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4139, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4129[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? __Vtemp4130[0U]
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
                                                 __Vtemp4131[0U]
                                                  : 
                                                 __Vtemp4132[0U])
                                              : __Vtemp4135[0U]))
                                      : __Vtemp4139[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4129[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? __Vtemp4130[1U]
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
                                                 __Vtemp4131[1U]
                                                  : 
                                                 __Vtemp4132[1U])
                                              : __Vtemp4135[1U]))
                                      : __Vtemp4139[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4129[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? __Vtemp4130[2U]
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
                                                 __Vtemp4131[2U]
                                                  : 
                                                 __Vtemp4132[2U])
                                              : __Vtemp4135[2U]))
                                      : __Vtemp4139[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp4146, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4147, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4148, (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4151, (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4154, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4146[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4147[0U]
                                              : __Vtemp4148[0U])
                                          : __Vtemp4151[0U])
                                      : __Vtemp4154[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4146[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4147[1U]
                                              : __Vtemp4148[1U])
                                          : __Vtemp4151[1U])
                                      : __Vtemp4154[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4146[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4147[2U]
                                              : __Vtemp4148[2U])
                                          : __Vtemp4151[2U])
                                      : __Vtemp4154[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp4161, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4162, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4163, ((((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_340))
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
    VL_EXTEND_WQ(67,64, __Vtemp4164, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4167, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4171, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4161[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? __Vtemp4162[0U]
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
                                                 __Vtemp4163[0U]
                                                  : 
                                                 __Vtemp4164[0U])
                                              : __Vtemp4167[0U]))
                                      : __Vtemp4171[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4161[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? __Vtemp4162[1U]
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
                                                 __Vtemp4163[1U]
                                                  : 
                                                 __Vtemp4164[1U])
                                              : __Vtemp4167[1U]))
                                      : __Vtemp4171[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4161[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? __Vtemp4162[2U]
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
                                                 __Vtemp4163[2U]
                                                  : 
                                                 __Vtemp4164[2U])
                                              : __Vtemp4167[2U]))
                                      : __Vtemp4171[2U]));
    }
    VL_EXTEND_WW(131,130, __Vtemp4179, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    VL_EXTEND_WW(131,130, __Vtemp4181, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_31[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_31[4U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_31[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                 ? __Vtemp4179[0U] : 
                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U])
                             : __Vtemp4181[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_31[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                 ? __Vtemp4179[1U] : 
                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U])
                             : __Vtemp4181[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_31[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                 ? __Vtemp4179[2U] : 
                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U])
                             : __Vtemp4181[2U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_31[3U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                 ? __Vtemp4179[3U] : 
                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U])
                             : __Vtemp4181[3U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_31[4U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                 ? __Vtemp4179[4U] : 
                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U])
                             : __Vtemp4181[4U])));
    }
    __Vtemp4193[0U] = 1U;
    __Vtemp4193[1U] = 0U;
    __Vtemp4193[2U] = 0U;
    __Vtemp4194[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       << 1U);
    __Vtemp4194[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                     << 1U));
    __Vtemp4194[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                     << 1U));
    VL_ADD_W(3, __Vtemp4195, __Vtemp4193, __Vtemp4194);
    __Vtemp4199[0U] = 1U;
    __Vtemp4199[1U] = 0U;
    __Vtemp4199[2U] = 0U;
    VL_ADD_W(3, __Vtemp4200, __Vtemp4199, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q);
    if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vtemp4206[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]
                            : ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                ? __Vtemp4200[0U] : 
                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
        __Vtemp4206[1U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]
                            : ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                ? __Vtemp4200[1U] : 
                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
        __Vtemp4206[2U] = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]
                                  : ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                            ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                      ? __Vtemp4200[2U]
                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U])));
    } else {
        __Vtemp4206[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
        __Vtemp4206[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
        __Vtemp4206[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]);
    }
    VL_EXTEND_WW(66,65, __Vtemp4207, __Vtemp4206);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                         ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                             ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                << 1U) : __Vtemp4195[0U])
                         : __Vtemp4207[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                         ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                             ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                 >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                              << 1U))
                             : __Vtemp4195[1U]) : __Vtemp4207[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? 0U : (3U & ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                               ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                   ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                       >> 0x1fU) | 
                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                       << 1U)) : __Vtemp4195[2U])
                               : __Vtemp4207[2U])));
    }
    VL_EXTEND_WQ(127,64, __Vtemp4215, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata);
    VL_EXTEND_WQ(127,64, __Vtemp4216, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_38[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_39 = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_38[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp4215[0U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_w_data[0U]
                                      : __Vtemp4216[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_38[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp4215[1U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_w_data[1U]
                                      : __Vtemp4216[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_38[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp4215[2U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_w_data[2U]
                                      : __Vtemp4216[2U]));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_38[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp4215[3U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_w_data[3U]
                                      : __Vtemp4216[3U]));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_39 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb))
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                    ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb
                    : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb))));
    }
    VL_EXTEND_WW(133,130, __Vtemp4221, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data1);
    __Vtemp4222[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                       << 2U);
    __Vtemp4222[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                     << 2U));
    __Vtemp4222[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                     << 2U));
    __Vtemp4222[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                     << 2U));
    __Vtemp4222[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                     << 2U));
    VL_EXTEND_WW(133,132, __Vtemp4223, __Vtemp4222);
    VL_EXTEND_WW(133,130, __Vtemp4224, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_30[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_30[4U] = 0U;
        vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_39 = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_30[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4221[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4223[0U]
                                      : __Vtemp4224[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_30[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4221[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4223[1U]
                                      : __Vtemp4224[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_30[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4221[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4223[2U]
                                      : __Vtemp4224[2U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_30[3U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4221[3U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4223[3U]
                                      : __Vtemp4224[3U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_30[4U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4221[4U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4223[4U]
                                      : __Vtemp4224[4U]));
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
    VL_ADD_W(3, __Vtemp4233, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend);
    __Vtemp4234[0U] = 1U;
    __Vtemp4234[1U] = 0U;
    __Vtemp4234[2U] = 0U;
    __Vtemp4235[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp4235[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp4235[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp4236, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend, __Vtemp4235);
    VL_ADD_W(3, __Vtemp4237, __Vtemp4234, __Vtemp4236);
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))) {
        __Vtemp4240[0U] = __Vtemp4233[0U];
        __Vtemp4240[1U] = __Vtemp4233[1U];
        __Vtemp4240[2U] = (1U & __Vtemp4233[2U]);
    } else {
        __Vtemp4240[0U] = __Vtemp4237[0U];
        __Vtemp4240[1U] = __Vtemp4237[1U];
        __Vtemp4240[2U] = (1U & __Vtemp4237[2U]);
    }
    VL_EXTEND_WW(66,65, __Vtemp4241, __Vtemp4240);
    __Vtemp4242[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       << 1U);
    __Vtemp4242[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                     << 1U));
    __Vtemp4242[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                     << 1U));
    VL_EXTEND_WW(66,65, __Vtemp4243, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    VL_ADD_W(3, __Vtemp4244, __Vtemp4242, __Vtemp4243);
    __Vtemp4245[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       << 1U);
    __Vtemp4245[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                     << 1U));
    __Vtemp4245[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                     << 1U));
    __Vtemp4247[0U] = 1U;
    __Vtemp4247[1U] = 0U;
    __Vtemp4247[2U] = 0U;
    __Vtemp4248[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp4248[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp4248[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp4249, __Vtemp4247, __Vtemp4248);
    __Vtemp4250[0U] = __Vtemp4249[0U];
    __Vtemp4250[1U] = __Vtemp4249[1U];
    __Vtemp4250[2U] = (1U & __Vtemp4249[2U]);
    VL_EXTEND_WW(66,65, __Vtemp4251, __Vtemp4250);
    VL_ADD_W(3, __Vtemp4252, __Vtemp4245, __Vtemp4251);
    __Vtemp4256[0U] = 1U;
    __Vtemp4256[1U] = 0U;
    __Vtemp4256[2U] = 0U;
    __Vtemp4257[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp4257[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp4257[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp4258, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp4257);
    VL_ADD_W(3, __Vtemp4259, __Vtemp4256, __Vtemp4258);
    VL_ADD_W(3, __Vtemp4260, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vtemp4268[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]
                            : ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))
                                ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                    ? __Vtemp4259[0U]
                                    : __Vtemp4260[0U])
                                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
        __Vtemp4268[1U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]
                            : ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))
                                ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                    ? __Vtemp4259[1U]
                                    : __Vtemp4260[1U])
                                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
        __Vtemp4268[2U] = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]
                                  : ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                                            ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))
                                      ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                          ? __Vtemp4259[2U]
                                          : __Vtemp4260[2U])
                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U])));
    } else {
        __Vtemp4268[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
        __Vtemp4268[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
        __Vtemp4268[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
    }
    VL_EXTEND_WW(66,65, __Vtemp4269, __Vtemp4268);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_29[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_29[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? __Vtemp4241[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                      ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                          ? __Vtemp4244[0U]
                                          : __Vtemp4252[0U])
                                      : __Vtemp4269[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_29[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? __Vtemp4241[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                      ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                          ? __Vtemp4244[1U]
                                          : __Vtemp4252[1U])
                                      : __Vtemp4269[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_29[2U] 
            = (3U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                      ? __Vtemp4241[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                            ? ((1U 
                                                & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                   ^ 
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                                ? __Vtemp4244[2U]
                                                : __Vtemp4252[2U])
                                            : __Vtemp4269[2U])));
    }
}

void Vriscv_soc___024root___combo__TOP__9(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__11(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__12(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__13(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__14(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__15(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__16(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__17(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__18(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__19(Vriscv_soc___024root* vlSelf);

void Vriscv_soc___024root___eval(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval\n"); );
    // Body
    Vriscv_soc___024root___combo__TOP__9(vlSelf);
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vriscv_soc___024root___sequent__TOP__11(vlSelf);
        Vriscv_soc___024root___sequent__TOP__12(vlSelf);
        Vriscv_soc___024root___sequent__TOP__13(vlSelf);
        Vriscv_soc___024root___sequent__TOP__14(vlSelf);
        Vriscv_soc___024root___sequent__TOP__15(vlSelf);
        Vriscv_soc___024root___sequent__TOP__16(vlSelf);
        Vriscv_soc___024root___sequent__TOP__17(vlSelf);
        Vriscv_soc___024root___sequent__TOP__18(vlSelf);
        Vriscv_soc___024root___sequent__TOP__19(vlSelf);
    }
    Vriscv_soc___024root___combo__TOP__20(vlSelf);
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
