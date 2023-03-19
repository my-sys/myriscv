// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

void Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*0:0*/ rflag, QData/*63:0*/ waddr, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__2(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___T_9;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_13;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_14;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_17;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95;
    CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_161;
    CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_176;
    CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_191;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_233;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_248;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_263;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_305;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_320;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_335;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_350;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    CData/*3:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__need_update;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    CData/*4:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vtemp24;
    VlWide<4>/*127:0*/ __Vtemp25;
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp44;
    VlWide<3>/*95:0*/ __Vtemp45;
    VlWide<3>/*95:0*/ __Vtemp46;
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<4>/*127:0*/ __Vtemp55;
    VlWide<4>/*127:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp75;
    VlWide<3>/*95:0*/ __Vtemp76;
    VlWide<5>/*159:0*/ __Vtemp78;
    VlWide<5>/*159:0*/ __Vtemp80;
    VlWide<5>/*159:0*/ __Vtemp81;
    VlWide<5>/*159:0*/ __Vtemp82;
    VlWide<5>/*159:0*/ __Vtemp83;
    VlWide<5>/*159:0*/ __Vtemp84;
    VlWide<5>/*159:0*/ __Vtemp86;
    VlWide<5>/*159:0*/ __Vtemp87;
    VlWide<5>/*159:0*/ __Vtemp88;
    VlWide<5>/*159:0*/ __Vtemp89;
    VlWide<5>/*159:0*/ __Vtemp90;
    VlWide<5>/*159:0*/ __Vtemp92;
    VlWide<5>/*159:0*/ __Vtemp93;
    VlWide<5>/*159:0*/ __Vtemp94;
    VlWide<5>/*159:0*/ __Vtemp102;
    VlWide<5>/*159:0*/ __Vtemp103;
    VlWide<5>/*159:0*/ __Vtemp111;
    VlWide<5>/*159:0*/ __Vtemp112;
    VlWide<5>/*159:0*/ __Vtemp116;
    VlWide<3>/*95:0*/ __Vtemp120;
    VlWide<3>/*95:0*/ __Vtemp121;
    VlWide<3>/*95:0*/ __Vtemp122;
    VlWide<5>/*159:0*/ __Vtemp127;
    VlWide<5>/*159:0*/ __Vtemp128;
    VlWide<5>/*159:0*/ __Vtemp129;
    VlWide<3>/*95:0*/ __Vtemp133;
    VlWide<3>/*95:0*/ __Vtemp134;
    VlWide<3>/*95:0*/ __Vtemp135;
    VlWide<3>/*95:0*/ __Vtemp137;
    VlWide<4>/*127:0*/ __Vtemp141;
    VlWide<3>/*95:0*/ __Vtemp149;
    VlWide<3>/*95:0*/ __Vtemp150;
    VlWide<3>/*95:0*/ __Vtemp151;
    VlWide<3>/*95:0*/ __Vtemp152;
    VlWide<3>/*95:0*/ __Vtemp153;
    VlWide<3>/*95:0*/ __Vtemp179;
    VlWide<3>/*95:0*/ __Vtemp197;
    VlWide<3>/*95:0*/ __Vtemp201;
    VlWide<3>/*95:0*/ __Vtemp208;
    VlWide<3>/*95:0*/ __Vtemp215;
    VlWide<3>/*95:0*/ __Vtemp218;
    VlWide<3>/*95:0*/ __Vtemp224;
    VlWide<3>/*95:0*/ __Vtemp225;
    VlWide<3>/*95:0*/ __Vtemp226;
    VlWide<3>/*95:0*/ __Vtemp229;
    VlWide<3>/*95:0*/ __Vtemp230;
    VlWide<3>/*95:0*/ __Vtemp239;
    VlWide<3>/*95:0*/ __Vtemp240;
    VlWide<3>/*95:0*/ __Vtemp250;
    VlWide<3>/*95:0*/ __Vtemp251;
    VlWide<3>/*95:0*/ __Vtemp276;
    VlWide<3>/*95:0*/ __Vtemp278;
    VlWide<3>/*95:0*/ __Vtemp282;
    VlWide<3>/*95:0*/ __Vtemp283;
    VlWide<3>/*95:0*/ __Vtemp288;
    VlWide<3>/*95:0*/ __Vtemp289;
    VlWide<3>/*95:0*/ __Vtemp305;
    VlWide<3>/*95:0*/ __Vtemp307;
    VlWide<3>/*95:0*/ __Vtemp313;
    VlWide<4>/*127:0*/ __Vtemp320;
    VlWide<4>/*127:0*/ __Vtemp321;
    VlWide<3>/*95:0*/ __Vtemp329;
    VlWide<3>/*95:0*/ __Vtemp335;
    VlWide<4>/*127:0*/ __Vtemp349;
    VlWide<4>/*127:0*/ __Vtemp357;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11;
    QData/*63:0*/ __Vtask_ramCtrl__0__rdata;
    QData/*63:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0;
    // Body
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__need_update 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update;
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    __Vdlyvset__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0 = 0U;
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state;
    __Vdlyvset__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 = 0U;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state 
        = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state;
    __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush 
        = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush;
    __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    __Vdlyvset__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0 = 0U;
    __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall 
        = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall;
    Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(
                                                              ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                                                ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                                                : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr), __Vtask_ramCtrl__0__rdata, (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid), vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr, 
                                                              ((0U 
                                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                                                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                                                 ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata
                                                                 : 0ULL)), 
                                                              (((QData)((IData)(
                                                                                ((((0x80U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U) 
                                                                                << 0x18U) 
                                                                                | ((((0x40U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U) 
                                                                                << 0x10U) 
                                                                                | ((((0x20U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U) 
                                                                                << 8U) 
                                                                                | ((0x10U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U)))))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                ((((8U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U) 
                                                                                << 0x18U) 
                                                                                | ((((4U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U) 
                                                                                << 0x10U) 
                                                                                | ((((2U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U) 
                                                                                << 8U) 
                                                                                | ((1U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                                 ? 0xffU
                                                                                 : 0U))))))), 
                                                              ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid)));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
        = __Vtask_ramCtrl__0__rdata;
    __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    __Vdlyvset__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0 = 0U;
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr][0U];
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr][1U];
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr][2U];
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr][3U];
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr][0U];
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr][1U];
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr][2U];
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr][3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_75[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_75[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
        = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[4U]);
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__need_update 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)
                                          ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_5)
                                          : ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)) 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update)))));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr][0U];
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr][1U];
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr][2U];
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__sram1__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr][3U];
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr][0U];
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr][1U];
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr][2U];
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__sram3__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr][3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_fence_i) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_valid_T;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_fence_i) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram2_valid_T;
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_35));
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr][0U];
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr][1U];
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr][2U];
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__sram5__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr][3U];
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr][0U];
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr][1U];
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr][2U];
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__sram7__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr][3U];
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_valid_T;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_valid_T;
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)) 
                                         & (((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid)) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast)) 
                                         & (((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid)) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)
                ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType));
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U];
        __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U];
        __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U];
        __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U];
        __Vdlyvset__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write) {
        __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U];
        __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U];
        __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U];
        __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U];
        __Vdlyvset__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        VL_EXTEND_WQ(128,54, __Vtemp24, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag);
        __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp24[0U];
        __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp24[1U];
        __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp24[2U];
        __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp24[3U];
        __Vdlyvset__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write) {
        VL_EXTEND_WQ(128,54, __Vtemp25, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag);
        __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp25[0U];
        __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp25[1U];
        __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp25[2U];
        __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp25[3U];
        __Vdlyvset__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0)
                ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_lru_2_T
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                    ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_lru_2_T_1
                    : ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T)))
                        ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))
                            ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_lru_2_T_1
                            : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_lru_2_T)
                        : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T))
                            ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_lru_2_T_1
                            : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_lru_2_T))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___GEN_0));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_14));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType 
            = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 4U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                         ? 4U : ((0x1bU == (0x707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                  ? 4U : ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                           ? 4U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 4U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 4U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 4U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 4U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 4U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 4U
                                                         : 
                                                        ((0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 4U
                                                          : 
                                                         ((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 4U
                                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_206)))))))))))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType 
            = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 0x2cU : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                            ? 0x2dU : ((0x1bU == (0x707fU 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                        ? 0x2fU : (
                                                   (0x3bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 0x2eU
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 8U
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 9U
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 4U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 0x37U
                                                        : 
                                                       ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 0x3cU
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 0x3eU
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 0x34U
                                                           : 
                                                          ((0x6063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                            ? 0x36U
                                                            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_278)))))))))))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)
                ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)
                ? 0ULL : ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr))
                           ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs2_data_T_6));
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data;
        __Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc 
            = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en 
            = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[2U] 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_valid));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_valid;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid 
            = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret 
            = ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu_io_valid));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_exception = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_exception = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_exception 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu_io_valid));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_fence_i = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_fence_i = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_fence_i 
            = ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu_io_valid));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                     == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                  >> 0xfU))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))
                    ? vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data
                    : ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                        >> 0xfU))) ? 0ULL
                        : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                  >> 0xfU))]));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                     == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                  >> 0x14U))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))
                    ? vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data
                    : ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                        >> 0x14U)))
                        ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                  >> 0x14U))]));
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] 
        = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_50[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_50[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
        = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_50[2U]);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_rs_en = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_rs_en = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_rs_en 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_valid;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_w_rs_en = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_w_rs_en = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_w_rs_en 
            = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_rd_result = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_rd_result = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_rd_result 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__valid));
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                    ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1));
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_7;
        }
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
        } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__valid) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_state_T_3));
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_6;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
            = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
               << 1U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                             << 1U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
            = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                      << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                  >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                               << 1U)));
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[2U];
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType 
            = (0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid = 0U;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_8;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        VL_EXTEND_WI(65,32, __Vtemp34, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data));
        VL_EXTEND_WQ(65,64, __Vtemp37, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
        if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[0U]
                    : __Vtemp34[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[1U]
                    : __Vtemp34[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[2U]
                    : __Vtemp34[2U]);
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U]
                    : __Vtemp37[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U]
                    : __Vtemp37[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U]
                    : __Vtemp37[2U]);
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
            = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
               << 1U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                             << 1U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
                             << 1U));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        VL_ADD_W(3, __Vtemp44, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor);
        __Vtemp45[0U] = 1U;
        __Vtemp45[1U] = 0U;
        __Vtemp45[2U] = 0U;
        __Vtemp46[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]);
        __Vtemp46[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]);
        __Vtemp46[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U]);
        VL_ADD_W(3, __Vtemp47, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem, __Vtemp46);
        VL_ADD_W(3, __Vtemp48, __Vtemp45, __Vtemp47);
        if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                = __Vtemp44[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                = __Vtemp44[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                = (1U & __Vtemp44[2U]);
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                = __Vtemp48[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                = __Vtemp48[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                = (1U & __Vtemp48[2U]);
        }
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
                << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U] 
                             >> 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
                << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
                             >> 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
            = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
                     >> 2U));
    } else if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[2U];
    }
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = ((IData)(vlSelf->reset) ? 0U : ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                           ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                               ? 0U
                                               : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__valid)
                                                   ? 1U
                                                   : 0U))
                                           : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                               ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                                   ? 0U
                                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_state_T_3))
                                               : ((2U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                                   ? 
                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                                    ? 0U
                                                    : 3U)
                                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22)))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                    ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1));
        } else if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__valid)
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)
                : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid = 0U;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__valid));
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_20;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtval = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtval = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtval = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtval 
            = vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mtval_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus 
            = vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mstatus_T_3;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus 
            = vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mstatus_T_3;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus 
            = vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mstatus_T_9;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w) {
                vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip 
                    = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_msip_T_1;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp = 0xffffffffffffffffULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w) {
                vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                    = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtimecmp_T;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready = 0U;
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_6;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata 
                = ((0xbff8U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
                    ? vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime
                    : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___temp_data_T_4);
        }
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2) {
                __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = 0U;
            }
        }
    } else {
        __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
            = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_5;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T_1);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        VL_EXTEND_WQ(128,54, __Vtemp55, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp55[0U];
        __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp55[1U];
        __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp55[2U];
        __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp55[3U];
        __Vdlyvset__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        VL_EXTEND_WQ(128,54, __Vtemp56, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp56[0U];
        __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp56[1U];
        __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp56[2U];
        __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp56[3U];
        __Vdlyvset__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1
                    : ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))
                        ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))
                            ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1
                            : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T)
                        : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))
                            ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1
                            : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcause = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcause 
            = (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exception));
    } else if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcause 
            = (0x8000000000000000ULL | (QData)((IData)(
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_time_irq)
                                                         ? 7U
                                                         : 3U))));
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcause 
            = vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mcause_T_3;
    }
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcycle 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)
                                             ? ((0xb00U 
                                                 == 
                                                 (0xfffU 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
                                                 : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mcycle_T_2)
                                             : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mcycle_T_2));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1));
    }
    __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_4)
                                           ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)
                                               ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready)
                                                   ? 1U
                                                   : 2U)
                                               : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                                                   ? 
                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready)
                                                    ? 1U
                                                    : 2U)
                                                   : 
                                                  (1U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid)
                                                       ? 
                                                      (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))
                                                       : 
                                                      (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                                                        & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w))) 
                                                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)))))))
                                           : (((0U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready)))
                                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5)
                                               : ((
                                                   (1U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready)))
                                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5)
                                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_23)))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)
                ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc
                : vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_next_pc);
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc 
            = vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mepc_T_2;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mscratch = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
        if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
            if ((0x340U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mscratch 
                    = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtvec = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
        if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
            if ((0x305U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtvec 
                    = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mie = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
        if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
            if ((0x304U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mie 
                    = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data;
            }
        }
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
               | (vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][0U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])));
        __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
               | (vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][1U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])));
        __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
               | (vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][2U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])));
        __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
               | (vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][3U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])));
        __Vdlyvset__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0 
            = (0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                         : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                    >> 4U))));
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][0U];
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][1U];
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][2U];
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][3U];
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
               | (vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][0U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])));
        __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
               | (vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][1U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])));
        __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
               | (vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][2U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])));
        __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
               | (vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][3U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])));
        __Vdlyvset__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0 
            = (0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                         : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                    >> 4U))));
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][0U];
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][1U];
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][2U];
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][3U];
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data 
                = ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                      >> 0x14U) == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))) 
                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en))
                    ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
                    : ((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                   >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret
                        : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___csr_rdata_T_33));
        }
    }
    if (__Vdlyvset__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__sram0__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__sram0__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__sram0__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__sram2__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__sram2__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__sram2__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__sram1__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__sram1__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__sram1__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__sram3__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__sram3__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__sram3__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[__Vdlyvdim0__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    if (__Vdlyvset__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__sram5__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__sram5__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__sram5__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__sram7__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__sram7__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__sram7__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0[3U];
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_33));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid) {
                vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr 
                    = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_9;
            }
        }
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr 
            = (8ULL + vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid) {
                vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid 
                    = (0U != (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen));
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_1;
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state = 0U;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid) {
                __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
                    = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_7;
            }
        }
    } else {
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_2;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                    ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr
                    : 0ULL));
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT___reg_w_addr_T_1;
    }
    if (__Vdlyvset__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0[3U];
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_34));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_20));
    vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall)
            ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr 
                = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                            >> 0x14U));
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_state_T_3 
        = ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt))
            ? 2U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state));
    __Vtemp75[0U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                      << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                                   >> 2U));
    __Vtemp75[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                      << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                                   >> 2U));
    __Vtemp75[2U] = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                           >> 2U));
    VL_EXTEND_WW(67,65, __Vtemp76, __Vtemp75);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[0U] 
        = __Vtemp76[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[1U] 
        = __Vtemp76[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[2U] 
        = __Vtemp76[2U];
    VL_EXTEND_WW(131,130, __Vtemp78, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    __Vtemp80[0U] = 1U;
    __Vtemp80[1U] = 0U;
    __Vtemp80[2U] = 0U;
    __Vtemp80[3U] = 0U;
    __Vtemp80[4U] = 0U;
    __Vtemp81[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp81[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp81[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp81[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp81[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp82, __Vtemp80, __Vtemp81);
    __Vtemp83[0U] = __Vtemp82[0U];
    __Vtemp83[1U] = __Vtemp82[1U];
    __Vtemp83[2U] = __Vtemp82[2U];
    __Vtemp83[3U] = __Vtemp82[3U];
    __Vtemp83[4U] = (3U & __Vtemp82[4U]);
    VL_EXTEND_WW(131,130, __Vtemp84, __Vtemp83);
    __Vtemp86[0U] = 1U;
    __Vtemp86[1U] = 0U;
    __Vtemp86[2U] = 0U;
    __Vtemp86[3U] = 0U;
    __Vtemp86[4U] = 0U;
    __Vtemp87[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp87[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp87[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp87[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp87[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp88, __Vtemp86, __Vtemp87);
    __Vtemp89[0U] = __Vtemp88[0U];
    __Vtemp89[1U] = __Vtemp88[1U];
    __Vtemp89[2U] = __Vtemp88[2U];
    __Vtemp89[3U] = __Vtemp88[3U];
    __Vtemp89[4U] = (3U & __Vtemp88[4U]);
    VL_EXTEND_WW(131,130, __Vtemp90, __Vtemp89);
    __Vtemp92[0U] = 1U;
    __Vtemp92[1U] = 0U;
    __Vtemp92[2U] = 0U;
    __Vtemp92[3U] = 0U;
    __Vtemp92[4U] = 0U;
    __Vtemp93[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp93[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp93[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp93[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp93[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp94, __Vtemp92, __Vtemp93);
    if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp102[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        __Vtemp102[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        __Vtemp102[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        __Vtemp102[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        __Vtemp102[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    } else {
        __Vtemp102[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                           : 0U);
        __Vtemp102[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                           : 0U);
        __Vtemp102[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                           : 0U);
        __Vtemp102[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                           : 0U);
        __Vtemp102[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                           : 0U);
    }
    VL_EXTEND_WW(131,130, __Vtemp103, __Vtemp102);
    if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp111[0U] = __Vtemp84[0U];
        __Vtemp111[1U] = __Vtemp84[1U];
        __Vtemp111[2U] = __Vtemp84[2U];
        __Vtemp111[3U] = __Vtemp84[3U];
        __Vtemp111[4U] = __Vtemp84[4U];
    } else {
        __Vtemp111[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp90[0U] : ((4U == 
                                               (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                               ? (__Vtemp94[0U] 
                                                  << 1U)
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                   ? 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                   << 1U)
                                                   : 
                                                  __Vtemp103[0U])));
        __Vtemp111[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp90[1U] : ((4U == 
                                               (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                               ? ((
                                                   __Vtemp94[0U] 
                                                   >> 0x1fU) 
                                                  | (__Vtemp94[1U] 
                                                     << 1U))
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                   ? 
                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                      << 1U))
                                                   : 
                                                  __Vtemp103[1U])));
        __Vtemp111[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp90[2U] : ((4U == 
                                               (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                               ? ((
                                                   __Vtemp94[1U] 
                                                   >> 0x1fU) 
                                                  | (__Vtemp94[2U] 
                                                     << 1U))
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                   ? 
                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                      << 1U))
                                                   : 
                                                  __Vtemp103[2U])));
        __Vtemp111[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp90[3U] : ((4U == 
                                               (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                               ? ((
                                                   __Vtemp94[2U] 
                                                   >> 0x1fU) 
                                                  | (__Vtemp94[3U] 
                                                     << 1U))
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                   ? 
                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                      << 1U))
                                                   : 
                                                  __Vtemp103[3U])));
        __Vtemp111[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp90[4U] : ((4U == 
                                               (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                               ? ((
                                                   __Vtemp94[3U] 
                                                   >> 0x1fU) 
                                                  | (6U 
                                                     & (__Vtemp94[4U] 
                                                        << 1U)))
                                               : ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                   ? 
                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                                      << 1U))
                                                   : 
                                                  __Vtemp103[4U])));
    }
    VL_ADD_W(5, __Vtemp112, __Vtemp78, __Vtemp111);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U] 
        = __Vtemp112[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U] 
        = __Vtemp112[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U] 
        = __Vtemp112[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U] 
        = __Vtemp112[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U] 
        = (7U & __Vtemp112[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_state_T_3 
        = ((0x40U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt))
            ? 2U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall));
    __Vtemp116[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                      << 1U);
    __Vtemp116[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                    << 1U));
    __Vtemp116[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       << 3U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                  >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                               << 1U)));
    __Vtemp116[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                    << 3U));
    __Vtemp116[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                       >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                    << 3U));
    __Vtemp120[0U] = 1U;
    __Vtemp120[1U] = 0U;
    __Vtemp120[2U] = 0U;
    __Vtemp121[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp121[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp121[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp122, __Vtemp120, __Vtemp121);
    __Vtemp127[0U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                       ? 0U : 1U);
    __Vtemp127[1U] = 0U;
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))) {
        __Vtemp127[2U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                          << 2U);
        __Vtemp127[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                           >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                        << 2U));
        __Vtemp127[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                           >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                        << 2U));
    } else {
        __Vtemp127[2U] = (__Vtemp122[0U] << 2U);
        __Vtemp127[3U] = ((__Vtemp122[0U] >> 0x1eU) 
                          | (__Vtemp122[1U] << 2U));
        __Vtemp127[4U] = ((__Vtemp122[1U] >> 0x1eU) 
                          | (4U & (__Vtemp122[2U] << 2U)));
    }
    VL_EXTEND_WW(132,131, __Vtemp128, __Vtemp127);
    VL_ADD_W(5, __Vtemp129, __Vtemp116, __Vtemp128);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[0U] 
        = __Vtemp129[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[1U] 
        = __Vtemp129[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U] 
        = __Vtemp129[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
        = __Vtemp129[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
        = (0xfU & __Vtemp129[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4 
        = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                 ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]));
    __Vtemp133[0U] = 1U;
    __Vtemp133[1U] = 0U;
    __Vtemp133[2U] = 0U;
    __Vtemp134[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp134[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp134[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp135, __Vtemp133, __Vtemp134);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct 
        = ((((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
              ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                 >> 1U)) & (0U != ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                   | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))) 
            | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        ^ __Vtemp135[0U]) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                             ^ __Vtemp135[1U])) 
                      | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                         ^ (1U & __Vtemp135[2U]))))) 
           | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                      | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))));
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mstatus_T_3 
        = ((0xffffffffffffff77ULL & vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus) 
           | ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus 
                             >> 3U))) ? 0x1880ULL : 0x1800ULL));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime 
        = ((IData)(vlSelf->reset) ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1);
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mcycle_T_2 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcycle);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1));
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_10)));
    }
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)
                                             ? ((0xb02U 
                                                 == 
                                                 (0xfffU 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
                                                 : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_minstret_T_3)
                                             : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_minstret_T_3));
    vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen 
        = (0xfU & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_39));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___reg_w_addr_T_1 
        = (8ULL + vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T 
        = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_4 
        = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5 
        = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                 - (IData)(1U)));
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
            __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state = 1U;
        }
    } else {
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                    ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T)) 
                        | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T)))
                        ? 3U : 2U) : 2U) : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                             ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_39)
                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_44)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag 
                = (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                   >> 0xaU);
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index 
                = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                    >> 4U)));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset 
                = (0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_18;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_40)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_42));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata = 0ULL;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_17;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_36;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write = 0U;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_38)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_41));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U] = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_37[0U];
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_37[1U];
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_37[2U];
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_37[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag 
                = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                          ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0))
                          : ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T) 
                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T)))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T)
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T))));
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid 
        = ((~ (IData)(vlSelf->reset)) & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state)) 
                                         & ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                             ? ((~ 
                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) 
                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_21))
                                             : ((2U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                                 ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_35)
                                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_43)))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_16;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation = 0U;
    }
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = ((IData)(vlSelf->reset) ? 0U : ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                           ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)
                                               ? 1U
                                               : 0U)
                                           : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                               ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                                   ? 
                                                  ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))
                                                    ? 3U
                                                    : 2U)
                                                   : 2U)
                                               : ((2U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_98)
                                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_105)))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata 
                = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb 
                = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w 
                = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                = (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                   >> 0xaU);
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index 
                = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                    >> 4U)));
        }
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
                = (0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_32;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_99)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_101));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata = 0ULL;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_33;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_83;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_29;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_97)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_100));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb 
                = ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_1)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_2));
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_80;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[0U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[1U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[2U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[3U];
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[0U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[1U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[2U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag 
                = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                          ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0))
                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T)
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid 
        = ((~ (IData)(vlSelf->reset)) & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
                                         & ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                             ? ((~ 
                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) 
                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_35))
                                             : ((2U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                                 ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_79)
                                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_104)))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata = 0ULL;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_94;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_53;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_91;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_49;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_92)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_102));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_50;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_96)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_103));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_23;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_55;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_93;
        }
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_7 = 
        ((0U != (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)) 
         & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen))) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_9 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr;
        vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast 
            = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid) 
               & 1U);
    } else {
        vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_9 
            = (8ULL + vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr);
        vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_44 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
            ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_41 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_42 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag 
           == (0x3fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag 
           == (0x3fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram2_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_lru_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_lru_2_T_1 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2 
           & (~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_r_raddr_T 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag 
            << 6U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_43 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_1 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb) 
           << 8U);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_2 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
    __Vtemp137[1U] = (IData)((((QData)((IData)(((((0x8000U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                   ? 0xffU
                                                   : 0U) 
                                                 << 0x18U) 
                                                | ((((0x4000U 
                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                      ? 0xffU
                                                      : 0U) 
                                                    << 0x10U) 
                                                   | ((((0x2000U 
                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                         ? 0xffU
                                                         : 0U) 
                                                       << 8U) 
                                                      | ((0x1000U 
                                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                          ? 0xffU
                                                          : 0U)))))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((((0x800U 
                                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                               ? 0xffU
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((0x400U 
                                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                  ? 0xffU
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((0x200U 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                     ? 0xffU
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((0x100U 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                      ? 0xffU
                                                                      : 0U))))))));
    __Vtemp137[2U] = (IData)(((((QData)((IData)((((
                                                   (0x8000U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                    ? 0xffU
                                                    : 0U) 
                                                  << 0x18U) 
                                                 | ((((0x4000U 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                       ? 0xffU
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | ((((0x2000U 
                                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                          ? 0xffU
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((0x1000U 
                                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                           ? 0xffU
                                                           : 0U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x800U 
                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                ? 0xffU
                                                                : 0U) 
                                                              << 0x18U) 
                                                             | ((((0x400U 
                                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 0x10U) 
                                                                | ((((0x200U 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                      ? 0xffU
                                                                      : 0U) 
                                                                    << 8U) 
                                                                   | ((0x100U 
                                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                       ? 0xffU
                                                                       : 0U))))))) 
                              >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U] 
        = ((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
              ? 0xffU : 0U) << 0x18U) | ((((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                            ? 0xffU
                                            : 0U) << 0x10U) 
                                         | ((((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                               ? 0xffU
                                               : 0U) 
                                             << 8U) 
                                            | ((1U 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                ? 0xffU
                                                : 0U))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U] 
        = ((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
              ? 0xffU : 0U) << 0x18U) | ((((0x40U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                            ? 0xffU
                                            : 0U) << 0x10U) 
                                         | ((((0x20U 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                               ? 0xffU
                                               : 0U) 
                                             << 8U) 
                                            | ((0x10U 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                ? 0xffU
                                                : 0U))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U] 
        = __Vtemp137[1U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U] 
        = __Vtemp137[2U];
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb 
        = (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_79));
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
    VL_EXTEND_WQ(128,64, __Vtemp141, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata);
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
            = __Vtemp141[0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U] 
            = __Vtemp141[1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U] 
            = __Vtemp141[2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U] 
            = __Vtemp141[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_105 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
            ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_100 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_101 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_103 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
           == (0x3fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram5__DOT__sram_Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
           == (0x3fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram7__DOT__sram_Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_102 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T_1 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
           & (~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T_1 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
           & (~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
           & (~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
        = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
            << 6U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_104 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall = 0U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)))) {
        __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_4;
    }
    __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_irq))
                                          : ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)) 
                                             & (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)) 
                                                 & (0U 
                                                    != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))) 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except) 
                                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_mret))))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result;
            }
        }
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w = 0U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
            __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w 
                = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en) 
                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                         >> 1U)));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid = 0U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_9;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)))) {
            vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr 
                = (0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data 
                    = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data_result;
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                ? 0ULL : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data
                           : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___reg_rs_data_T_6));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en 
                    = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w)));
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)) 
               & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)) 
                  & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit 
                = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_29;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)) 
               & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)) 
                  & (0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType 
            = vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType;
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state = 0U;
            }
        }
    } else {
        __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr 
            = (QData)((IData)(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_mret)
                                ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_mret)
                ? ((0xffffffffffffff77ULL & vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mstatus) 
                   | (QData)((IData)(((1U & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mstatus 
                                                     >> 7U)))
                                       ? 0x88U : 0x80U))))
                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_csr_result);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_csr_en = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_csr_en = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_csr_en 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_mret) 
               | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_csr_en)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
            vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush_pc 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_irq)
                    ? (0xfffffffffffffffcULL & vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mtvec)
                    : 0ULL);
        }
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)))) {
        if (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)) 
             & (0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType)))) {
            vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush_pc 
                = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___reg_flush_pc_T_6;
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_time_irq 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_time_irq))
                                          : ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)) 
                                             & (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)) 
                                                 & (0U 
                                                    != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_time_irq)))));
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_soft_irq 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_soft_irq))
                                          : ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)) 
                                             & (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)) 
                                                 & (0U 
                                                    != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_soft_irq)))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exception = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exception = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exception 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_exception;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception 
            = vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_exception;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_next_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_next_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_next_pc 
            = (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_next_pc
                : (4ULL + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc));
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_18 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T)) 
            | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T))) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_21 
        = (1U & ((~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T)) 
                     | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T)))) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_17 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T)) 
            | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T)))
            ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0)
                ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
                    ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[2U])))
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[0U]))))
                : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
                    ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[2U])))
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[0U])))))
            : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_32 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
            | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_35 
        = (1U & ((~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
                     | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)));
    if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
         | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_29 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[0U]
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U]
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U]
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U]
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_33 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0)
                    ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                        ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[2U])))
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[0U]))))
                    : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                        ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[2U])))
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[0U]))))));
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
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T 
        = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T) 
                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)));
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state 
        = __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state;
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush 
        = __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush;
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w;
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_49 
            = (1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                      | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_50 
            = (1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                      | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready)));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_53 
            = ((~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                    & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                   | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T)))) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_55 
            = ((1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                      | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))))
                ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52 
            = ((1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                      | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))))
                ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))
                    ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[0U])))
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[0U]))))
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_49 
            = (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_50 
            = (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_53 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_55 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata;
    }
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_minstret_T_3 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit)
            ? (1ULL + vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret)
            : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret);
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mepc_T_2 
        = ((0x341U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc);
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mcause_T_3 
        = ((0x342U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcause);
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mtval_T_1 
        = ((0x343U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtval);
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mstatus_T_9 
        = ((0x300U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)
                ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)
                ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr));
    }
    if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                >> 4U)));
    }
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___temp_data_T_4 
        = ((0x4000U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp
            : ((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
                ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip))
                : 0ULL));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_msip_T_1 
        = (1U & ((0U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
                  ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata)
                  : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip)));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtimecmp_T 
        = ((0x4000U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata
            : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid 
        = ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                     >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint 
        = ((0x2000000U > (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr))) 
           | (0x200ffffU < (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr 
            = (QData)((IData)(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)
                                ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_csr_result = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_csr_result = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_csr_result 
            = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U])));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_exception = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_exception = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_exception 
            = ((3U == (3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))
                ? 0xbU : ((1U == (3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))
                           ? 3U : 0U));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_valid) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                  >> 2U));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data 
            = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U])));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result 
            = (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr))
                 ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs1_data_T_6) 
               + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)
                ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid));
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall)
            ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_23 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid 
        = (((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                      >> 0x1fU)) & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
        = ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                     >> 0x1fU)) ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                ? vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata
                : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid 
        = (((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                      >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid));
    vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall)
            ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType));
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall 
        = __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid 
        = ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType))
            ? 0x10U : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType))
                        ? 8U : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType))
                                 ? 4U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType))
                                          ? 2U : (4U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType))))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr 
                = (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                   >> 0x14U);
        }
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
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data 
        = ((7U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
            ? (QData)((IData)((0xffU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                                >> 0x38U)))))
            : ((6U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
                ? (QData)((IData)((0xffffU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                                      >> 0x30U)))))
                : ((5U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
                    ? (QData)((IData)((0xffffffU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                                            >> 0x28U)))))
                    : ((4U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
                        ? (QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                           >> 0x20U)))
                        : ((3U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
                            ? (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                               >> 0x18U) : ((2U == 
                                             (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
                                             ? (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                                >> 0x10U)
                                             : ((1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
                                                 ? 
                                                (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                                 >> 8U)
                                                 : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata)))))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)
                ? 0U : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w))
                         ? 1U : 2U)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr 
                = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                            >> 7U));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                    ? (QData)((IData)((0x3fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                >> 0x14U))))
                    : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                        ? (QData)((IData)((0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                            >> 0xfU))))
                        : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_51));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr 
                = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                            >> 0xfU));
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_time_irq 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_time_irq));
    vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush));
    vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_csr_en));
    if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr;
        vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data;
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_fence_i 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_fence_i) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
              >> 4U));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_next_pc 
        = ((0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
            ? (4ULL + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc)
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc);
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_mret 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
              >> 4U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_csr_en 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
              >> 2U));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_exception 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_exception) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
              >> 4U));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_stall 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
              >> 3U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid)) 
           | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_fence_i) 
              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                 >> 4U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
           | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall) 
              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                 >> 3U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en 
        = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_w_rs_en)
            : ((~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                   >> 1U)) & ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_rs_en)
                               : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                   >> 3U) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid) 
                                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___reg_rs_data_T_6 
        = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
            ? 0ULL : ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                       ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_rd_result
                       : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                           ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid)
                                ? ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                    ? ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                        ? (((QData)((IData)(
                                                            ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                              >> 0x1fU)
                                                              ? 0xffffffffU
                                                              : 0U))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                        : (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))
                                    : ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                        ? (((QData)((IData)(
                                                            ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                              >> 0x1fU)
                                                              ? 0xffffffffU
                                                              : 0U))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                        : (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))
                                : 0ULL) | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid)
                                            ? ((4U 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                                ? (
                                                   ((QData)((IData)(
                                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                                      >> 0x1fU)
                                                                      ? 0xffffffffU
                                                                      : 0U))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))))
                                            : 0ULL))
                           : 0ULL)));
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data_result 
        = ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
            ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data))
            : ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                ? (((QData)((IData)(((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data)))
                : ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                    ? (QData)((IData)((0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data))))
                    : ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                        ? ((((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data 
                                            >> 0xfU)))
                              ? 0xffffffffffffULL : 0ULL) 
                            << 0x10U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data)))))
                        : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                            ? (QData)((IData)((0xffU 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data))))
                            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                ? ((((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data 
                                                    >> 7U)))
                                      ? 0xffffffffffffffULL
                                      : 0ULL) << 8U) 
                                   | (QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data)))))
                                : ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data
                                    : 0ULL)))))));
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb = 0xffU;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb)
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
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w)));
    riscv_soc__DOT__core__DOT__d_cache__DOT___T_17 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready) 
           & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
              & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)));
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_time_irq) 
           | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_soft_irq)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
            ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)
                         : 0U)) : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_5 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall)));
    if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_6 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_7 = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_6 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)
                : 0U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_7 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)
                : 0U);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_8 
        = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)) 
                 & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid))));
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_20 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21 
            = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)) 
                     & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)) 
                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)
                         : 0U));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_20 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21 
            = (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt;
    }
    VL_ADD_W(3, __Vtemp149, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    __Vtemp150[0U] = 1U;
    __Vtemp150[1U] = 0U;
    __Vtemp150[2U] = 0U;
    __Vtemp151[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp151[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp151[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp152, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp151);
    VL_ADD_W(3, __Vtemp153, __Vtemp150, __Vtemp152);
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]
                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                                 ? __Vtemp149[0U] : 
                                __Vtemp153[0U]) : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]
                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                                 ? __Vtemp149[1U] : 
                                __Vtemp153[1U]) : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[2U] 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                      ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]
                               : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                                   ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                                       ? __Vtemp149[2U]
                                       : __Vtemp153[2U])
                                   : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mtvec 
        = (((0x305U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en))
            ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtvec);
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mstatus 
        = (((0x300U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en))
            ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus);
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mie 
        = (((0x304U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en))
            ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mie);
    vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_stall));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid 
        = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                 & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_valid 
        = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                  >> 1U) & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_valid 
        = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                  >> 2U) & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu_io_valid 
        = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                  >> 4U) & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_in_valid 
        = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                  >> 3U) & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush))));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)
            ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
           & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                  >> 1U)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                             >> 1U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data 
        = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___reg_rs_data_T_6);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
             == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_csr_en))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_csr_result
            : ((((0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)) 
                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en))
                ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
                : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data));
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
                    ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[2U])))
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[2U])))));
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
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
        = (vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc 
           + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst = 0U;
        } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                  >> 2U))) ? (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                      >> 0x20U))
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata));
        }
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update)
                ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst
                : 0U);
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_soft_irq 
        = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mstatus 
                     >> 3U)) & (IData)((vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mie 
                                        >> 3U))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_time_irq 
        = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mstatus 
                     >> 3U)) & (IData)((vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mie 
                                        >> 7U))) & 
           (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
            <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__valid 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_in_valid) 
             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                >> 4U)) & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall))) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__valid 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_in_valid) 
             & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                   >> 4U))) & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall))) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)));
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_4 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall));
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_9 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid));
    vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs1_data_T_6 
        = (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr 
             == (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr))) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data
            : ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))
                ? vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data
                : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs2_data_T_6 
        = (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr 
             == (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr))) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data
            : ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))
                ? vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data
                : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data));
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
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__need_update;
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_time_irq) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_soft_irq));
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_exception) 
            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_time_irq)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_soft_irq));
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_rs1_data = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_rs1_data 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs1_data_T_6;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs1_data_T_6;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs1_data_T_6;
    }
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2 = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs2_data_T_6;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs2_data_T_6;
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___GEN_0 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)
               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall)
               : (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                   & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                         >> 2U))) & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr) 
                                      == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                   >> 0xfU))) 
                                     | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr) 
                                        == (0x1fU & 
                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                             >> 0x14U)))))));
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___csr_rdata_T_33 
        = ((0xb00U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                       >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcycle
            : ((0x344U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                           >> 0x14U)) ? 0ULL : ((0x343U 
                                                 == 
                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                  >> 0x14U))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtval
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                   >> 0x14U))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcause
                                                  : 
                                                 ((0x341U 
                                                   == 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                    >> 0x14U))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc
                                                   : 
                                                  ((0x340U 
                                                    == 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mscratch
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                      >> 0x14U))
                                                     ? 0ULL
                                                     : 
                                                    ((0x305U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtvec
                                                      : 
                                                     ((0x304U 
                                                       == 
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                        >> 0x14U))
                                                       ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mie
                                                       : 
                                                      ((0x303U 
                                                        == 
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                         >> 0x14U))
                                                        ? 0ULL
                                                        : 
                                                       ((0x302U 
                                                         == 
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                          >> 0x14U))
                                                         ? 0ULL
                                                         : 
                                                        ((0x301U 
                                                          == 
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                           >> 0x14U))
                                                          ? 0ULL
                                                          : 
                                                         ((0x300U 
                                                           == 
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                            >> 0x14U))
                                                           ? vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus
                                                           : 0ULL)))))))))))));
    if ((0x2000033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
        riscv_soc__DOT__core__DOT__decode__DOT___T_161 = 3U;
        riscv_soc__DOT__core__DOT__decode__DOT___T_233 = 3U;
        riscv_soc__DOT__core__DOT__decode__DOT___T_305 = 6U;
    } else {
        riscv_soc__DOT__core__DOT__decode__DOT___T_161 
            = ((0x2001033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 3U : ((0x2002033U == (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                         ? 3U : ((0x2003033U == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                  ? 3U : ((0x200003bU 
                                           == (0xfe00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                           ? 3U : (
                                                   (0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 3U
                                                    : 
                                                   ((0x2007033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x200703bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 3U
                                                      : 
                                                     ((0x200603bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 3U
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 4U
                                                        : 
                                                       ((0x67U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 4U
                                                         : 
                                                        ((0x100073U 
                                                          == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst)
                                                          ? 5U
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0xf00fffffU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 5U
                                                           : 
                                                          ((0x100fU 
                                                            == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst)
                                                            ? 5U
                                                            : 
                                                           ((0x30200073U 
                                                             == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst)
                                                             ? 5U
                                                             : 
                                                            ((0x73U 
                                                              == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst)
                                                              ? 5U
                                                              : 0U)))))))))))))));
        riscv_soc__DOT__core__DOT__decode__DOT___T_233 
            = ((0x2001033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 0xbU : ((0x2002033U == (0xfe00707fU 
                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                           ? 0xaU : ((0x2003033U == 
                                      (0xfe00707fU 
                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                      ? 8U : ((0x200003bU 
                                               == (0xfe00707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                               ? 7U
                                               : ((0x2006033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                   ? 0x15U
                                                   : 
                                                  ((0x2007033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 0x14U
                                                    : 
                                                   ((0x200703bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 0x16U
                                                     : 
                                                    ((0x200603bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 0x17U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 0x38U
                                                       : 
                                                      ((0x67U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 0x39U
                                                        : 
                                                       ((0x100073U 
                                                         == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst)
                                                         ? 1U
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0xf00fffffU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 4U
                                                          : 
                                                         ((0x100fU 
                                                           == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst)
                                                           ? 8U
                                                           : 
                                                          ((0x30200073U 
                                                            == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst)
                                                            ? 0xcU
                                                            : 
                                                           ((0x73U 
                                                             == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst)
                                                             ? 3U
                                                             : 0U)))))))))))))));
        riscv_soc__DOT__core__DOT__decode__DOT___T_305 
            = ((0x2001033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 6U : ((0x2002033U == (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                         ? 6U : ((0x2003033U == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                  ? 6U : ((0x200003bU 
                                           == (0xfe00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                           ? 6U : (
                                                   (0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 6U
                                                    : 
                                                   ((0x2007033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 6U
                                                     : 
                                                    ((0x200703bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 6U
                                                      : 
                                                     ((0x200603bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 6U
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 2U
                                                        : 
                                                       ((0x67U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 0xcU
                                                         : 
                                                        ((0x100073U 
                                                          == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst)
                                                          ? 0xdU
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0xf00fffffU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 0xdU
                                                           : 
                                                          ((0x100fU 
                                                            == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst)
                                                            ? 0xdU
                                                            : 
                                                           ((0x30200073U 
                                                             == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst)
                                                             ? 0xdU
                                                             : 
                                                            ((0x73U 
                                                              == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst)
                                                              ? 0xdU
                                                              : 0U)))))))))))))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) 
             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1 = 0ULL;
        } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
        }
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1 = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_pc_1 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
        if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
              & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush))) 
             & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_pc_1 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
        if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
              & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush))) 
             & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                  >> 2U))) ? (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
                                                      >> 0x20U))
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 = 0x80000000ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)
                ? vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc
                    : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_0_T_1));
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___reg_flush_pc_T_6 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except)
            ? (0xfffffffffffffffcULL & vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mtvec)
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_is_mret)
                ? (((0x341U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))) 
                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en))
                    ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
                    : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc)
                : 0ULL));
    if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
        __Vtemp179[1U] = (IData)((((~ vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm) 
                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data) 
                                  >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
            = (IData)(((~ vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm) 
                       & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data));
    } else {
        __Vtemp179[1U] = ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                           ? (IData)((((~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_rs1_data) 
                                       & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data) 
                                      >> 0x20U)) : 
                          ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                            ? (IData)((((0xffffffffffffffe0ULL 
                                         & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data) 
                                        | (QData)((IData)(
                                                          (0x1fU 
                                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))))) 
                                       >> 0x20U)) : 
                           ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                             ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_rs1_data 
                                        >> 0x20U)) : 
                            ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                              ? (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data 
                                          | vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm) 
                                         >> 0x20U))
                              : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                  ? (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_rs1_data 
                                              | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data) 
                                             >> 0x20U))
                                  : 0U)))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
            = ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (IData)(((~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_rs1_data) 
                           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data))
                : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? (IData)(((0xffffffffffffffe0ULL 
                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data) 
                               | (QData)((IData)((0x1fU 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))))))
                    : ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_rs1_data)
                        : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                            ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data 
                                       | vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))
                            : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_rs1_data 
                                           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data))
                                : 0U)))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[1U] 
        = __Vtemp179[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[2U] 
        = ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
            ? 1U : ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                     ? 1U : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                              ? 1U : ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                       ? 1U : ((3U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                ? 1U
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                    ? 1U
                                                    : 0U))))));
    if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[0U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                  >> 0x1fU))) ? 0xffffffffU
                    : 0U) : 0U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                  >> 0x1fU))) ? 0xffffffffU
                    : 0U) : 0U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                  >> 0x1fU))) ? 1U : 0U)
                : 0U);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[0U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                  >> 0x3fU))) ? 0xffffffffU
                    : 0U) : 0U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                  >> 0x3fU))) ? 0xffffffffU
                    : 0U) : 0U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                  >> 0x3fU))) ? 1U : 0U)
                : 0U);
    }
    VL_EXTEND_WI(65,32, __Vtemp197, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data));
    VL_EXTEND_WQ(65,64, __Vtemp201, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
    if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                : __Vtemp197[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                          >> 0x1fU)))
                            ? 0x1ffffffffULL : 0ULL))
                : __Vtemp197[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (IData)((((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                           >> 0x1fU)))
                             ? 0x1ffffffffULL : 0ULL) 
                           >> 0x20U)) : __Vtemp197[2U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                : __Vtemp201[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                           >> 0x20U)) : __Vtemp201[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                 >> 0x3fU))) : __Vtemp201[2U]);
    }
    VL_EXTEND_WQ(65,64, __Vtemp208, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
    if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
            = (IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                      >> 0x1fU))) ? 0x1ffffffffULL
                        : 0ULL));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
            = (IData)((((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                       >> 0x1fU))) ? 0x1ffffffffULL
                         : 0ULL) >> 0x20U));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data)
                : __Vtemp208[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                           >> 0x20U)) : __Vtemp208[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                 >> 0x3fU))) : __Vtemp208[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[0U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[1U] 
        = (IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                  >> 0x1fU))) ? 0x1ffffffffULL
                    : 0ULL));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[2U] 
        = (IData)((((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                   >> 0x1fU))) ? 0x1ffffffffULL
                     : 0ULL) >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U] 
        = (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                         >> 0x3fU)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
        = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
            ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2);
    if ((0x5033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
        riscv_soc__DOT__core__DOT__decode__DOT___T_176 = 4U;
        riscv_soc__DOT__core__DOT__decode__DOT___T_248 = 0x20U;
        riscv_soc__DOT__core__DOT__decode__DOT___T_320 = 6U;
    } else {
        riscv_soc__DOT__core__DOT__decode__DOT___T_176 
            = ((0x5013U == (0xfc00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 4U : ((0x501bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                         ? 4U : ((0x503bU == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                  ? 4U : ((0x40000033U 
                                           == (0xfe00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                           ? 4U : (
                                                   (0x4000003bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 4U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 4U
                                                      : 
                                                     ((0x6013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 4U
                                                       : 
                                                      ((0x4033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 4U
                                                        : 
                                                       ((0x4013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 4U
                                                         : 
                                                        ((0x2004033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 3U
                                                          : 
                                                         ((0x2005033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 3U
                                                           : 
                                                          ((0x200503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                            ? 3U
                                                            : 
                                                           ((0x200403bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                             ? 3U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_161)))))))))))))));
        riscv_soc__DOT__core__DOT__decode__DOT___T_248 
            = ((0x5013U == (0xfc00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 0x21U : ((0x501bU == (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                            ? 0x23U : ((0x503bU == 
                                        (0xfe00707fU 
                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                        ? 0x22U : (
                                                   (0x40000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 0x14U
                                                    : 
                                                   ((0x4000003bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 0x16U
                                                     : 
                                                    ((0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 0x15U
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 0x24U
                                                       : 
                                                      ((0x6013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 0x25U
                                                        : 
                                                       ((0x4033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 0x28U
                                                         : 
                                                        ((0x4013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 0x29U
                                                          : 
                                                         ((0x2004033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 0x11U
                                                           : 
                                                          ((0x2005033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                            ? 0x10U
                                                            : 
                                                           ((0x200503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                             ? 0x12U
                                                             : 
                                                            ((0x200403bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                              ? 0x13U
                                                              : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_233)))))))))))))));
        riscv_soc__DOT__core__DOT__decode__DOT___T_320 
            = ((0x5013U == (0xfc00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 4U : ((0x501bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                         ? 4U : ((0x503bU == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                  ? 6U : ((0x40000033U 
                                           == (0xfe00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                           ? 6U : (
                                                   (0x4000003bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 6U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 6U
                                                      : 
                                                     ((0x6013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 0xcU
                                                       : 
                                                      ((0x4033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 6U
                                                        : 
                                                       ((0x4013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 0xcU
                                                         : 
                                                        ((0x2004033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 6U
                                                          : 
                                                         ((0x2005033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 6U
                                                           : 
                                                          ((0x200503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                            ? 6U
                                                            : 
                                                           ((0x200403bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                             ? 6U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_305)))))))))))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall) 
            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_stall));
    VL_EXTEND_WI(65,32, __Vtemp215, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data));
    VL_EXTEND_WQ(65,64, __Vtemp218, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
    if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[0U]
                : __Vtemp215[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[1U]
                : __Vtemp215[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[2U]
                : __Vtemp215[2U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U]
                : __Vtemp218[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U]
                : __Vtemp218[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U]
                : __Vtemp218[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
        = (0x7fffffffffffffffULL & ((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1)) 
                                    << (0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1) 
           >> (0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
        = VL_SHIFTRS_IIQ(32,32,64, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1), 
                         (0x1fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
           + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data);
    VL_EXTEND_WQ(65,64, __Vtemp224, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
    VL_EXTEND_WQ(65,64, __Vtemp225, (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    VL_ADD_W(3, __Vtemp226, __Vtemp224, __Vtemp225);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U] 
        = __Vtemp226[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[1U] 
        = __Vtemp226[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[2U] 
        = (1U & __Vtemp226[2U]);
    if ((0x3023U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
        riscv_soc__DOT__core__DOT__decode__DOT___T_191 = 1U;
        riscv_soc__DOT__core__DOT__decode__DOT___T_263 = 0x1dU;
        riscv_soc__DOT__core__DOT__decode__DOT___T_335 = 3U;
    } else {
        riscv_soc__DOT__core__DOT__decode__DOT___T_191 
            = ((0x23U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 1U : ((0x1023U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                         ? 1U : ((0x1033U == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                  ? 4U : ((0x1013U 
                                           == (0xfc00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                           ? 4U : (
                                                   (0x101bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 4U
                                                    : 
                                                   ((0x103bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 4U
                                                     : 
                                                    ((0x2033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 4U
                                                      : 
                                                     ((0x2013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 4U
                                                       : 
                                                      ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 4U
                                                        : 
                                                       ((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 4U
                                                         : 
                                                        ((0x40005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 4U
                                                          : 
                                                         ((0x40005013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 4U
                                                           : 
                                                          ((0x4000501bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                            ? 4U
                                                            : 
                                                           ((0x4000503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                             ? 4U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_176)))))))))))))));
        riscv_soc__DOT__core__DOT__decode__DOT___T_263 
            = ((0x23U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 5U : ((0x1023U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                         ? 0xdU : ((0x1033U == (0xfe00707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                    ? 0x18U : ((0x1013U 
                                                == 
                                                (0xfc00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                ? 0x19U
                                                : (
                                                   (0x101bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 0x1bU
                                                    : 
                                                   ((0x103bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 0x1aU
                                                     : 
                                                    ((0x2033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 0xcU
                                                      : 
                                                     ((0x2013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 0xdU
                                                       : 
                                                      ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 0x11U
                                                        : 
                                                       ((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 0x10U
                                                         : 
                                                        ((0x40005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 0x1cU
                                                          : 
                                                         ((0x40005013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 0x1dU
                                                           : 
                                                          ((0x4000501bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                            ? 0x1fU
                                                            : 
                                                           ((0x4000503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                             ? 0x1eU
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_248)))))))))))))));
        riscv_soc__DOT__core__DOT__decode__DOT___T_335 
            = ((0x23U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 3U : ((0x1023U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                         ? 3U : ((0x1033U == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                  ? 6U : ((0x1013U 
                                           == (0xfc00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                           ? 4U : (
                                                   (0x101bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 4U
                                                    : 
                                                   ((0x103bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 6U
                                                     : 
                                                    ((0x2033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 6U
                                                      : 
                                                     ((0x2013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 0xcU
                                                       : 
                                                      ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 0xcU
                                                        : 
                                                       ((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 6U
                                                         : 
                                                        ((0x40005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 6U
                                                          : 
                                                         ((0x40005013U 
                                                           == 
                                                           (0xfc00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 4U
                                                           : 
                                                          ((0x4000501bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                            ? 4U
                                                            : 
                                                           ((0x4000503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                             ? 6U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_320)))))))))))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T_3 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update)
            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_pc_1
            : 0ULL);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc;
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_0_T_1 
        = (4ULL + vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0);
    if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                >> 4U)));
    }
    if ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                  >> 0x1fU))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
               & 1U);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid 
        = ((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                     >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid));
    __Vtemp229[0U] = 1U;
    __Vtemp229[1U] = 0U;
    __Vtemp229[2U] = 0U;
    VL_ADD_W(3, __Vtemp230, __Vtemp229, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2 
        = (1U & ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                       >> 0x3fU))))
                  ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                             >> 0x3fU)) : (__Vtemp230[1U] 
                                           >> 0x1fU)));
    if ((0x1063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_206 = 4U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_278 = 0x35U;
        riscv_soc__DOT__core__DOT__decode__DOT___T_350 = 7U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_206 
            = ((0x3073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 2U : ((0x7073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                         ? 2U : ((0x2073U == (0x707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                  ? 2U : ((0x6073U 
                                           == (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                           ? 2U : (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x5073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 2U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 1U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 1U
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 4U
                                                           : 
                                                          ((0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                            ? 1U
                                                            : 
                                                           ((0x6003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                             ? 1U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_191)))))))))))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_278 
            = ((0x3073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 6U : ((0x7073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                         ? 7U : ((0x2073U == (0x707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                  ? 2U : ((0x6073U 
                                           == (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                           ? 3U : (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 4U
                                                    : 
                                                   ((0x5073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 5U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 0x19U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 2U
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 9U
                                                         : 
                                                        ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 0xaU
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 0x30U
                                                           : 
                                                          ((0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                            ? 0x11U
                                                            : 
                                                           ((0x6003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                             ? 0x12U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_263)))))))))))))));
        riscv_soc__DOT__core__DOT__decode__DOT___T_350 
            = ((0x3073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 5U : ((0x7073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                         ? 5U : ((0x2073U == (0x707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                  ? 5U : ((0x6073U 
                                           == (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                           ? 5U : (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 5U
                                                    : 
                                                   ((0x5073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 5U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 0xcU
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 0xcU
                                                       : 
                                                      ((0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 0xcU
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 0xcU
                                                         : 
                                                        ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 0xcU
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 1U
                                                           : 
                                                          ((0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                            ? 0xcU
                                                            : 
                                                           ((0x6003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                             ? 0xcU
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_335)))))))))))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
            ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush_pc
            : vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_next_pc);
    vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_16 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_10 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid)
            ? 2U : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w)))
                     ? 3U : 0U));
    __Vtemp239[0U] = 1U;
    __Vtemp239[1U] = 0U;
    __Vtemp239[2U] = 0U;
    VL_ADD_W(3, __Vtemp240, __Vtemp239, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    __Vtemp250[0U] = 1U;
    __Vtemp250[1U] = 0U;
    __Vtemp250[2U] = 0U;
    VL_ADD_W(3, __Vtemp251, __Vtemp250, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    __Vtemp276[1U] = ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                       ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                           == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)
                           ? 0U : (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                           >> 0x20U)))
                       : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                           ? ((1U & __Vtemp240[2U])
                               ? 0U : (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                               >> 0x20U)))
                           : ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                               ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                   ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                              >> 0x20U))
                                   : 0U) : ((0x3eU 
                                             == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                             ? ((1U 
                                                 & __Vtemp251[2U])
                                                 ? (IData)(
                                                           (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                                            >> 0x20U))
                                                 : 0U)
                                             : ((0x3cU 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                 ? 
                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                  ? 0U
                                                  : (IData)(
                                                            (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                                             >> 0x20U)))
                                                 : 
                                                ((0x37U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                  ? 
                                                 ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                   == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)
                                                   ? (IData)(
                                                             (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                                              >> 0x20U))
                                                   : 0U)
                                                  : 0U))))));
    __Vtemp278[0U] = ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                       ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11)
                       : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                           ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                               == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)
                               ? 0U : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11))
                           : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                               ? ((1U & __Vtemp240[2U])
                                   ? 0U : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11))
                               : ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                   ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                       ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11)
                                       : 0U) : ((0x3eU 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                 ? 
                                                ((1U 
                                                  & __Vtemp251[2U])
                                                  ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11)
                                                  : 0U)
                                                 : 
                                                ((0x3cU 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                  ? 
                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                   ? 0U
                                                   : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11))
                                                  : 
                                                 ((0x37U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                   ? 
                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                    == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)
                                                    ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11)
                                                    : 0U)
                                                   : 0U)))))));
    if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
            = (IData)((0xfffffffffffffffeULL & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
            = (IData)(((0xfffffffffffffffeULL & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                 + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)) 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] = 1U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
            = __Vtemp278[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
            = ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                           >> 0x20U)) : __Vtemp276[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
            = ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? 1U : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                         ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                             == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)
                             ? 0U : 1U) : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                            ? ((1U 
                                                & __Vtemp240[2U])
                                                ? 0U
                                                : 1U)
                                            : ((0x34U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   (0x3eU 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                    ? 
                                                   ((1U 
                                                     & __Vtemp251[2U])
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((0x3cU 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                     ? 
                                                    ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                      ? 0U
                                                      : 1U)
                                                     : 
                                                    ((0x37U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                      ? 
                                                     ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                       == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)))))));
    }
    __Vtemp282[0U] = 1U;
    __Vtemp282[1U] = 0U;
    __Vtemp282[2U] = 0U;
    VL_ADD_W(3, __Vtemp283, __Vtemp282, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    __Vtemp288[0U] = 1U;
    __Vtemp288[1U] = 0U;
    __Vtemp288[2U] = 0U;
    VL_ADD_W(3, __Vtemp289, __Vtemp288, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    __Vtemp305[1U] = ((4U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 1U))) ? (IData)(
                                                          ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                                           >> 0x20U))
                       : ((2U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 1U)))
                           ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                      >> 0x20U)) : 
                          ((0x17U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                               >> 1U)))
                            ? (IData)((((1U & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                       >> 0x1fU)))
                                         ? (0xffffffff00000000ULL 
                                            | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp)))
                                         : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp))) 
                                       >> 0x20U)) : 
                           ((0x16U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                >> 1U)))
                             ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                        >> 0x20U)) : 0U))));
    __Vtemp307[0U] = ((6U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 1U))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                       : ((4U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 1U)))
                           ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                      & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))
                           : ((2U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                               >> 1U)))
                               ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11)
                               : ((0x17U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                >> 1U)))
                                   ? (IData)(((1U & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp 
                                                             >> 0x1fU)))
                                               ? (0xffffffff00000000ULL 
                                                  | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp)))
                                               : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp))))
                                   : ((0x16U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                    >> 1U)))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp)
                                       : 0U)))));
    if ((0xbU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                           >> 1U)))) {
        __Vtemp313[1U] = (IData)((((__Vtemp283[0U] 
                                    >> 0x1fU) ? (0xffffffff00000000ULL 
                                                 | (QData)((IData)(
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U]))))
                                    : (QData)((IData)(
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U])))) 
                                  >> 0x20U));
        __Vtemp313[2U] = 1U;
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[0U] 
            = (IData)(((__Vtemp283[0U] >> 0x1fU) ? 
                       (0xffffffff00000000ULL | (QData)((IData)(
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U]))))
                        : (QData)((IData)(((IData)(1U) 
                                           + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U])))));
    } else {
        __Vtemp313[1U] = ((0xaU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                             >> 1U)))
                           ? (IData)(((1ULL + (((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U])))) 
                                      >> 0x20U)) : 
                          ((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                            >> 1U)))
                            ? 0U : ((6U == (0x1fU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                             >> 1U)))
                                     ? 0U : __Vtemp305[1U])));
        __Vtemp313[2U] = ((0xaU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                             >> 1U)))
                           ? 1U : ((8U == (0x1fU & 
                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                            >> 1U)))
                                    ? 1U : ((6U == 
                                             (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                 >> 1U)))
                                             ? 1U : 
                                            ((4U == 
                                              (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                  >> 1U)))
                                              ? 1U : 
                                             ((2U == 
                                               (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                   >> 1U)))
                                               ? 1U
                                               : ((0x17U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                       >> 1U)))
                                                   ? 1U
                                                   : 
                                                  ((0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 0U)))))));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[0U] 
            = ((0xaU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                  >> 1U))) ? (IData)(
                                                     (1ULL 
                                                      + 
                                                      (((QData)((IData)(
                                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U])))))
                : ((8U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                    >> 1U))) ? (1U 
                                                & (~ 
                                                   (1U 
                                                    & __Vtemp289[2U])))
                    : __Vtemp307[0U]));
    }
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[1U] 
        = __Vtemp313[1U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[2U] 
        = __Vtemp313[2U];
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType 
        = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
            ? 6U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                     ? 0xcU : ((0x1bU == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                ? 0xcU : ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                           ? 6U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 6U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 0xcU
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 1U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 7U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 7U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 7U
                                                         : 
                                                        ((0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 7U
                                                          : 
                                                         ((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 7U
                                                           : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_350)))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_5 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
             & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush))) 
            & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen 
        = ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_10))));
    VL_EXTEND_WQ(127,64, __Vtemp320, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp321, __Vtemp320, 
                  (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    if ((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                            >> 1U)))) {
        __Vtemp329[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                  >> (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))));
        __Vtemp329[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                   >> (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))) 
                                  >> 0x20U));
    } else {
        __Vtemp329[0U] = ((0xdU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                             >> 1U)))
                           ? (IData)((((QData)((IData)(
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                                    >> 0x1fU)))
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp))))
                           : ((0xcU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                 >> 1U)))
                               ? (IData)((((QData)((IData)(
                                                           __Vtemp321[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp321[0U]))))
                               : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[0U]));
        __Vtemp329[1U] = ((0xdU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                             >> 1U)))
                           ? (IData)(((((QData)((IData)(
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                                     >> 0x1fU)))
                                                          ? 0xffffffffU
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp))) 
                                      >> 0x20U)) : 
                          ((0xcU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                              >> 1U)))
                            ? (IData)(((((QData)((IData)(
                                                         __Vtemp321[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp321[0U]))) 
                                       >> 0x20U)) : 
                           riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[1U]));
    }
    if ((0xfU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                           >> 1U)))) {
        __Vtemp335[1U] = (IData)(((((QData)((IData)(
                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                                                      >> 0x1fU)
                                                      ? 0xffffffffU
                                                      : 0U))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp))) 
                                  >> 0x20U));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94[0U] 
            = (IData)((((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                                          >> 0x1fU)
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp))));
    } else {
        __Vtemp335[1U] = ((0xeU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                             >> 1U)))
                           ? (IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1, 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))) 
                                      >> 0x20U)) : 
                          ((0x11U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                               >> 1U)))
                            ? (IData)(((((QData)((IData)(
                                                         ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                                                           >> 0x1fU)
                                                           ? 0xffffffffU
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp))) 
                                       >> 0x20U)) : 
                           __Vtemp329[1U]));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94[0U] 
            = ((0xeU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                  >> 1U))) ? (IData)(
                                                     VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1, 
                                                                    (0x3fU 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))))
                : ((0x11U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 1U))) ? (IData)(
                                                          (((QData)((IData)(
                                                                            ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                                                                              >> 0x1fU)
                                                                              ? 0xffffffffU
                                                                              : 0U))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp))))
                    : __Vtemp329[0U]));
    }
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94[1U] 
        = __Vtemp335[1U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94[2U] 
        = ((0xfU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                              >> 1U))) ? 1U : ((0xeU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                    >> 1U)))
                                                ? 1U
                                                : (
                                                   (0x11U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((0x10U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 
                                                    ((0xdU 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                          >> 1U)))
                                                      ? 1U
                                                      : 
                                                     ((0xcU 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                           >> 1U)))
                                                       ? 1U
                                                       : 
                                                      riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[2U]))))));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_51 
        = ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
            ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                  >> 0x1fU) ? 0xfffffffffffffULL : 0ULL) 
                << 0xcU) | (QData)((IData)(((0x800U 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                     >> 7U)))))))
            : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                      >> 0x1fU) ? 0xfffffffffffULL : 0ULL) 
                    << 0x14U) | (QData)((IData)(((0xff000U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                          >> 0x14U)))))))
                : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                    ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                          >> 0x1fU) ? 0xfffffffffffffULL
                          : 0ULL) << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                                    >> 7U))))))
                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                        ? (((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                              >> 0x1fU)
                                              ? 0xffffffffU
                                              : 0U))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))))
                        : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                            ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                  >> 0x1fU) ? 0xfffffffffffffULL
                                  : 0ULL) << 0xcU) 
                               | (QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                  >> 0x14U))))
                            : 0ULL)))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
            ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr
            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0
                    : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                        ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr
                        : 0ULL))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready 
        = (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)) 
           | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
              & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
            ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) 
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
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast));
    if ((0x1cU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                            >> 1U)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
            = (IData)((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
            = (IData)(((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc) 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] = 1U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
            = ((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 1U))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)
                : ((0x12U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 1U))) ? (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))
                    : ((0x14U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 1U)))
                        ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))
                        : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
            = ((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 1U))) ? (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                       >> 0x20U))
                : ((0x12U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 1U))) ? (IData)(
                                                          ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                            | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                                           >> 0x20U))
                    : ((0x14U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 1U)))
                        ? (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                   >> 0x20U)) : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
            = ((0x18U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 1U))) ? 1U : 
               ((0x12U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                    >> 1U))) ? 1U : 
                ((0x14U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                     >> 1U))) ? 1U : 
                 riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94[2U])));
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid) 
           & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                        >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
               : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_23 
        = (3U & (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)))
                  ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                     - (IData)(1U)) : ((((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready))) 
                                        & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w)))
                                        ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                                           - (IData)(1U))
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
           & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                        >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready)
               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_38 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_39 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
            ? 3U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_40 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
    riscv_soc__DOT__core__DOT__i_cache__DOT___T_9 = 
        ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) 
         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1 = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready) 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid));
    riscv_soc__DOT__core__DOT__d_cache__DOT___T_13 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
    riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_29 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_14 
        = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)
                  ? ((~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush))) 
                         & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid))
                  : ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_35 
        = ((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___T_9)
            ? ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid))
            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid));
    VL_EXTEND_WQ(128,64, __Vtemp349, vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
    if (riscv_soc__DOT__core__DOT__i_cache__DOT___T_9) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_37[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? (IData)((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U]))))
                : __Vtemp349[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_37[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? (IData)(((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U]))) 
                           >> 0x20U)) : __Vtemp349[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_37[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)
                : __Vtemp349[2U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_37[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                           >> 0x20U)) : __Vtemp349[3U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_36 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
                    ? vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U]))))
                : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_37[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_37[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_37[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_37[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_36 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata;
    }
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
    if (riscv_soc__DOT__core__DOT__d_cache__DOT___T_13) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_79 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_80 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? 0xffffU : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_83 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
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
    VL_EXTEND_WQ(128,64, __Vtemp357, vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
    if (riscv_soc__DOT__core__DOT__d_cache__DOT___T_13) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[0U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
                       | (riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])))
                    : riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U])
                : __Vtemp357[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
                       | (riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])))
                    : riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U])
                : __Vtemp357[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
                       | (riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])))
                    : riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U])
                : __Vtemp357[2U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
                       | (riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])))
                    : riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U])
                : __Vtemp357[3U]);
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
}

VL_INLINE_OPT void Vriscv_soc___024root___combo__TOP__4(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___combo__TOP__4\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp776;
    VlWide<3>/*95:0*/ __Vtemp777;
    VlWide<3>/*95:0*/ __Vtemp778;
    VlWide<3>/*95:0*/ __Vtemp781;
    VlWide<3>/*95:0*/ __Vtemp784;
    VlWide<3>/*95:0*/ __Vtemp791;
    VlWide<3>/*95:0*/ __Vtemp792;
    VlWide<3>/*95:0*/ __Vtemp793;
    VlWide<3>/*95:0*/ __Vtemp796;
    VlWide<3>/*95:0*/ __Vtemp799;
    VlWide<3>/*95:0*/ __Vtemp806;
    VlWide<3>/*95:0*/ __Vtemp807;
    VlWide<3>/*95:0*/ __Vtemp808;
    VlWide<3>/*95:0*/ __Vtemp809;
    VlWide<3>/*95:0*/ __Vtemp812;
    VlWide<3>/*95:0*/ __Vtemp816;
    VlWide<5>/*159:0*/ __Vtemp825;
    VlWide<5>/*159:0*/ __Vtemp828;
    VlWide<4>/*127:0*/ __Vtemp838;
    VlWide<4>/*127:0*/ __Vtemp839;
    VlWide<4>/*127:0*/ __Vtemp840;
    VlWide<4>/*127:0*/ __Vtemp841;
    VlWide<4>/*127:0*/ __Vtemp842;
    VlWide<5>/*159:0*/ __Vtemp856;
    VlWide<5>/*159:0*/ __Vtemp860;
    VlWide<5>/*159:0*/ __Vtemp861;
    VlWide<5>/*159:0*/ __Vtemp862;
    VlWide<5>/*159:0*/ __Vtemp863;
    VlWide<5>/*159:0*/ __Vtemp864;
    VlWide<3>/*95:0*/ __Vtemp872;
    VlWide<3>/*95:0*/ __Vtemp873;
    VlWide<3>/*95:0*/ __Vtemp876;
    VlWide<3>/*95:0*/ __Vtemp877;
    VlWide<3>/*95:0*/ __Vtemp878;
    VlWide<3>/*95:0*/ __Vtemp879;
    VlWide<3>/*95:0*/ __Vtemp880;
    VlWide<3>/*95:0*/ __Vtemp883;
    VlWide<3>/*95:0*/ __Vtemp884;
    VlWide<3>/*95:0*/ __Vtemp885;
    VlWide<3>/*95:0*/ __Vtemp886;
    VlWide<3>/*95:0*/ __Vtemp893;
    VlWide<3>/*95:0*/ __Vtemp894;
    // Body
    VL_EXTEND_WQ(67,64, __Vtemp776, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp777, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp778, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_r_raddr_T 
                                     << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp781, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_r_raddr_T 
                                     << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp784, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_75[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_75[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_75[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_75[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp776[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                         ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T)) 
                                             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T)))
                                             ? __Vtemp777[0U]
                                             : __Vtemp778[0U])
                                         : __Vtemp781[0U])
                                     : __Vtemp784[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_75[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp776[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                         ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T)) 
                                             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T)))
                                             ? __Vtemp777[1U]
                                             : __Vtemp778[1U])
                                         : __Vtemp781[1U])
                                     : __Vtemp784[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_75[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp776[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                         ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T)) 
                                             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T)))
                                             ? __Vtemp777[2U]
                                             : __Vtemp778[2U])
                                         : __Vtemp781[2U])
                                     : __Vtemp784[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp791, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp792, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp793, (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                     << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp796, (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                     << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp799, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp791[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
                                             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))
                                             ? __Vtemp792[0U]
                                             : __Vtemp793[0U])
                                         : __Vtemp796[0U])
                                     : __Vtemp799[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp791[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
                                             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))
                                             ? __Vtemp792[1U]
                                             : __Vtemp793[1U])
                                         : __Vtemp796[1U])
                                     : __Vtemp799[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp791[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
                                             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))
                                             ? __Vtemp792[2U]
                                             : __Vtemp793[2U])
                                         : __Vtemp796[2U])
                                     : __Vtemp799[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp806, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp807, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp808, ((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))
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
    VL_EXTEND_WQ(67,64, __Vtemp809, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp812, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp816, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp806[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? __Vtemp807[0U]
                                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                                             ? ((1U 
                                                 & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))))
                                                 ? 
                                                __Vtemp808[0U]
                                                 : 
                                                __Vtemp809[0U])
                                             : __Vtemp812[0U]))
                                     : __Vtemp816[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp806[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? __Vtemp807[1U]
                                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                                             ? ((1U 
                                                 & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))))
                                                 ? 
                                                __Vtemp808[1U]
                                                 : 
                                                __Vtemp809[1U])
                                             : __Vtemp812[1U]))
                                     : __Vtemp816[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp806[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? __Vtemp807[2U]
                                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                                             ? ((1U 
                                                 & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))))
                                                 ? 
                                                __Vtemp808[2U]
                                                 : 
                                                __Vtemp809[2U])
                                             : __Vtemp812[2U]))
                                     : __Vtemp816[2U]));
    }
    VL_EXTEND_WW(131,130, __Vtemp825, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    VL_EXTEND_WW(131,130, __Vtemp828, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[4U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_79 = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                 ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? __Vtemp825[0U]
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U]))
                             : __Vtemp828[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                 ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? __Vtemp825[1U]
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U]))
                             : __Vtemp828[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                 ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? __Vtemp825[2U]
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U]))
                             : __Vtemp828[2U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[3U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                 ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? __Vtemp825[3U]
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U]))
                             : __Vtemp828[3U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[4U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                 ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? __Vtemp825[4U]
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U]))
                             : __Vtemp828[4U])));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_79 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb))
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)
                    ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb))
                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                        ? ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
                            ? (QData)((IData)((0x7ffU 
                                               & ((IData)(0xfU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result))))))
                            : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
                                ? (QData)((IData)((0x1ffU 
                                                   & ((IData)(3U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result))))))
                                : ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
                                    ? (QData)((IData)(
                                                      (0x7fffU 
                                                       & ((IData)(0xffU) 
                                                          << 
                                                          (7U 
                                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result))))))
                                    : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & ((IData)(1U) 
                                                              << 
                                                              (7U 
                                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result))))))
                                        : 0ULL)))) : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb)))));
    }
    VL_EXTEND_WQ(127,64, __Vtemp838, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata);
    VL_EXTEND_WQ(127,64, __Vtemp839, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata);
    VL_EXTEND_WQ(127,64, __Vtemp840, ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr) 
                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr)) 
                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data
                                       : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data));
    VL_SHIFTL_WWI(127,127,6, __Vtemp841, __Vtemp840, 
                  (0x38U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result) 
                            << 3U)));
    VL_EXTEND_WQ(127,64, __Vtemp842, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[3U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp838[0U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)
                                     ? __Vtemp839[0U]
                                     : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                         ? __Vtemp841[0U]
                                         : __Vtemp842[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp838[1U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)
                                     ? __Vtemp839[1U]
                                     : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                         ? __Vtemp841[1U]
                                         : __Vtemp842[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp838[2U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)
                                     ? __Vtemp839[2U]
                                     : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                         ? __Vtemp841[2U]
                                         : __Vtemp842[2U])));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[3U] 
            = (0x7fffffffU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                               ? __Vtemp838[3U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)
                                                    ? 
                                                   __Vtemp839[3U]
                                                    : 
                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                                     ? 
                                                    __Vtemp841[3U]
                                                     : 
                                                    __Vtemp842[3U]))));
    }
    VL_EXTEND_WQ(130,64, __Vtemp856, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
    if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
        __Vtemp860[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
        __Vtemp860[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                         >> 0x1fU)))
                           ? 0xffffffffU : 0U);
        __Vtemp860[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                         >> 0x1fU)))
                           ? 0xffffffffU : 0U);
        __Vtemp860[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                         >> 0x1fU)))
                           ? 0xffffffffU : 0U);
        __Vtemp860[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                         >> 0x1fU)))
                           ? 3U : 0U);
    } else {
        __Vtemp860[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                           : __Vtemp856[0U]);
        __Vtemp860[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                           ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                      >> 0x20U)) : 
                          __Vtemp856[1U]);
        __Vtemp860[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                           ? 0xffffffffU : __Vtemp856[2U]);
        __Vtemp860[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                           ? 0xffffffffU : __Vtemp856[3U]);
        __Vtemp860[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                           ? 3U : __Vtemp856[4U]);
    }
    VL_EXTEND_WW(133,130, __Vtemp861, __Vtemp860);
    __Vtemp862[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                      << 2U);
    __Vtemp862[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                       >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                    << 2U));
    __Vtemp862[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                       >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                    << 2U));
    __Vtemp862[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                       >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                    << 2U));
    __Vtemp862[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                       >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                    << 2U));
    VL_EXTEND_WW(133,132, __Vtemp863, __Vtemp862);
    VL_EXTEND_WW(133,130, __Vtemp864, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[4U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp861[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                     ? __Vtemp863[0U]
                                     : __Vtemp864[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp861[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                     ? __Vtemp863[1U]
                                     : __Vtemp864[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp861[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                     ? __Vtemp863[2U]
                                     : __Vtemp864[2U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[3U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp861[3U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                     ? __Vtemp863[3U]
                                     : __Vtemp864[3U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[4U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp861[4U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                     ? __Vtemp863[4U]
                                     : __Vtemp864[4U]));
    }
    __Vtemp872[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                      << 1U);
    __Vtemp872[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                       >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                                    << 1U));
    __Vtemp872[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                       >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
                                    << 1U));
    VL_EXTEND_WW(67,66, __Vtemp873, __Vtemp872);
    __Vtemp876[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[0U];
    __Vtemp876[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[1U];
    __Vtemp876[2U] = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U]);
    VL_EXTEND_WW(67,66, __Vtemp877, __Vtemp876);
    __Vtemp878[0U] = 1U;
    __Vtemp878[1U] = 0U;
    __Vtemp878[2U] = 0U;
    __Vtemp879[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                      << 1U);
    __Vtemp879[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                    << 1U));
    __Vtemp879[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                       >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                    << 1U));
    VL_ADD_W(3, __Vtemp880, __Vtemp878, __Vtemp879);
    __Vtemp883[0U] = 1U;
    __Vtemp883[1U] = 0U;
    __Vtemp883[2U] = 0U;
    VL_SUB_W(3, __Vtemp884, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q, __Vtemp883);
    __Vtemp885[0U] = 1U;
    __Vtemp885[1U] = 0U;
    __Vtemp885[2U] = 0U;
    VL_ADD_W(3, __Vtemp886, __Vtemp885, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q);
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vtemp893[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                           ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]
                                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                                        ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                                            ? __Vtemp884[0U]
                                            : __Vtemp886[0U])
                                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])));
        __Vtemp893[1U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                           ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]
                                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                                        ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                                            ? __Vtemp884[1U]
                                            : __Vtemp886[1U])
                                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])));
        __Vtemp893[2U] = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                 ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                                              ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                                                  ? 
                                                 __Vtemp884[2U]
                                                  : 
                                                 __Vtemp886[2U])
                                              : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]))));
    } else {
        __Vtemp893[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
        __Vtemp893[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
        __Vtemp893[2U] = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]);
    }
    VL_EXTEND_WW(67,66, __Vtemp894, __Vtemp893);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_39 = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_50[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? __Vtemp873[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                     ? __Vtemp877[0U]
                                     : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                         ? __Vtemp880[0U]
                                         : __Vtemp894[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_50[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? __Vtemp873[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                     ? __Vtemp877[1U]
                                     : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                         ? __Vtemp880[1U]
                                         : __Vtemp894[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_50[2U] 
            = (7U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                      ? __Vtemp873[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                           ? __Vtemp877[2U]
                                           : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                               ? __Vtemp880[2U]
                                               : __Vtemp894[2U]))));
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

void Vriscv_soc___024root___eval(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vriscv_soc___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vriscv_soc___024root___combo__TOP__4(vlSelf);
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
