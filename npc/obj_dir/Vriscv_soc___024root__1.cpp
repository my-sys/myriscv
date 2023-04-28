// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__5(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__5\n"); );
    // Variables
    CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_13;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_14;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_17;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel;
    CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_180;
    CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_195;
    CData/*6:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_239;
    CData/*6:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_254;
    CData/*6:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_269;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_319;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_334;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_349;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_364;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_417;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_502;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_550;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_568;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_588;
    VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0;
    VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram0__DOT___GEN_21;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram0__DOT___GEN_42;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram1__DOT___GEN_21;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram1__DOT___GEN_42;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram2__DOT___GEN_21;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram2__DOT___GEN_42;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram3__DOT___GEN_21;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram3__DOT___GEN_42;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram4__DOT___GEN_21;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram4__DOT___GEN_42;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram5__DOT___GEN_21;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram5__DOT___GEN_42;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram6__DOT___GEN_21;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram6__DOT___GEN_42;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram7__DOT___GEN_21;
    VlWide<4>/*127:0*/ riscv_soc__DOT__sram7__DOT___GEN_42;
    VlWide<3>/*95:0*/ __Vtemp1754;
    VlWide<3>/*95:0*/ __Vtemp1759;
    VlWide<3>/*95:0*/ __Vtemp1763;
    VlWide<3>/*95:0*/ __Vtemp1783;
    VlWide<3>/*95:0*/ __Vtemp1787;
    VlWide<4>/*127:0*/ __Vtemp1794;
    VlWide<4>/*127:0*/ __Vtemp1795;
    VlWide<4>/*127:0*/ __Vtemp1830;
    VlWide<4>/*127:0*/ __Vtemp1872;
    VlWide<4>/*127:0*/ __Vtemp1914;
    VlWide<4>/*127:0*/ __Vtemp1956;
    VlWide<4>/*127:0*/ __Vtemp1967;
    VlWide<3>/*95:0*/ __Vtemp1970;
    VlWide<3>/*95:0*/ __Vtemp1971;
    VlWide<3>/*95:0*/ __Vtemp1972;
    VlWide<3>/*95:0*/ __Vtemp1973;
    VlWide<3>/*95:0*/ __Vtemp1974;
    VlWide<4>/*127:0*/ __Vtemp2007;
    VlWide<4>/*127:0*/ __Vtemp2049;
    VlWide<4>/*127:0*/ __Vtemp2091;
    VlWide<4>/*127:0*/ __Vtemp2133;
    VlWide<4>/*127:0*/ __Vtemp2145;
    VlWide<4>/*127:0*/ __Vtemp2146;
    VlWide<4>/*127:0*/ __Vtemp2149;
    VlWide<4>/*127:0*/ __Vtemp2150;
    VlWide<4>/*127:0*/ __Vtemp2183;
    VlWide<4>/*127:0*/ __Vtemp2221;
    VlWide<4>/*127:0*/ __Vtemp2259;
    VlWide<4>/*127:0*/ __Vtemp2297;
    VlWide<4>/*127:0*/ __Vtemp2335;
    VlWide<4>/*127:0*/ __Vtemp2377;
    VlWide<4>/*127:0*/ __Vtemp2419;
    VlWide<4>/*127:0*/ __Vtemp2461;
    VlWide<4>/*127:0*/ __Vtemp2473;
    VlWide<4>/*127:0*/ __Vtemp2474;
    VlWide<3>/*95:0*/ __Vtemp2478;
    VlWide<3>/*95:0*/ __Vtemp2481;
    VlWide<3>/*95:0*/ __Vtemp2484;
    VlWide<3>/*95:0*/ __Vtemp2489;
    VlWide<3>/*95:0*/ __Vtemp2491;
    VlWide<3>/*95:0*/ __Vtemp2495;
    VlWide<3>/*95:0*/ __Vtemp2504;
    VlWide<3>/*95:0*/ __Vtemp2506;
    VlWide<3>/*95:0*/ __Vtemp2508;
    VlWide<4>/*127:0*/ __Vtemp2540;
    VlWide<4>/*127:0*/ __Vtemp2582;
    VlWide<4>/*127:0*/ __Vtemp2624;
    VlWide<4>/*127:0*/ __Vtemp2666;
    VlWide<4>/*127:0*/ __Vtemp2714;
    VlWide<4>/*127:0*/ __Vtemp2752;
    VlWide<4>/*127:0*/ __Vtemp2790;
    VlWide<4>/*127:0*/ __Vtemp2828;
    VlWide<4>/*127:0*/ __Vtemp2852;
    VlWide<4>/*127:0*/ __Vtemp2859;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie;
    // Body
    riscv_soc__DOT__core__DOT__decode__DOT___T_239 
        = ((0x2002033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
            ? 0xaU : ((0x2003033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                       ? 0xeU : ((0x200003bU == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                  ? 3U : ((0x2006033U 
                                           == (0xfe00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                           ? 0x1aU : 
                                          ((0x2007033U 
                                            == (0xfe00707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                            ? 0x1eU
                                            : ((0x200703bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                ? 0x1fU
                                                : (
                                                   (0x200603bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 0x1bU
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 0xeU
                                                     : 
                                                    ((0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 0xaU
                                                      : 
                                                     ((0x100073U 
                                                       == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                                       ? 0x22U
                                                       : 
                                                      ((0x30200073U 
                                                        == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                                        ? 0x42U
                                                        : 
                                                       ((0x73U 
                                                         == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                                         ? 2U
                                                         : 
                                                        ((0x10200073U 
                                                          == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                                          ? 0x62U
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0xf00fffffU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                           ? 1U
                                                           : 
                                                          ((0x100fU 
                                                            == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                                            ? 5U
                                                            : 
                                                           ((0x12000073U 
                                                             == 
                                                             (0xfe007fffU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                             ? 2U
                                                             : 0U))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_550 
        = ((0x501bU != (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
           & ((0x503bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
              | ((0x40000033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                 | ((0x4000003bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                    | ((0x2023U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                       | ((0x6033U == (0xfe00707fU 
                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                          | ((0x6013U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                             & ((0x4033U == (0xfe00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                | ((0x4013U != (0x707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                   & ((0x2004033U == 
                                       (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                      | ((0x2005033U 
                                          == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                         | ((0x200503bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                            | ((0x200403bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                               | ((0x2000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                  | ((0x2001033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                     | ((0x2002033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                        | ((0x2003033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                           | ((0x200003bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                              | ((0x2006033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                 | ((0x2007033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                    | ((0x200703bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                       | (0x200603bU 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)))))))))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_319 
        = ((0x2004033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
            ? 6U : ((0x2005033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                     ? 6U : ((0x200503bU == (0xfe00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                              ? 6U : ((0x200403bU == 
                                       (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                       ? 6U : ((0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                ? 6U
                                                : (
                                                   (0x2001033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 6U
                                                    : 
                                                   ((0x2002033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 6U
                                                     : 
                                                    ((0x2003033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 6U
                                                      : 
                                                     ((0x200003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 6U
                                                       : 
                                                      ((0x2006033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                        ? 6U
                                                        : 
                                                       ((0x2007033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                         ? 6U
                                                         : 
                                                        ((0x200703bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                          ? 6U
                                                          : 
                                                         ((0x200603bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                           ? 6U
                                                           : 
                                                          ((0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                            ? 2U
                                                            : 
                                                           ((0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                             ? 0xcU
                                                             : 0U)))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret 
        = ((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) | (0x18U == 
                                           (0x1fU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U))));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i) 
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
           & ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2)));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid) 
             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))) 
            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    riscv_soc__DOT__core__DOT__decode__DOT___T_417 
        = ((0x1023U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
           & ((0x1033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
              | ((0x1013U == (0xfc00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                 | ((0x101bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                    | ((0x103bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                       | ((0x2033U == (0xfe00707fU 
                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                          | ((0x2013U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                             | ((0x3013U == (0x707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                | ((0x3033U == (0xfe00707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                   | ((0x40005033U 
                                       == (0xfe00707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                      | ((0x40005013U 
                                          == (0xfc00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                         | ((0x4000501bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                            | ((0x4000503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                               | ((0x5033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                  | ((0x5013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                     | ((0x501bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                        | ((0x503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                           | ((0x40000033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                              | ((0x4000003bU 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_398))))))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_502 
        = ((0x5073U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
           & ((0x3003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
              | ((3U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                 | ((0x4003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                    | ((0x1003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                       | ((0x5003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                          | ((0x37U != (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                             & ((0x2003U == (0x707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                | ((0x6003U == (0x707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                   | ((0x3023U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                      | ((0x23U == 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                         | ((0x1023U 
                                             == (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                            | ((0x1033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                               | ((0x1013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                  | ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                     | ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                        | ((0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                           | ((0x2013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_484)))))))))))))))))));
    if ((0x501bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))) {
        riscv_soc__DOT__core__DOT__decode__DOT___T_180 = 2U;
        riscv_soc__DOT__core__DOT__decode__DOT___T_254 = 0x15U;
    } else {
        riscv_soc__DOT__core__DOT__decode__DOT___T_180 
            = ((0x503bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                ? 2U : ((0x40000033U == (0xfe00707fU 
                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                         ? 2U : ((0x4000003bU == (0xfe00707fU 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                  ? 2U : ((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                           ? 5U : (
                                                   (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 2U
                                                     : 
                                                    ((0x4033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 2U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x2004033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                        ? 3U
                                                        : 
                                                       ((0x2005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                         ? 3U
                                                         : 
                                                        ((0x200503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                          ? 3U
                                                          : 
                                                         ((0x200403bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                           ? 3U
                                                           : 
                                                          ((0x2000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                            ? 3U
                                                            : 
                                                           ((0x2001033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                             ? 3U
                                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_165)))))))))))))));
        riscv_soc__DOT__core__DOT__decode__DOT___T_254 
            = ((0x503bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                ? 0x17U : ((0x40000033U == (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                            ? 0x22U : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                        ? 0x23U : (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 0xaU
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 0x1aU
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 0x18U
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 0x12U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                        ? 0x10U
                                                        : 
                                                       ((0x2004033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                         ? 0x12U
                                                         : 
                                                        ((0x2005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                          ? 0x16U
                                                          : 
                                                         ((0x200503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                           ? 0x17U
                                                           : 
                                                          ((0x200403bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                            ? 0x13U
                                                            : 
                                                           ((0x2000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                             ? 2U
                                                             : 
                                                            ((0x2001033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                              ? 6U
                                                              : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_239)))))))))))))));
    }
    riscv_soc__DOT__core__DOT__decode__DOT___T_568 
        = ((0x6003U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
           & ((0x3023U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
              | ((0x23U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                 | ((0x1023U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                    | ((0x1033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                       | ((0x1013U != (0xfc00707fU 
                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                          & ((0x101bU != (0xfe00707fU 
                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                             & ((0x103bU == (0xfe00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                | ((0x2033U == (0xfe00707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                   | ((0x2013U != (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                      & ((0x3013U != 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                         & ((0x3033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                            | ((0x40005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                               | ((0x40005013U 
                                                   != 
                                                   (0xfc00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                  & ((0x4000501bU 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                     & ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                        | ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                           | ((0x5013U 
                                                               != 
                                                               (0xfc00707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                              & (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_550)))))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_334 
        = ((0x40005033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
            ? 6U : ((0x40005013U == (0xfc00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                     ? 4U : ((0x4000501bU == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                              ? 4U : ((0x4000503bU 
                                       == (0xfe00707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                       ? 6U : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                ? 6U
                                                : (
                                                   (0x5013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 4U
                                                    : 
                                                   ((0x501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 4U
                                                     : 
                                                    ((0x503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 6U
                                                      : 
                                                     ((0x40000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 6U
                                                       : 
                                                      ((0x4000003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                        ? 6U
                                                        : 
                                                       ((0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                         ? 3U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                          ? 6U
                                                          : 
                                                         ((0x6013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                           ? 0xcU
                                                           : 
                                                          ((0x4033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                            ? 6U
                                                            : 
                                                           ((0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                             ? 0xcU
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_319))))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_minstret_T_3 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit)
            ? (1ULL + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret)
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret);
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
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc 
        = (((0x341U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
        = (((0x300U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus);
    riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie 
        = (((0x304U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data 
        = ((0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm
            : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data));
    riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
             ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
             : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data) 
           + (((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                 >> 0x1fU) ? 0xffffffffU
                                 : 0U))) << 0x20U) 
              | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_434 
        = ((0x1063U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
           & ((0x3073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
              | ((0x7073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                 | ((0x2073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                    | ((0x6073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                       | ((0x1073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                          | ((0x5073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                             | ((0x3003U == (0x707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                | ((3U == (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                   | ((0x4003U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                      | ((0x1003U == 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                         | ((0x5003U 
                                             == (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                            | ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                               | ((0x2003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                  | ((0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                     | ((0x3023U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                        & ((0x23U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                           & (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_417))))))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg 
        = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
           | ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
              | ((0x1bU == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                 | ((0x3bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                    | ((0x7033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                       | ((0x7013U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                          | ((0x17U != (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                             & ((0x63U == (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                | ((0x5063U == (0x707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                   | ((0x7063U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                      | ((0x4063U == 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                         | ((0x6063U 
                                             == (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                            | ((0x1063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                               | ((0x3073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                  | ((0x7073U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                     & ((0x2073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                        | ((0x6073U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                           & ((0x1073U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                              | (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_502)))))))))))))))))));
    if ((0x1023U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))) {
        riscv_soc__DOT__core__DOT__decode__DOT___T_195 = 5U;
        riscv_soc__DOT__core__DOT__decode__DOT___T_269 = 6U;
    } else {
        riscv_soc__DOT__core__DOT__decode__DOT___T_195 
            = ((0x1033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                ? 2U : ((0x1013U == (0xfc00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                         ? 2U : ((0x101bU == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                  ? 2U : ((0x103bU 
                                           == (0xfe00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                           ? 2U : (
                                                   (0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 2U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 2U
                                                      : 
                                                     ((0x3033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                        ? 2U
                                                        : 
                                                       ((0x40005013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                         ? 2U
                                                         : 
                                                        ((0x4000501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                          ? 2U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                           ? 2U
                                                           : 
                                                          ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                            ? 2U
                                                            : 
                                                           ((0x5013U 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                             ? 2U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_180)))))))))))))));
        riscv_soc__DOT__core__DOT__decode__DOT___T_269 
            = ((0x1033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                ? 6U : ((0x1013U == (0xfc00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                         ? 4U : ((0x101bU == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                  ? 5U : ((0x103bU 
                                           == (0xfe00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                           ? 7U : (
                                                   (0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 0x2aU
                                                    : 
                                                   ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 0x28U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 0x2cU
                                                      : 
                                                     ((0x3033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 0x2eU
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                        ? 0x36U
                                                        : 
                                                       ((0x40005013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                         ? 0x34U
                                                         : 
                                                        ((0x4000501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                          ? 0x35U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                           ? 0x37U
                                                           : 
                                                          ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                            ? 0x16U
                                                            : 
                                                           ((0x5013U 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                             ? 0x14U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_254)))))))))))))));
    }
    riscv_soc__DOT__core__DOT__decode__DOT___T_588 
        = ((0x17U != (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
           & ((0x63U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
              | ((0x5063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                 | ((0x7063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                    | ((0x4063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                       | ((0x6063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                          | ((0x1063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                             | ((0x3073U != (0x707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                & ((0x7073U != (0x707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                   & ((0x2073U != (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                      & ((0x6073U != 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                         & ((0x1073U 
                                             != (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                            & ((0x5073U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                               & ((0x3003U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                  & ((3U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                     & ((0x4003U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                        & ((0x1003U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                           & ((0x5003U 
                                                               != 
                                                               (0x707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                              & ((0x37U 
                                                                  != 
                                                                  (0x7fU 
                                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                 & ((0x2003U 
                                                                     != 
                                                                     (0x707fU 
                                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                    & (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_568)))))))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_349 
        = ((0x5003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
            ? 0xcU : ((0x37U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                       ? 1U : ((0x2003U == (0x707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                ? 0xcU : ((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                           ? 0xcU : 
                                          ((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                            ? 3U : 
                                           ((0x23U 
                                             == (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                             ? 3U : 
                                            ((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                              ? 3U : 
                                             ((0x1033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                               ? 6U
                                               : ((0x1013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                   ? 4U
                                                   : 
                                                  ((0x101bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 4U
                                                    : 
                                                   ((0x103bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 6U
                                                     : 
                                                    ((0x2033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 6U
                                                      : 
                                                     ((0x2013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 0xcU
                                                       : 
                                                      ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                        ? 0xcU
                                                        : 
                                                       ((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                         ? 6U
                                                         : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_334))))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip) 
            & (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                       >> 3U))) & (IData)((riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie 
                                           >> 3U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq 
        = (((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
             <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime) 
            & (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                       >> 3U))) & (IData)((riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie 
                                           >> 7U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data 
           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
        = ((~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data) 
           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data);
    VL_EXTEND_WQ(65,64, __Vtemp1754, riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
    if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
            = (IData)(riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
            = (IData)(((1U & (IData)((riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                      >> 0x1fU))) ? 0x1ffffffffULL
                        : 0ULL));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
            = (IData)((((1U & (IData)((riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                       >> 0x1fU))) ? 0x1ffffffffULL
                         : 0ULL) >> 0x20U));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data)
                : __Vtemp1754[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                           >> 0x20U)) : __Vtemp1754[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? (1U & (IData)((riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                 >> 0x3fU))) : __Vtemp1754[2U]);
    }
    VL_EXTEND_WI(65,32, __Vtemp1759, (IData)(riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data));
    if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[0U] 
            = __Vtemp1759[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[1U] 
            = __Vtemp1759[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[2U] 
            = __Vtemp1759[2U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[0U] 
            = (IData)(riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[1U] 
            = (IData)(((1U & (IData)((riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                      >> 0x1fU))) ? 0x1ffffffffULL
                        : 0ULL));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[2U] 
            = (IData)((((1U & (IData)((riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                       >> 0x1fU))) ? 0x1ffffffffULL
                         : 0ULL) >> 0x20U));
    }
    VL_EXTEND_WQ(65,64, __Vtemp1763, riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
    if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U] 
            = __Vtemp1763[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U] 
            = __Vtemp1763[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U] 
            = __Vtemp1763[2U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U] 
            = (IData)(riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U] 
            = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U] 
            = (1U & (IData)((riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                             >> 0x3fU)));
    }
    if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2 
            = (((QData)((IData)(((1U & (IData)((riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[0U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? 0U : ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                       >> 0x1fU))) ? 0xffffffffU
                         : 0U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[1U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? 0U : ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                       >> 0x1fU))) ? 0xffffffffU
                         : 0U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[2U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? 0U : ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                       >> 0x1fU))) ? 1U
                         : 0U));
    } else {
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2 
            = riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[0U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? 0U : ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                       >> 0x3fU))) ? 0xffffffffU
                         : 0U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[1U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? 0U : ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                       >> 0x3fU))) ? 0xffffffffU
                         : 0U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[2U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? 0U : ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                       >> 0x3fU))) ? 1U
                         : 0U));
    }
    VL_EXTEND_WI(65,32, __Vtemp1783, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data));
    VL_EXTEND_WQ(65,64, __Vtemp1787, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
    if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? __Vtemp1783[0U] : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? __Vtemp1783[1U] : (IData)(((1U & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                            >> 0x1fU)))
                                              ? 0x1ffffffffULL
                                              : 0ULL)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? __Vtemp1783[2U] : (IData)((((1U & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                             >> 0x1fU)))
                                               ? 0x1ffffffffULL
                                               : 0ULL) 
                                             >> 0x20U)));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? __Vtemp1787[0U] : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? __Vtemp1787[1U] : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                             >> 0x20U)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? __Vtemp1787[2U] : (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                   >> 0x3fU))));
    }
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
        = (((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                          >> 2U))) ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data
             : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
           + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4 
        = (((QData)((IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                            >> 0x1fU)))
                              ? 0xffffffffU : 0U))) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)));
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
    VL_EXTEND_WQ(127,64, __Vtemp1794, (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                        : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data));
    VL_SHIFTL_WWI(127,127,6, __Vtemp1795, __Vtemp1794, 
                  (0x38U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr) 
                            << 3U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U] 
        = __Vtemp1795[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U] 
        = __Vtemp1795[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U] 
        = __Vtemp1795[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U] 
        = (0x7fffffffU & __Vtemp1795[3U]);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready)) 
            & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush))) 
           & (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)));
    riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
             >> 3U) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
             >> 2U) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid 
        = (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
              >> 1U) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
            & (6U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    if ((0x7073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_210 = 4U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_284 = 0x1eU;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_210 
            = ((0x2073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                ? 4U : ((0x6073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                         ? 4U : ((0x1073U == (0x707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                  ? 4U : ((0x5073U 
                                           == (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                           ? 4U : (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 5U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 5U
                                                     : 
                                                    ((0x4003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 5U
                                                      : 
                                                     ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 5U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                        ? 5U
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                         ? 2U
                                                         : 
                                                        ((0x2003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                          ? 5U
                                                          : 
                                                         ((0x6003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                           ? 5U
                                                           : 
                                                          ((0x3023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                            ? 5U
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                             ? 5U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_195)))))))))))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_284 
            = ((0x2073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                ? 0xaU : ((0x6073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                           ? 0x1aU : ((0x1073U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                       ? 6U : ((0x5073U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                ? 0x16U
                                                : (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 0xcU
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x4003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 0x10U
                                                      : 
                                                     ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 4U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                        ? 0x14U
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                         ? 0x40U
                                                         : 
                                                        ((0x2003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                          ? 8U
                                                          : 
                                                         ((0x6003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                           ? 0x18U
                                                           : 
                                                          ((0x3023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                            ? 0xeU
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                             ? 2U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_269)))))))))))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg 
        = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
           | ((0x13U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
              & ((0x1bU != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                 & ((0x3bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                    | ((0x7033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                       | ((0x7013U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                          & (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_588)))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_364 
        = ((0x5063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
            ? 7U : ((0x7063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                     ? 7U : ((0x4063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                              ? 7U : ((0x6063U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                       ? 7U : ((0x1063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                ? 7U
                                                : (
                                                   (0x3073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 5U
                                                    : 
                                                   ((0x7073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 5U
                                                     : 
                                                    ((0x2073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 5U
                                                      : 
                                                     ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 5U
                                                       : 
                                                      ((0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                        ? 5U
                                                        : 
                                                       ((0x5073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                         ? 5U
                                                         : 
                                                        ((0x3003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                          ? 0xcU
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                           ? 0xcU
                                                           : 
                                                          ((0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                            ? 0xcU
                                                            : 
                                                           ((0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                             ? 0xcU
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_349))))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
    if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[2U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U];
    }
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
        = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
        = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_5 
        = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) 
                 | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))
                     ? (~ (IData)(riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram))
                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
    if (riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag)) 
               & 1U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag) 
               & 1U);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write = 0U;
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid 
        = ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid) 
           & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                 >> 4U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid 
        = ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
              >> 4U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
              >> 1U));
    riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType 
        = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
            ? 6U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                     ? 0xcU : ((0x1bU == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                ? 0xcU : ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                           ? 6U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 6U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 0xcU
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 1U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 7U
                                                       : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_364)))))))));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data 
        = (0x3fU & ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                     ? (0x1fU & (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))
                     : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq 
        = (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
           == riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
        = ((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                         >> 5U))) ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
            : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
    if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp1830[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[0U];
        __Vtemp1830[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[1U];
        __Vtemp1830[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[2U];
        __Vtemp1830[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[3U];
    } else {
        __Vtemp1830[0U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[0U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[0U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[0U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[0U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[0U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[0U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[0U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[0U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[0U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[0U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[0U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[0U])))))))))))))));
        __Vtemp1830[1U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[1U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[1U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[1U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[1U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[1U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[1U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[1U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[1U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[1U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[1U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[1U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[1U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[1U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[1U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[1U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[1U])))))))))))))));
        __Vtemp1830[2U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[2U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[2U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[2U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[2U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[2U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[2U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[2U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[2U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[2U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[2U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[2U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[2U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[2U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[2U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[2U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[2U])))))))))))))));
        __Vtemp1830[3U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[3U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[3U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[3U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[3U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[3U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[3U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[3U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[3U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[3U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[3U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[3U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[3U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[3U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[3U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[3U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[3U])))))))))))))));
    }
    if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram0__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[0U];
        riscv_soc__DOT__sram0__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[1U];
        riscv_soc__DOT__sram0__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[2U];
        riscv_soc__DOT__sram0__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[3U];
    } else {
        riscv_soc__DOT__sram0__DOT___GEN_21[0U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[0U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[0U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[0U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[0U]
                                                       : 
                                                      __Vtemp1830[0U]))));
        riscv_soc__DOT__sram0__DOT___GEN_21[1U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[1U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[1U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[1U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[1U]
                                                       : 
                                                      __Vtemp1830[1U]))));
        riscv_soc__DOT__sram0__DOT___GEN_21[2U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[2U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[2U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[2U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[2U]
                                                       : 
                                                      __Vtemp1830[2U]))));
        riscv_soc__DOT__sram0__DOT___GEN_21[3U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[3U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[3U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[3U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[3U]
                                                       : 
                                                      __Vtemp1830[3U]))));
    }
    if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
        __Vtemp1872[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[0U];
        __Vtemp1872[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[1U];
        __Vtemp1872[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[2U];
        __Vtemp1872[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[3U];
    } else {
        __Vtemp1872[0U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[0U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[0U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[0U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[0U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[0U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[0U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[0U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[0U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[0U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[0U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[0U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[0U])))))))))))))));
        __Vtemp1872[1U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[1U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[1U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[1U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[1U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[1U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[1U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[1U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[1U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[1U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[1U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[1U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[1U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[1U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[1U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[1U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[1U])))))))))))))));
        __Vtemp1872[2U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[2U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[2U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[2U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[2U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[2U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[2U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[2U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[2U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[2U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[2U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[2U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[2U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[2U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[2U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[2U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[2U])))))))))))))));
        __Vtemp1872[3U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[3U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[3U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[3U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[3U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[3U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[3U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[3U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[3U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[3U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[3U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[3U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[3U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[3U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[3U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[3U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[3U])))))))))))))));
    }
    if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
        riscv_soc__DOT__sram1__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[0U];
        riscv_soc__DOT__sram1__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[1U];
        riscv_soc__DOT__sram1__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[2U];
        riscv_soc__DOT__sram1__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[3U];
    } else {
        riscv_soc__DOT__sram1__DOT___GEN_21[0U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[0U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[0U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[0U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[0U]
                                                       : 
                                                      __Vtemp1872[0U]))));
        riscv_soc__DOT__sram1__DOT___GEN_21[1U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[1U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[1U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[1U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[1U]
                                                       : 
                                                      __Vtemp1872[1U]))));
        riscv_soc__DOT__sram1__DOT___GEN_21[2U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[2U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[2U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[2U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[2U]
                                                       : 
                                                      __Vtemp1872[2U]))));
        riscv_soc__DOT__sram1__DOT___GEN_21[3U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[3U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[3U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[3U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[3U]
                                                       : 
                                                      __Vtemp1872[3U]))));
    }
    if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
        __Vtemp1914[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[0U];
        __Vtemp1914[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[1U];
        __Vtemp1914[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[2U];
        __Vtemp1914[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[3U];
    } else {
        __Vtemp1914[0U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[0U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[0U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[0U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[0U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[0U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[0U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[0U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[0U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[0U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[0U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[0U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[0U])))))))))))))));
        __Vtemp1914[1U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[1U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[1U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[1U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[1U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[1U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[1U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[1U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[1U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[1U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[1U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[1U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[1U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[1U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[1U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[1U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[1U])))))))))))))));
        __Vtemp1914[2U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[2U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[2U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[2U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[2U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[2U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[2U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[2U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[2U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[2U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[2U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[2U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[2U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[2U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[2U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[2U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[2U])))))))))))))));
        __Vtemp1914[3U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[3U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[3U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[3U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[3U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[3U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[3U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[3U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[3U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[3U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[3U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[3U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[3U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[3U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[3U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[3U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[3U])))))))))))))));
    }
    if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
        riscv_soc__DOT__sram2__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[0U];
        riscv_soc__DOT__sram2__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[1U];
        riscv_soc__DOT__sram2__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[2U];
        riscv_soc__DOT__sram2__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[3U];
    } else {
        riscv_soc__DOT__sram2__DOT___GEN_21[0U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[0U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[0U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[0U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[0U]
                                                       : 
                                                      __Vtemp1914[0U]))));
        riscv_soc__DOT__sram2__DOT___GEN_21[1U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[1U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[1U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[1U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[1U]
                                                       : 
                                                      __Vtemp1914[1U]))));
        riscv_soc__DOT__sram2__DOT___GEN_21[2U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[2U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[2U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[2U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[2U]
                                                       : 
                                                      __Vtemp1914[2U]))));
        riscv_soc__DOT__sram2__DOT___GEN_21[3U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[3U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[3U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[3U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[3U]
                                                       : 
                                                      __Vtemp1914[3U]))));
    }
    if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
        __Vtemp1956[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[0U];
        __Vtemp1956[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[1U];
        __Vtemp1956[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[2U];
        __Vtemp1956[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[3U];
    } else {
        __Vtemp1956[0U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[0U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[0U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[0U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[0U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[0U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[0U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[0U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[0U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[0U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[0U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[0U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[0U])))))))))))))));
        __Vtemp1956[1U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[1U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[1U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[1U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[1U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[1U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[1U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[1U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[1U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[1U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[1U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[1U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[1U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[1U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[1U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[1U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[1U])))))))))))))));
        __Vtemp1956[2U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[2U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[2U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[2U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[2U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[2U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[2U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[2U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[2U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[2U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[2U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[2U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[2U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[2U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[2U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[2U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[2U])))))))))))))));
        __Vtemp1956[3U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[3U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[3U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[3U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[3U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[3U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[3U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[3U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[3U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[3U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[3U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[3U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[3U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[3U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[3U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[3U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[3U])))))))))))))));
    }
    if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
        riscv_soc__DOT__sram3__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[0U];
        riscv_soc__DOT__sram3__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[1U];
        riscv_soc__DOT__sram3__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[2U];
        riscv_soc__DOT__sram3__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[3U];
    } else {
        riscv_soc__DOT__sram3__DOT___GEN_21[0U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[0U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[0U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[0U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[0U]
                                                       : 
                                                      __Vtemp1956[0U]))));
        riscv_soc__DOT__sram3__DOT___GEN_21[1U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[1U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[1U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[1U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[1U]
                                                       : 
                                                      __Vtemp1956[1U]))));
        riscv_soc__DOT__sram3__DOT___GEN_21[2U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[2U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[2U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[2U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[2U]
                                                       : 
                                                      __Vtemp1956[2U]))));
        riscv_soc__DOT__sram3__DOT___GEN_21[3U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[3U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[3U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[3U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[3U]
                                                       : 
                                                      __Vtemp1956[3U]))));
    }
    riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index) 
              == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                   >> 4U)))));
    riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index) 
              == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                   >> 4U)))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22 
        = (1U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                  ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid))
                  : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready)
                      : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready)))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_39 
        = (1U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                  ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid))
                  : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready)
                      : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                          ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready)
                          : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T 
        = ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel)
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb
            : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb)));
    VL_EXTEND_WQ(127,64, __Vtemp1967, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata);
    if (riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel) {
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
        riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U] 
            = __Vtemp1967[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U] 
            = __Vtemp1967[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[2U] 
            = __Vtemp1967[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[3U] 
            = __Vtemp1967[3U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
        riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr;
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_47 
        = ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
            ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                  >> 0x1fU) ? 0xfffffU : 0U) << 0xcU) 
               | ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                             << 4U)) | ((0x7e0U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                            >> 7U)))))
            : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                      >> 0x1fU) ? 0xfffU : 0U) << 0x14U) 
                   | ((0xff000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst) 
                      | ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                    >> 9U)) | (0x7feU 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                  >> 0x14U)))))
                : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                    ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                          >> 0x1fU) ? 0xfffffU : 0U) 
                        << 0xcU) | ((0xfe0U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 7U))))
                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                        ? (0xfffff000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                        : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                            ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                  >> 0x1fU) ? 0xfffffU
                                  : 0U) << 0xcU) | 
                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                >> 0x14U)) : 0U)))));
    VL_EXTEND_WQ(65,64, __Vtemp1970, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data);
    VL_EXTEND_WQ(65,64, __Vtemp1971, ((1U == (3U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 5U)))
                                       ? (~ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                       : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    VL_ADD_W(3, __Vtemp1972, __Vtemp1970, __Vtemp1971);
    VL_EXTEND_WI(65,1, __Vtemp1973, (1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 5U))));
    VL_ADD_W(3, __Vtemp1974, __Vtemp1972, __Vtemp1973);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[0U] 
        = __Vtemp1974[0U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U] 
        = __Vtemp1974[1U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U] 
        = (1U & __Vtemp1974[2U]);
    if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp2007[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[0U];
        __Vtemp2007[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[1U];
        __Vtemp2007[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[2U];
        __Vtemp2007[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[3U];
    } else {
        __Vtemp2007[0U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[0U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[0U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[0U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[0U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[0U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[0U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[0U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[0U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[0U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[0U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[0U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[0U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[0U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[0U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[0U]
                                                            : 
                                                           riscv_soc__DOT__sram0__DOT___GEN_21[0U])))))))))))))));
        __Vtemp2007[1U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[1U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[1U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[1U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[1U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[1U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[1U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[1U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[1U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[1U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[1U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[1U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[1U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[1U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[1U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[1U]
                                                            : 
                                                           riscv_soc__DOT__sram0__DOT___GEN_21[1U])))))))))))))));
        __Vtemp2007[2U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[2U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[2U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[2U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[2U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[2U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[2U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[2U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[2U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[2U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[2U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[2U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[2U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[2U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[2U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[2U]
                                                            : 
                                                           riscv_soc__DOT__sram0__DOT___GEN_21[2U])))))))))))))));
        __Vtemp2007[3U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[3U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[3U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[3U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[3U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[3U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[3U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[3U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[3U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[3U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[3U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[3U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[3U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[3U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[3U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[3U]
                                                            : 
                                                           riscv_soc__DOT__sram0__DOT___GEN_21[3U])))))))))))))));
    }
    if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram0__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[0U];
        riscv_soc__DOT__sram0__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[1U];
        riscv_soc__DOT__sram0__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[2U];
        riscv_soc__DOT__sram0__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[3U];
    } else {
        riscv_soc__DOT__sram0__DOT___GEN_42[0U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[0U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[0U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[0U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[0U]
                                                       : 
                                                      __Vtemp2007[0U]))));
        riscv_soc__DOT__sram0__DOT___GEN_42[1U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[1U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[1U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[1U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[1U]
                                                       : 
                                                      __Vtemp2007[1U]))));
        riscv_soc__DOT__sram0__DOT___GEN_42[2U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[2U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[2U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[2U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[2U]
                                                       : 
                                                      __Vtemp2007[2U]))));
        riscv_soc__DOT__sram0__DOT___GEN_42[3U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[3U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[3U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[3U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[3U]
                                                       : 
                                                      __Vtemp2007[3U]))));
    }
    if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
        __Vtemp2049[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[0U];
        __Vtemp2049[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[1U];
        __Vtemp2049[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[2U];
        __Vtemp2049[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[3U];
    } else {
        __Vtemp2049[0U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[0U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[0U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[0U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[0U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[0U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[0U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[0U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[0U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[0U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[0U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[0U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[0U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[0U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[0U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[0U]
                                                            : 
                                                           riscv_soc__DOT__sram1__DOT___GEN_21[0U])))))))))))))));
        __Vtemp2049[1U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[1U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[1U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[1U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[1U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[1U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[1U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[1U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[1U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[1U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[1U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[1U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[1U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[1U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[1U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[1U]
                                                            : 
                                                           riscv_soc__DOT__sram1__DOT___GEN_21[1U])))))))))))))));
        __Vtemp2049[2U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[2U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[2U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[2U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[2U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[2U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[2U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[2U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[2U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[2U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[2U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[2U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[2U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[2U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[2U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[2U]
                                                            : 
                                                           riscv_soc__DOT__sram1__DOT___GEN_21[2U])))))))))))))));
        __Vtemp2049[3U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[3U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[3U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[3U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[3U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[3U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[3U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[3U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[3U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[3U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[3U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[3U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[3U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[3U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[3U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[3U]
                                                            : 
                                                           riscv_soc__DOT__sram1__DOT___GEN_21[3U])))))))))))))));
    }
    if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
        riscv_soc__DOT__sram1__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[0U];
        riscv_soc__DOT__sram1__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[1U];
        riscv_soc__DOT__sram1__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[2U];
        riscv_soc__DOT__sram1__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[3U];
    } else {
        riscv_soc__DOT__sram1__DOT___GEN_42[0U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[0U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[0U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[0U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[0U]
                                                       : 
                                                      __Vtemp2049[0U]))));
        riscv_soc__DOT__sram1__DOT___GEN_42[1U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[1U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[1U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[1U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[1U]
                                                       : 
                                                      __Vtemp2049[1U]))));
        riscv_soc__DOT__sram1__DOT___GEN_42[2U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[2U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[2U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[2U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[2U]
                                                       : 
                                                      __Vtemp2049[2U]))));
        riscv_soc__DOT__sram1__DOT___GEN_42[3U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[3U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[3U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[3U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[3U]
                                                       : 
                                                      __Vtemp2049[3U]))));
    }
    if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
        __Vtemp2091[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[0U];
        __Vtemp2091[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[1U];
        __Vtemp2091[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[2U];
        __Vtemp2091[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[3U];
    } else {
        __Vtemp2091[0U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[0U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[0U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[0U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[0U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[0U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[0U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[0U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[0U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[0U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[0U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[0U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[0U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[0U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[0U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[0U]
                                                            : 
                                                           riscv_soc__DOT__sram2__DOT___GEN_21[0U])))))))))))))));
        __Vtemp2091[1U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[1U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[1U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[1U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[1U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[1U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[1U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[1U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[1U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[1U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[1U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[1U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[1U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[1U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[1U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[1U]
                                                            : 
                                                           riscv_soc__DOT__sram2__DOT___GEN_21[1U])))))))))))))));
        __Vtemp2091[2U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[2U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[2U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[2U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[2U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[2U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[2U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[2U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[2U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[2U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[2U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[2U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[2U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[2U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[2U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[2U]
                                                            : 
                                                           riscv_soc__DOT__sram2__DOT___GEN_21[2U])))))))))))))));
        __Vtemp2091[3U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[3U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[3U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[3U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[3U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[3U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[3U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[3U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[3U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[3U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[3U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[3U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[3U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[3U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[3U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[3U]
                                                            : 
                                                           riscv_soc__DOT__sram2__DOT___GEN_21[3U])))))))))))))));
    }
    if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
        riscv_soc__DOT__sram2__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[0U];
        riscv_soc__DOT__sram2__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[1U];
        riscv_soc__DOT__sram2__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[2U];
        riscv_soc__DOT__sram2__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[3U];
    } else {
        riscv_soc__DOT__sram2__DOT___GEN_42[0U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[0U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[0U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[0U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[0U]
                                                       : 
                                                      __Vtemp2091[0U]))));
        riscv_soc__DOT__sram2__DOT___GEN_42[1U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[1U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[1U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[1U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[1U]
                                                       : 
                                                      __Vtemp2091[1U]))));
        riscv_soc__DOT__sram2__DOT___GEN_42[2U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[2U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[2U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[2U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[2U]
                                                       : 
                                                      __Vtemp2091[2U]))));
        riscv_soc__DOT__sram2__DOT___GEN_42[3U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[3U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[3U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[3U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[3U]
                                                       : 
                                                      __Vtemp2091[3U]))));
    }
    if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
        __Vtemp2133[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[0U];
        __Vtemp2133[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[1U];
        __Vtemp2133[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[2U];
        __Vtemp2133[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[3U];
    } else {
        __Vtemp2133[0U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[0U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[0U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[0U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[0U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[0U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[0U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[0U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[0U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[0U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[0U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[0U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[0U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[0U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[0U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[0U]
                                                            : 
                                                           riscv_soc__DOT__sram3__DOT___GEN_21[0U])))))))))))))));
        __Vtemp2133[1U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[1U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[1U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[1U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[1U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[1U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[1U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[1U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[1U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[1U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[1U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[1U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[1U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[1U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[1U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[1U]
                                                            : 
                                                           riscv_soc__DOT__sram3__DOT___GEN_21[1U])))))))))))))));
        __Vtemp2133[2U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[2U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[2U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[2U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[2U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[2U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[2U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[2U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[2U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[2U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[2U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[2U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[2U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[2U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[2U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[2U]
                                                            : 
                                                           riscv_soc__DOT__sram3__DOT___GEN_21[2U])))))))))))))));
        __Vtemp2133[3U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[3U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[3U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[3U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[3U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[3U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[3U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[3U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[3U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[3U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[3U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[3U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[3U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[3U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[3U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[3U]
                                                            : 
                                                           riscv_soc__DOT__sram3__DOT___GEN_21[3U])))))))))))))));
    }
    if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
        riscv_soc__DOT__sram3__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[0U];
        riscv_soc__DOT__sram3__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[1U];
        riscv_soc__DOT__sram3__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[2U];
        riscv_soc__DOT__sram3__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[3U];
    } else {
        riscv_soc__DOT__sram3__DOT___GEN_42[0U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[0U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[0U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[0U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[0U]
                                                       : 
                                                      __Vtemp2133[0U]))));
        riscv_soc__DOT__sram3__DOT___GEN_42[1U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[1U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[1U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[1U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[1U]
                                                       : 
                                                      __Vtemp2133[1U]))));
        riscv_soc__DOT__sram3__DOT___GEN_42[2U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[2U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[2U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[2U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[2U]
                                                       : 
                                                      __Vtemp2133[2U]))));
        riscv_soc__DOT__sram3__DOT___GEN_42[3U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[3U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[3U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[3U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[3U]
                                                       : 
                                                      __Vtemp2133[3U]))));
    }
    if (riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
    } else {
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U];
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U];
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U];
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0 
        = ((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
    VL_EXTEND_WQ(128,54, __Vtemp2145, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                       >> 0xaU));
    VL_EXTEND_WQ(128,54, __Vtemp2146, (0x3fffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            >> 0xaU) == (0x3fffffffffffffULL & (((QData)((IData)(
                                                                 ((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                   ? 
                                                                  __Vtemp2145[1U]
                                                                   : 
                                                                  __Vtemp2146[1U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                    ? 
                                                                   __Vtemp2145[0U]
                                                                    : 
                                                                   __Vtemp2146[0U]))))));
    if (riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
    } else {
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U];
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U];
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U];
        riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1 
        = ((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
    VL_EXTEND_WQ(128,54, __Vtemp2149, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                       >> 0xaU));
    VL_EXTEND_WQ(128,54, __Vtemp2150, (0x3fffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            >> 0xaU) == (0x3fffffffffffffULL & (((QData)((IData)(
                                                                 ((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                   ? 
                                                                  __Vtemp2149[1U]
                                                                   : 
                                                                  __Vtemp2150[1U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                    ? 
                                                                   __Vtemp2149[0U]
                                                                    : 
                                                                   __Vtemp2150[0U]))))));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___temp_data_T_4 
        = ((0x4000U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp
            : ((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))
                ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip))
                : 0ULL));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_msip_T_1 
        = (1U & ((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))
                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U]
                  : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip)));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtimecmp_T 
        = ((0x4000U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))
            ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))
            : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid 
        = ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                     >> 0x1fU)) & (IData)(riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
    if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                >> 4U)));
    }
    riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint 
        = ((0x2000000U > (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))) 
           | (0x200ffffU < (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2 
        = (1U & ((1U & ((IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                 >> 0x3fU)) ^ (IData)(
                                                      (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                       >> 0x3fU))))
                  ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                             >> 0x3fU)) : (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U] 
                                           >> 0x1fU)));
    if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
        __Vtemp2183[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[0U];
        __Vtemp2183[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[1U];
        __Vtemp2183[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[2U];
        __Vtemp2183[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[3U];
    } else {
        __Vtemp2183[0U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[0U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[0U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[0U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[0U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[0U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[0U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[0U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[0U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[0U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[0U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[0U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[0U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[0U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[0U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[0U]
                                                            : 
                                                           riscv_soc__DOT__sram0__DOT___GEN_42[0U])))))))))))))));
        __Vtemp2183[1U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[1U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[1U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[1U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[1U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[1U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[1U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[1U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[1U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[1U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[1U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[1U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[1U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[1U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[1U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[1U]
                                                            : 
                                                           riscv_soc__DOT__sram0__DOT___GEN_42[1U])))))))))))))));
        __Vtemp2183[2U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[2U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[2U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[2U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[2U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[2U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[2U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[2U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[2U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[2U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[2U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[2U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[2U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[2U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[2U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[2U]
                                                            : 
                                                           riscv_soc__DOT__sram0__DOT___GEN_42[2U])))))))))))))));
        __Vtemp2183[3U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[3U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[3U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[3U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[3U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[3U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[3U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[3U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[3U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[3U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[3U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[3U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[3U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[3U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[3U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[3U]
                                                            : 
                                                           riscv_soc__DOT__sram0__DOT___GEN_42[3U])))))))))))))));
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
    } else {
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[0U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[0U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[0U]
                    : __Vtemp2183[0U]));
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[1U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[1U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[1U]
                    : __Vtemp2183[1U]));
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[2U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[2U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[2U]
                    : __Vtemp2183[2U]));
        vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[3U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[3U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[3U]
                    : __Vtemp2183[3U]));
    }
    if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
        __Vtemp2221[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[0U];
        __Vtemp2221[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[1U];
        __Vtemp2221[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[2U];
        __Vtemp2221[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[3U];
    } else {
        __Vtemp2221[0U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[0U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[0U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[0U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[0U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[0U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[0U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[0U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[0U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[0U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[0U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[0U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[0U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[0U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[0U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[0U]
                                                            : 
                                                           riscv_soc__DOT__sram1__DOT___GEN_42[0U])))))))))))))));
        __Vtemp2221[1U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[1U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[1U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[1U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[1U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[1U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[1U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[1U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[1U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[1U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[1U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[1U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[1U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[1U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[1U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[1U]
                                                            : 
                                                           riscv_soc__DOT__sram1__DOT___GEN_42[1U])))))))))))))));
        __Vtemp2221[2U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[2U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[2U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[2U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[2U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[2U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[2U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[2U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[2U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[2U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[2U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[2U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[2U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[2U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[2U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[2U]
                                                            : 
                                                           riscv_soc__DOT__sram1__DOT___GEN_42[2U])))))))))))))));
        __Vtemp2221[3U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[3U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[3U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[3U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[3U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[3U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[3U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[3U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[3U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[3U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[3U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[3U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[3U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[3U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[3U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[3U]
                                                            : 
                                                           riscv_soc__DOT__sram1__DOT___GEN_42[3U])))))))))))))));
    }
    if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[0U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[1U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[2U];
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[3U];
    } else {
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[0U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[0U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[0U]
                    : __Vtemp2221[0U]));
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[1U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[1U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[1U]
                    : __Vtemp2221[1U]));
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[2U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[2U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[2U]
                    : __Vtemp2221[2U]));
        vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[3U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[3U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[3U]
                    : __Vtemp2221[3U]));
    }
    if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
        __Vtemp2259[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[0U];
        __Vtemp2259[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[1U];
        __Vtemp2259[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[2U];
        __Vtemp2259[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[3U];
    } else {
        __Vtemp2259[0U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[0U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[0U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[0U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[0U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[0U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[0U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[0U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[0U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[0U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[0U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[0U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[0U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[0U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[0U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[0U]
                                                            : 
                                                           riscv_soc__DOT__sram2__DOT___GEN_42[0U])))))))))))))));
        __Vtemp2259[1U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[1U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[1U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[1U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[1U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[1U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[1U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[1U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[1U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[1U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[1U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[1U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[1U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[1U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[1U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[1U]
                                                            : 
                                                           riscv_soc__DOT__sram2__DOT___GEN_42[1U])))))))))))))));
        __Vtemp2259[2U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[2U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[2U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[2U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[2U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[2U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[2U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[2U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[2U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[2U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[2U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[2U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[2U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[2U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[2U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[2U]
                                                            : 
                                                           riscv_soc__DOT__sram2__DOT___GEN_42[2U])))))))))))))));
        __Vtemp2259[3U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[3U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[3U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[3U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[3U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[3U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[3U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[3U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[3U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[3U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[3U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[3U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[3U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[3U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[3U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[3U]
                                                            : 
                                                           riscv_soc__DOT__sram2__DOT___GEN_42[3U])))))))))))))));
    }
    if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[0U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[1U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[2U];
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[3U];
    } else {
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[0U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[0U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[0U]
                    : __Vtemp2259[0U]));
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[1U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[1U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[1U]
                    : __Vtemp2259[1U]));
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[2U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[2U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[2U]
                    : __Vtemp2259[2U]));
        vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[3U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[3U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[3U]
                    : __Vtemp2259[3U]));
    }
    if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
        __Vtemp2297[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[0U];
        __Vtemp2297[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[1U];
        __Vtemp2297[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[2U];
        __Vtemp2297[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[3U];
    } else {
        __Vtemp2297[0U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[0U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[0U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[0U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[0U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[0U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[0U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[0U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[0U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[0U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[0U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[0U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[0U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[0U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[0U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[0U]
                                                            : 
                                                           riscv_soc__DOT__sram3__DOT___GEN_42[0U])))))))))))))));
        __Vtemp2297[1U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[1U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[1U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[1U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[1U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[1U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[1U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[1U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[1U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[1U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[1U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[1U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[1U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[1U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[1U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[1U]
                                                            : 
                                                           riscv_soc__DOT__sram3__DOT___GEN_42[1U])))))))))))))));
        __Vtemp2297[2U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[2U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[2U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[2U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[2U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[2U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[2U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[2U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[2U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[2U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[2U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[2U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[2U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[2U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[2U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[2U]
                                                            : 
                                                           riscv_soc__DOT__sram3__DOT___GEN_42[2U])))))))))))))));
        __Vtemp2297[3U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[3U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[3U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[3U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[3U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[3U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[3U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[3U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[3U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[3U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[3U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[3U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[3U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[3U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[3U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[3U]
                                                            : 
                                                           riscv_soc__DOT__sram3__DOT___GEN_42[3U])))))))))))))));
    }
    if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[0U];
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[1U];
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[2U];
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[3U];
    } else {
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[0U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[0U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[0U]
                    : __Vtemp2297[0U]));
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[1U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[1U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[1U]
                    : __Vtemp2297[1U]));
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[2U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[2U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[2U]
                    : __Vtemp2297[2U]));
        vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[3U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[3U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[3U]
                    : __Vtemp2297[3U]));
    }
    if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0)) 
         | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1)))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_13 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_10 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit)
                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                  >> 3U))) ? (((QData)((IData)(
                                                               riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                    : (((QData)((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))
                : ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                  >> 3U))) ? (((QData)((IData)(
                                                               riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                    : (((QData)((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U])))));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_21 
            = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit)) 
               & 1U);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_13 
            = (0xfffffffffffffff0ULL & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_10 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_21 = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_23 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
    if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
        __Vtemp2335[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[0U];
        __Vtemp2335[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[1U];
        __Vtemp2335[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[2U];
        __Vtemp2335[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[3U];
    } else {
        __Vtemp2335[0U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[0U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[0U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[0U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[0U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[0U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[0U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[0U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[0U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[0U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[0U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[0U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[0U])))))))))))))));
        __Vtemp2335[1U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[1U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[1U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[1U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[1U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[1U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[1U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[1U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[1U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[1U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[1U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[1U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[1U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[1U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[1U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[1U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[1U])))))))))))))));
        __Vtemp2335[2U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[2U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[2U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[2U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[2U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[2U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[2U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[2U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[2U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[2U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[2U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[2U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[2U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[2U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[2U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[2U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[2U])))))))))))))));
        __Vtemp2335[3U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[3U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[3U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[3U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[3U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[3U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[3U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[3U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[3U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[3U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[3U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[3U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[3U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[3U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[3U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[3U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[3U])))))))))))))));
    }
    if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
        riscv_soc__DOT__sram5__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[0U];
        riscv_soc__DOT__sram5__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[1U];
        riscv_soc__DOT__sram5__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[2U];
        riscv_soc__DOT__sram5__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[3U];
    } else {
        riscv_soc__DOT__sram5__DOT___GEN_21[0U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[0U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[0U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[0U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[0U]
                                                       : 
                                                      __Vtemp2335[0U]))));
        riscv_soc__DOT__sram5__DOT___GEN_21[1U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[1U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[1U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[1U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[1U]
                                                       : 
                                                      __Vtemp2335[1U]))));
        riscv_soc__DOT__sram5__DOT___GEN_21[2U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[2U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[2U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[2U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[2U]
                                                       : 
                                                      __Vtemp2335[2U]))));
        riscv_soc__DOT__sram5__DOT___GEN_21[3U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[3U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[3U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[3U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[3U]
                                                       : 
                                                      __Vtemp2335[3U]))));
    }
    if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
        __Vtemp2377[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[0U];
        __Vtemp2377[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[1U];
        __Vtemp2377[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[2U];
        __Vtemp2377[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[3U];
    } else {
        __Vtemp2377[0U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[0U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[0U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[0U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[0U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[0U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[0U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[0U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[0U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[0U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[0U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[0U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[0U])))))))))))))));
        __Vtemp2377[1U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[1U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[1U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[1U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[1U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[1U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[1U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[1U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[1U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[1U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[1U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[1U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[1U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[1U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[1U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[1U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[1U])))))))))))))));
        __Vtemp2377[2U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[2U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[2U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[2U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[2U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[2U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[2U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[2U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[2U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[2U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[2U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[2U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[2U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[2U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[2U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[2U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[2U])))))))))))))));
        __Vtemp2377[3U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[3U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[3U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[3U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[3U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[3U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[3U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[3U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[3U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[3U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[3U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[3U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[3U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[3U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[3U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[3U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[3U])))))))))))))));
    }
    if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
        riscv_soc__DOT__sram7__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[0U];
        riscv_soc__DOT__sram7__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[1U];
        riscv_soc__DOT__sram7__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[2U];
        riscv_soc__DOT__sram7__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[3U];
    } else {
        riscv_soc__DOT__sram7__DOT___GEN_21[0U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[0U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[0U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[0U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[0U]
                                                       : 
                                                      __Vtemp2377[0U]))));
        riscv_soc__DOT__sram7__DOT___GEN_21[1U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[1U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[1U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[1U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[1U]
                                                       : 
                                                      __Vtemp2377[1U]))));
        riscv_soc__DOT__sram7__DOT___GEN_21[2U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[2U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[2U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[2U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[2U]
                                                       : 
                                                      __Vtemp2377[2U]))));
        riscv_soc__DOT__sram7__DOT___GEN_21[3U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[3U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[3U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[3U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[3U]
                                                       : 
                                                      __Vtemp2377[3U]))));
    }
    if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp2419[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[0U];
        __Vtemp2419[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[1U];
        __Vtemp2419[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[2U];
        __Vtemp2419[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[3U];
    } else {
        __Vtemp2419[0U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[0U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[0U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[0U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[0U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[0U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[0U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[0U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[0U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[0U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[0U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[0U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[0U])))))))))))))));
        __Vtemp2419[1U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[1U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[1U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[1U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[1U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[1U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[1U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[1U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[1U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[1U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[1U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[1U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[1U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[1U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[1U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[1U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[1U])))))))))))))));
        __Vtemp2419[2U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[2U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[2U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[2U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[2U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[2U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[2U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[2U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[2U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[2U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[2U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[2U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[2U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[2U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[2U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[2U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[2U])))))))))))))));
        __Vtemp2419[3U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[3U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[3U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[3U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[3U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[3U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[3U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[3U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[3U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[3U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[3U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[3U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[3U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[3U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[3U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[3U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[3U])))))))))))))));
    }
    if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram4__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[0U];
        riscv_soc__DOT__sram4__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[1U];
        riscv_soc__DOT__sram4__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[2U];
        riscv_soc__DOT__sram4__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[3U];
    } else {
        riscv_soc__DOT__sram4__DOT___GEN_21[0U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[0U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[0U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[0U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[0U]
                                                       : 
                                                      __Vtemp2419[0U]))));
        riscv_soc__DOT__sram4__DOT___GEN_21[1U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[1U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[1U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[1U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[1U]
                                                       : 
                                                      __Vtemp2419[1U]))));
        riscv_soc__DOT__sram4__DOT___GEN_21[2U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[2U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[2U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[2U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[2U]
                                                       : 
                                                      __Vtemp2419[2U]))));
        riscv_soc__DOT__sram4__DOT___GEN_21[3U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[3U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[3U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[3U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[3U]
                                                       : 
                                                      __Vtemp2419[3U]))));
    }
    if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
        __Vtemp2461[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[0U];
        __Vtemp2461[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[1U];
        __Vtemp2461[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[2U];
        __Vtemp2461[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[3U];
    } else {
        __Vtemp2461[0U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[0U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[0U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[0U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[0U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[0U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[0U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[0U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[0U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[0U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[0U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[0U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[0U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[0U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[0U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[0U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[0U])))))))))))))));
        __Vtemp2461[1U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[1U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[1U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[1U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[1U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[1U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[1U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[1U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[1U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[1U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[1U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[1U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[1U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[1U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[1U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[1U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[1U])))))))))))))));
        __Vtemp2461[2U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[2U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[2U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[2U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[2U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[2U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[2U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[2U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[2U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[2U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[2U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[2U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[2U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[2U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[2U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[2U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[2U])))))))))))))));
        __Vtemp2461[3U] = ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[3U]
                            : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[3U]
                                : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[3U]
                                    : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[3U]
                                        : ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[3U]
                                            : ((0xaU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[3U]
                                                : (
                                                   (9U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[3U]
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[3U]
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[3U]
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[3U]
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[3U]
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[3U]
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[3U]
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[3U]
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[3U]
                                                            : 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[3U])))))))))))))));
    }
    if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
        riscv_soc__DOT__sram6__DOT___GEN_21[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[0U];
        riscv_soc__DOT__sram6__DOT___GEN_21[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[1U];
        riscv_soc__DOT__sram6__DOT___GEN_21[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[2U];
        riscv_soc__DOT__sram6__DOT___GEN_21[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[3U];
    } else {
        riscv_soc__DOT__sram6__DOT___GEN_21[0U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[0U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[0U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[0U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[0U]
                                                       : 
                                                      __Vtemp2461[0U]))));
        riscv_soc__DOT__sram6__DOT___GEN_21[1U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[1U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[1U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[1U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[1U]
                                                       : 
                                                      __Vtemp2461[1U]))));
        riscv_soc__DOT__sram6__DOT___GEN_21[2U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[2U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[2U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[2U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[2U]
                                                       : 
                                                      __Vtemp2461[2U]))));
        riscv_soc__DOT__sram6__DOT___GEN_21[3U] = (
                                                   (0x14U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[3U]
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[3U]
                                                     : 
                                                    ((0x12U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[3U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[3U]
                                                       : 
                                                      __Vtemp2461[3U]))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid 
        = (((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                      >> 0x1fU)) & (~ (IData)(riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint))) 
           & (IData)(riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
    riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
        = ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                     >> 0x1fU)) ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata
            : ((IData)(riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                ? vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata
                : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid 
        = (((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                      >> 0x1fU)) & (IData)(riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)) 
           & (IData)(riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
    VL_EXTEND_WQ(127,64, __Vtemp2473, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp2474, __Vtemp2473, (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data 
        = ((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                         >> 2U))) ? ((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                      ? VL_SHIFTRS_QQI(64,64,6, 
                                                       ((1U 
                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                         ? riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data), (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                      : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                           ? (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                           : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                         >> (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
            : ((1U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U))) ? (((QData)((IData)(
                                                          __Vtemp2474[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           __Vtemp2474[0U])))
                : ((4U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                 >> 2U))) ? (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                             ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                    : ((6U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                     >> 2U))) ? (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                                 | riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                        : ((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U))) ? 
                           (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                            & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                            : ((3U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? (QData)((IData)((1U 
                                                   & (~ 
                                                      riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))))
                                : ((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                    ? (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2))
                                    : (((QData)((IData)(
                                                        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[0U]))))))))));
    VL_EXTEND_WQ(65,64, __Vtemp2478, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp2481, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp2484, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp2489, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp2491, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp2495, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    __Vtemp2504[1U] = ((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                     >> 2U))) ? ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                  ? 
                                                 __Vtemp2481[1U]
                                                  : (IData)(
                                                            (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                             >> 0x20U)))
                        : ((6U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U))) ? 
                           ((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])
                             ? __Vtemp2484[1U] : (IData)(
                                                         (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                          >> 0x20U)))
                            : ((4U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                    ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                               >> 0x20U))
                                    : __Vtemp2489[1U])
                                : ((1U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                    ? ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                        ? __Vtemp2491[1U]
                                        : (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                   >> 0x20U)))
                                    : ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                        ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                   >> 0x20U))
                                        : __Vtemp2495[1U])))));
    __Vtemp2506[0U] = ((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                     >> 2U))) ? ((1U 
                                                  & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])
                                                  ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                                  : 
                                                 __Vtemp2478[0U])
                        : ((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U))) ? 
                           ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                             ? __Vtemp2481[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1))
                            : ((6U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? ((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])
                                    ? __Vtemp2484[0U]
                                    : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1))
                                : ((4U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                    ? ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                        ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                        : __Vtemp2489[0U])
                                    : ((1U == (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                        ? ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                            ? __Vtemp2491[0U]
                                            : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1))
                                        : ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                            ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                            : __Vtemp2495[0U]))))));
    if ((3U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                      >> 2U)))) {
        __Vtemp2508[2U] = 1U;
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U] 
            = (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
            = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                       >> 0x20U));
    } else {
        __Vtemp2508[2U] = ((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U))) ? 
                           ((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])
                             ? 1U : __Vtemp2478[2U])
                            : ((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                    ? __Vtemp2481[2U]
                                    : 1U) : ((6U == 
                                              (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                              ? ((1U 
                                                  & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])
                                                  ? 
                                                 __Vtemp2484[2U]
                                                  : 1U)
                                              : ((4U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                   ? 1U
                                                   : 
                                                  __Vtemp2489[2U])
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U)))
                                                   ? 
                                                  ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                                    ? 
                                                   __Vtemp2491[2U]
                                                    : 1U)
                                                   : 
                                                  ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                                    ? 1U
                                                    : 
                                                   __Vtemp2495[2U]))))));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U] 
            = __Vtemp2506[0U];
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
            = ((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U))) ? ((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])
                                          ? (IData)(
                                                    (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                     >> 0x20U))
                                          : __Vtemp2478[1U])
                : __Vtemp2504[1U]);
    }
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[2U] 
        = __Vtemp2508[2U];
    if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
        __Vtemp2540[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[0U];
        __Vtemp2540[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[1U];
        __Vtemp2540[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[2U];
        __Vtemp2540[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[3U];
    } else {
        __Vtemp2540[0U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[0U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[0U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[0U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[0U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[0U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[0U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[0U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[0U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[0U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[0U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[0U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[0U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[0U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[0U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[0U]
                                                            : 
                                                           riscv_soc__DOT__sram5__DOT___GEN_21[0U])))))))))))))));
        __Vtemp2540[1U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[1U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[1U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[1U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[1U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[1U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[1U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[1U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[1U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[1U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[1U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[1U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[1U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[1U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[1U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[1U]
                                                            : 
                                                           riscv_soc__DOT__sram5__DOT___GEN_21[1U])))))))))))))));
        __Vtemp2540[2U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[2U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[2U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[2U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[2U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[2U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[2U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[2U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[2U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[2U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[2U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[2U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[2U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[2U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[2U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[2U]
                                                            : 
                                                           riscv_soc__DOT__sram5__DOT___GEN_21[2U])))))))))))))));
        __Vtemp2540[3U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[3U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[3U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[3U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[3U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[3U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[3U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[3U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[3U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[3U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[3U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[3U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[3U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[3U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[3U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[3U]
                                                            : 
                                                           riscv_soc__DOT__sram5__DOT___GEN_21[3U])))))))))))))));
    }
    if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
        riscv_soc__DOT__sram5__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[0U];
        riscv_soc__DOT__sram5__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[1U];
        riscv_soc__DOT__sram5__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[2U];
        riscv_soc__DOT__sram5__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[3U];
    } else {
        riscv_soc__DOT__sram5__DOT___GEN_42[0U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[0U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[0U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[0U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[0U]
                                                       : 
                                                      __Vtemp2540[0U]))));
        riscv_soc__DOT__sram5__DOT___GEN_42[1U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[1U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[1U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[1U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[1U]
                                                       : 
                                                      __Vtemp2540[1U]))));
        riscv_soc__DOT__sram5__DOT___GEN_42[2U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[2U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[2U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[2U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[2U]
                                                       : 
                                                      __Vtemp2540[2U]))));
        riscv_soc__DOT__sram5__DOT___GEN_42[3U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[3U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[3U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[3U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[3U]
                                                       : 
                                                      __Vtemp2540[3U]))));
    }
    if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
        __Vtemp2582[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[0U];
        __Vtemp2582[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[1U];
        __Vtemp2582[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[2U];
        __Vtemp2582[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[3U];
    } else {
        __Vtemp2582[0U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[0U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[0U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[0U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[0U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[0U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[0U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[0U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[0U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[0U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[0U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[0U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[0U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[0U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[0U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[0U]
                                                            : 
                                                           riscv_soc__DOT__sram7__DOT___GEN_21[0U])))))))))))))));
        __Vtemp2582[1U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[1U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[1U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[1U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[1U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[1U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[1U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[1U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[1U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[1U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[1U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[1U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[1U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[1U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[1U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[1U]
                                                            : 
                                                           riscv_soc__DOT__sram7__DOT___GEN_21[1U])))))))))))))));
        __Vtemp2582[2U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[2U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[2U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[2U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[2U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[2U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[2U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[2U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[2U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[2U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[2U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[2U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[2U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[2U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[2U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[2U]
                                                            : 
                                                           riscv_soc__DOT__sram7__DOT___GEN_21[2U])))))))))))))));
        __Vtemp2582[3U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[3U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[3U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[3U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[3U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[3U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[3U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[3U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[3U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[3U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[3U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[3U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[3U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[3U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[3U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[3U]
                                                            : 
                                                           riscv_soc__DOT__sram7__DOT___GEN_21[3U])))))))))))))));
    }
    if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
        riscv_soc__DOT__sram7__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[0U];
        riscv_soc__DOT__sram7__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[1U];
        riscv_soc__DOT__sram7__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[2U];
        riscv_soc__DOT__sram7__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[3U];
    } else {
        riscv_soc__DOT__sram7__DOT___GEN_42[0U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[0U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[0U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[0U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[0U]
                                                       : 
                                                      __Vtemp2582[0U]))));
        riscv_soc__DOT__sram7__DOT___GEN_42[1U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[1U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[1U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[1U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[1U]
                                                       : 
                                                      __Vtemp2582[1U]))));
        riscv_soc__DOT__sram7__DOT___GEN_42[2U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[2U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[2U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[2U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[2U]
                                                       : 
                                                      __Vtemp2582[2U]))));
        riscv_soc__DOT__sram7__DOT___GEN_42[3U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[3U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[3U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[3U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[3U]
                                                       : 
                                                      __Vtemp2582[3U]))));
    }
    if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp2624[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[0U];
        __Vtemp2624[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[1U];
        __Vtemp2624[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[2U];
        __Vtemp2624[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[3U];
    } else {
        __Vtemp2624[0U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[0U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[0U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[0U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[0U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[0U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[0U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[0U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[0U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[0U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[0U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[0U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[0U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[0U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[0U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[0U]
                                                            : 
                                                           riscv_soc__DOT__sram4__DOT___GEN_21[0U])))))))))))))));
        __Vtemp2624[1U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[1U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[1U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[1U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[1U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[1U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[1U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[1U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[1U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[1U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[1U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[1U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[1U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[1U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[1U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[1U]
                                                            : 
                                                           riscv_soc__DOT__sram4__DOT___GEN_21[1U])))))))))))))));
        __Vtemp2624[2U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[2U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[2U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[2U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[2U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[2U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[2U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[2U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[2U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[2U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[2U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[2U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[2U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[2U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[2U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[2U]
                                                            : 
                                                           riscv_soc__DOT__sram4__DOT___GEN_21[2U])))))))))))))));
        __Vtemp2624[3U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[3U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[3U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[3U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[3U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[3U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[3U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[3U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[3U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[3U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[3U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[3U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[3U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[3U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[3U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[3U]
                                                            : 
                                                           riscv_soc__DOT__sram4__DOT___GEN_21[3U])))))))))))))));
    }
    if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        riscv_soc__DOT__sram4__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[0U];
        riscv_soc__DOT__sram4__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[1U];
        riscv_soc__DOT__sram4__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[2U];
        riscv_soc__DOT__sram4__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[3U];
    } else {
        riscv_soc__DOT__sram4__DOT___GEN_42[0U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[0U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[0U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[0U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[0U]
                                                       : 
                                                      __Vtemp2624[0U]))));
        riscv_soc__DOT__sram4__DOT___GEN_42[1U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[1U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[1U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[1U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[1U]
                                                       : 
                                                      __Vtemp2624[1U]))));
        riscv_soc__DOT__sram4__DOT___GEN_42[2U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[2U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[2U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[2U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[2U]
                                                       : 
                                                      __Vtemp2624[2U]))));
        riscv_soc__DOT__sram4__DOT___GEN_42[3U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[3U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[3U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[3U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[3U]
                                                       : 
                                                      __Vtemp2624[3U]))));
    }
    if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
        __Vtemp2666[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[0U];
        __Vtemp2666[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[1U];
        __Vtemp2666[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[2U];
        __Vtemp2666[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[3U];
    } else {
        __Vtemp2666[0U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[0U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[0U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[0U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[0U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[0U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[0U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[0U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[0U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[0U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[0U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[0U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[0U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[0U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[0U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[0U]
                                                            : 
                                                           riscv_soc__DOT__sram6__DOT___GEN_21[0U])))))))))))))));
        __Vtemp2666[1U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[1U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[1U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[1U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[1U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[1U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[1U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[1U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[1U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[1U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[1U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[1U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[1U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[1U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[1U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[1U]
                                                            : 
                                                           riscv_soc__DOT__sram6__DOT___GEN_21[1U])))))))))))))));
        __Vtemp2666[2U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[2U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[2U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[2U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[2U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[2U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[2U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[2U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[2U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[2U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[2U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[2U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[2U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[2U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[2U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[2U]
                                                            : 
                                                           riscv_soc__DOT__sram6__DOT___GEN_21[2U])))))))))))))));
        __Vtemp2666[3U] = ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[3U]
                            : ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[3U]
                                : ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[3U]
                                    : ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[3U]
                                        : ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[3U]
                                            : ((0x1fU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[3U]
                                                : (
                                                   (0x1eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[3U]
                                                    : 
                                                   ((0x1dU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[3U]
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[3U]
                                                      : 
                                                     ((0x1bU 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[3U]
                                                       : 
                                                      ((0x1aU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[3U]
                                                        : 
                                                       ((0x19U 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[3U]
                                                         : 
                                                        ((0x18U 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[3U]
                                                          : 
                                                         ((0x17U 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[3U]
                                                           : 
                                                          ((0x16U 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[3U]
                                                            : 
                                                           riscv_soc__DOT__sram6__DOT___GEN_21[3U])))))))))))))));
    }
    if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
        riscv_soc__DOT__sram6__DOT___GEN_42[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[0U];
        riscv_soc__DOT__sram6__DOT___GEN_42[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[1U];
        riscv_soc__DOT__sram6__DOT___GEN_42[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[2U];
        riscv_soc__DOT__sram6__DOT___GEN_42[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[3U];
    } else {
        riscv_soc__DOT__sram6__DOT___GEN_42[0U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[0U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[0U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[0U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[0U]
                                                       : 
                                                      __Vtemp2666[0U]))));
        riscv_soc__DOT__sram6__DOT___GEN_42[1U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[1U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[1U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[1U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[1U]
                                                       : 
                                                      __Vtemp2666[1U]))));
        riscv_soc__DOT__sram6__DOT___GEN_42[2U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[2U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[2U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[2U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[2U]
                                                       : 
                                                      __Vtemp2666[2U]))));
        riscv_soc__DOT__sram6__DOT___GEN_42[3U] = (
                                                   (0x29U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[3U]
                                                    : 
                                                   ((0x28U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[3U]
                                                     : 
                                                    ((0x27U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[3U]
                                                      : 
                                                     ((0x26U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[3U]
                                                       : 
                                                      __Vtemp2666[3U]))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_5 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_6 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
    riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
        = ((7U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
            ? (QData)((IData)((0xffU & (IData)((riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                                >> 0x38U)))))
            : ((6U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                ? (QData)((IData)((0xffffU & (IData)(
                                                     (riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                                      >> 0x30U)))))
                : ((5U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                    ? (QData)((IData)((0xffffffU & (IData)(
                                                           (riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                                            >> 0x28U)))))
                    : ((4U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                        ? (QData)((IData)((riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                           >> 0x20U)))
                        : ((3U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                            ? (riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                               >> 0x18U) : ((2U == 
                                             (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                                             ? (riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                                >> 0x10U)
                                             : ((1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                                                 ? 
                                                (riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                                 >> 8U)
                                                 : riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata)))))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)
                ? 0U : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w))
                         ? 1U : 2U)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_10 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid)
            ? 2U : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w)))
                     ? 3U : 0U));
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
            = (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
            = ((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U))) ? ((IData)((0x8000000000000000ULL 
                                                  | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                     >> 1U))) 
                                         << 1U) : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
            = ((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U))) ? (((IData)((0x8000000000000000ULL 
                                                   | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                      >> 1U))) 
                                          >> 0x1fU) 
                                         | ((IData)(
                                                    ((0x8000000000000000ULL 
                                                      | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                         >> 1U)) 
                                                     >> 0x20U)) 
                                            << 1U))
                : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
            = ((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U))) ? ((IData)(((0x8000000000000000ULL 
                                                   | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                      >> 1U)) 
                                                  >> 0x20U)) 
                                         >> 0x1fU) : 
               riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[2U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
            = riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] = 0U;
    }
    if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
        __Vtemp2714[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[0U];
        __Vtemp2714[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[1U];
        __Vtemp2714[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[2U];
        __Vtemp2714[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[3U];
    } else {
        __Vtemp2714[0U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[0U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[0U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[0U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[0U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[0U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[0U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[0U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[0U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[0U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[0U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[0U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[0U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[0U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[0U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[0U]
                                                            : 
                                                           riscv_soc__DOT__sram5__DOT___GEN_42[0U])))))))))))))));
        __Vtemp2714[1U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[1U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[1U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[1U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[1U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[1U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[1U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[1U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[1U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[1U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[1U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[1U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[1U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[1U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[1U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[1U]
                                                            : 
                                                           riscv_soc__DOT__sram5__DOT___GEN_42[1U])))))))))))))));
        __Vtemp2714[2U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[2U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[2U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[2U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[2U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[2U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[2U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[2U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[2U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[2U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[2U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[2U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[2U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[2U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[2U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[2U]
                                                            : 
                                                           riscv_soc__DOT__sram5__DOT___GEN_42[2U])))))))))))))));
        __Vtemp2714[3U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[3U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[3U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[3U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[3U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[3U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[3U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[3U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[3U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[3U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[3U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[3U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[3U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[3U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[3U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[3U]
                                                            : 
                                                           riscv_soc__DOT__sram5__DOT___GEN_42[3U])))))))))))))));
    }
    if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[0U];
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[1U];
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[2U];
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[3U];
    } else {
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[0U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[0U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[0U]
                    : __Vtemp2714[0U]));
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[1U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[1U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[1U]
                    : __Vtemp2714[1U]));
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[2U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[2U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[2U]
                    : __Vtemp2714[2U]));
        vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[3U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[3U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[3U]
                    : __Vtemp2714[3U]));
    }
    if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
        __Vtemp2752[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[0U];
        __Vtemp2752[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[1U];
        __Vtemp2752[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[2U];
        __Vtemp2752[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[3U];
    } else {
        __Vtemp2752[0U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[0U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[0U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[0U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[0U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[0U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[0U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[0U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[0U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[0U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[0U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[0U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[0U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[0U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[0U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[0U]
                                                            : 
                                                           riscv_soc__DOT__sram7__DOT___GEN_42[0U])))))))))))))));
        __Vtemp2752[1U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[1U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[1U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[1U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[1U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[1U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[1U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[1U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[1U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[1U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[1U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[1U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[1U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[1U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[1U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[1U]
                                                            : 
                                                           riscv_soc__DOT__sram7__DOT___GEN_42[1U])))))))))))))));
        __Vtemp2752[2U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[2U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[2U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[2U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[2U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[2U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[2U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[2U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[2U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[2U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[2U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[2U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[2U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[2U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[2U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[2U]
                                                            : 
                                                           riscv_soc__DOT__sram7__DOT___GEN_42[2U])))))))))))))));
        __Vtemp2752[3U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[3U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[3U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[3U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                        ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[3U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                            ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[3U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[3U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[3U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[3U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[3U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[3U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[3U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[3U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[3U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[3U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[3U]
                                                            : 
                                                           riscv_soc__DOT__sram7__DOT___GEN_42[3U])))))))))))))));
    }
    if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[0U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[1U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[2U];
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[3U];
    } else {
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[0U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[0U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[0U]
                    : __Vtemp2752[0U]));
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[1U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[1U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[1U]
                    : __Vtemp2752[1U]));
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[2U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[2U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[2U]
                    : __Vtemp2752[2U]));
        vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[3U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[3U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                    ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[3U]
                    : __Vtemp2752[3U]));
    }
    if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        __Vtemp2790[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[0U];
        __Vtemp2790[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[1U];
        __Vtemp2790[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[2U];
        __Vtemp2790[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[3U];
    } else {
        __Vtemp2790[0U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[0U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[0U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[0U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[0U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[0U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[0U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[0U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[0U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[0U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[0U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[0U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[0U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[0U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[0U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[0U]
                                                            : 
                                                           riscv_soc__DOT__sram4__DOT___GEN_42[0U])))))))))))))));
        __Vtemp2790[1U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[1U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[1U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[1U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[1U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[1U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[1U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[1U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[1U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[1U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[1U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[1U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[1U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[1U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[1U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[1U]
                                                            : 
                                                           riscv_soc__DOT__sram4__DOT___GEN_42[1U])))))))))))))));
        __Vtemp2790[2U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[2U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[2U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[2U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[2U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[2U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[2U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[2U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[2U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[2U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[2U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[2U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[2U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[2U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[2U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[2U]
                                                            : 
                                                           riscv_soc__DOT__sram4__DOT___GEN_42[2U])))))))))))))));
        __Vtemp2790[3U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[3U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[3U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[3U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[3U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[3U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[3U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[3U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[3U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[3U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[3U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[3U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[3U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[3U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[3U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[3U]
                                                            : 
                                                           riscv_soc__DOT__sram4__DOT___GEN_42[3U])))))))))))))));
    }
    if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[0U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[1U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[2U];
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[3U];
    } else {
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[0U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[0U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[0U]
                    : __Vtemp2790[0U]));
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[1U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[1U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[1U]
                    : __Vtemp2790[1U]));
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[2U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[2U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[2U]
                    : __Vtemp2790[2U]));
        vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[3U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[3U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[3U]
                    : __Vtemp2790[3U]));
    }
    if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
        __Vtemp2828[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[0U];
        __Vtemp2828[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[1U];
        __Vtemp2828[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[2U];
        __Vtemp2828[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[3U];
    } else {
        __Vtemp2828[0U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[0U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[0U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[0U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[0U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[0U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[0U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[0U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[0U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[0U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[0U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[0U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[0U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[0U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[0U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[0U]
                                                            : 
                                                           riscv_soc__DOT__sram6__DOT___GEN_42[0U])))))))))))))));
        __Vtemp2828[1U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[1U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[1U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[1U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[1U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[1U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[1U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[1U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[1U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[1U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[1U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[1U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[1U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[1U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[1U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[1U]
                                                            : 
                                                           riscv_soc__DOT__sram6__DOT___GEN_42[1U])))))))))))))));
        __Vtemp2828[2U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[2U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[2U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[2U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[2U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[2U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[2U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[2U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[2U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[2U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[2U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[2U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[2U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[2U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[2U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[2U]
                                                            : 
                                                           riscv_soc__DOT__sram6__DOT___GEN_42[2U])))))))))))))));
        __Vtemp2828[3U] = ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[3U]
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[3U]
                                : ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[3U]
                                    : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                        ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[3U]
                                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                            ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[3U]
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[3U]
                                                : (
                                                   (0x33U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                    ? 
                                                   vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[3U]
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                     ? 
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[3U]
                                                     : 
                                                    ((0x31U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[3U]
                                                      : 
                                                     ((0x30U 
                                                       == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                       ? 
                                                      vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[3U]
                                                       : 
                                                      ((0x2fU 
                                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                        ? 
                                                       vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[3U]
                                                        : 
                                                       ((0x2eU 
                                                         == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                         ? 
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[3U]
                                                         : 
                                                        ((0x2dU 
                                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                          ? 
                                                         vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[3U]
                                                          : 
                                                         ((0x2cU 
                                                           == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                           ? 
                                                          vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[3U]
                                                           : 
                                                          ((0x2bU 
                                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                                                            ? 
                                                           vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[3U]
                                                            : 
                                                           riscv_soc__DOT__sram6__DOT___GEN_42[3U])))))))))))))));
    }
    if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[0U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[0U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[1U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[1U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[2U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[2U];
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[3U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[3U];
    } else {
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[0U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[0U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[0U]
                    : __Vtemp2828[0U]));
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[1U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[1U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[1U]
                    : __Vtemp2828[1U]));
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[2U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[2U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[2U]
                    : __Vtemp2828[2U]));
        vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[3U] 
            = ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[3U]
                : ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[3U]
                    : __Vtemp2828[3U]));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_data_result 
        = ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
            ? (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))
            : ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                ? (((QData)((IData)(((1U & (IData)(
                                                   (riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))
                : ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                    ? (QData)((IData)((0xffffU & (IData)(riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))))
                    : ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                        ? ((((1U & (IData)((riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                            >> 0xfU)))
                              ? 0xffffffffffffULL : 0ULL) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))))
                        : ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                            ? (QData)((IData)((0xffU 
                                               & (IData)(riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))))
                            : ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                ? ((((1U & (IData)(
                                                   (riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                    >> 7U)))
                                      ? 0xffffffffffffffULL
                                      : 0ULL) << 8U) 
                                   | (QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))))
                                : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                    ? riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data
                                    : 0ULL)))))));
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb = 0xffU;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                ? (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))
                : 0U);
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast 
            = (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen));
    }
    riscv_soc__DOT__core__DOT__d_cache__DOT___T_14 
        = (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)
            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid 
        = ((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)) 
            & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))) 
           | ((((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid)) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w)));
    riscv_soc__DOT__core__DOT__d_cache__DOT___T_17 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready) 
           & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
              & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen 
        = ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_10))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_next_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
            ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))
            : 0ULL);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush 
        = (1U & (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]) 
                   & ((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]))) 
                      != ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                           ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                               ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3
                               : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2
                                   : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1
                                       : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0)))
                           : 0ULL))) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
                                        & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)))) 
                 | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
                    & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]))));
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U] 
        = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
            & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
           | (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[0U]
                : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[0U]
                    : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[0U])) 
              & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])));
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U] 
        = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
            & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
           | (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[1U]
                : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[1U]
                    : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[1U])) 
              & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])));
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U] 
        = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
            & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
           | (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[2U]
                : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[2U]
                    : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[2U])) 
              & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])));
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U] 
        = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
            & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
           | (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[3U]
                : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[3U]
                    : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[3U])) 
              & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])));
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U] 
        = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
            & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
           | (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[0U]
                : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[0U]
                    : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[0U])) 
              & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])));
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U] 
        = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
            & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
           | (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[1U]
                : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[1U]
                    : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[1U])) 
              & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])));
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U] 
        = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
            & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
           | (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[2U]
                : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[2U]
                    : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[2U])) 
              & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])));
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U] 
        = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
            & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
           | (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[3U]
                : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                    ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[3U]
                    : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[3U])) 
              & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])));
    if (riscv_soc__DOT__core__DOT__d_cache__DOT___T_14) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_93 
            = (3U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt))
                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt)
                      : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt) 
                         - (IData)(1U))));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_91 
            = ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt)) 
               & ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast)));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_92 
            = ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_94 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt))
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag)
                    ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U])))
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U])))));
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
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6 = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready) 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5 = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready) 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_96 
        = ((~ (IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___T_17)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
    riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95 
        = ((IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___T_17) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready 
            = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid) 
               & 1U);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0
                    : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                        : 0ULL)));
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready 
        = (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)) 
           | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
              & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
            ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)))
            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)))
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)))
                    : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)))))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush));
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
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish)
            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish)
                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                        ? ((~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                                & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                               | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T)))) 
                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish))
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish)))
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                    ? (IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2 
        = ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid) 
           & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                        >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
               : ((IData)(riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_32 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_33 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_40 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
    VL_EXTEND_WQ(128,64, __Vtemp2852, vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
    if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast) {
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
            = __Vtemp2852[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[1U] 
            = __Vtemp2852[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[2U] 
            = __Vtemp2852[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[3U] 
            = __Vtemp2852[3U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_34 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata;
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_54 
        = (1U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))
                  ? ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_21))
                  : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))
                      ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))
                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready))));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1 = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready) 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_23 
        = (3U & (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)))
                  ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                     - (IData)(1U)) : ((((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready))) 
                                        & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w)))
                                        ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                                           - (IData)(1U))
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T 
        = (((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                      >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready)
             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid 
        = ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                     >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid)
            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
    riscv_soc__DOT__core__DOT__d_cache__DOT___T_13 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
    riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76 
        = ((IData)(riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
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
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_43 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T)
            ? ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))
            : ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size 
        = ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
           & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
              & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush))));
    if (riscv_soc__DOT__core__DOT__d_cache__DOT___T_13) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_79 
            = ((~ (IData)(riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_80 
            = ((IData)(riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? 0xffffU : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_83 
            = ((IData)(riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata
                    : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                        ? vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U])))))
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_79 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_80 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_83 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata;
    }
    VL_EXTEND_WQ(128,64, __Vtemp2859, vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
    if (riscv_soc__DOT__core__DOT__d_cache__DOT___T_13) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[0U] 
            = ((IData)(riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[0U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U])
                : __Vtemp2859[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[1U] 
            = ((IData)(riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U])
                : __Vtemp2859[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[2U] 
            = ((IData)(riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U])
                : __Vtemp2859[2U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[3U] 
            = ((IData)(riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U])
                : __Vtemp2859[3U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_97 
        = (((IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76) 
            & (IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_98 
        = (((IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76) 
            & (IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95))
            ? 3U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_99 
        = (((IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76) 
            & (IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish)
            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)) 
                   & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
                       | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish)))
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                    ? ((IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___T_13)
                        ? (IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish))
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__result_size 
        = (7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                  + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                 - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)));
}
