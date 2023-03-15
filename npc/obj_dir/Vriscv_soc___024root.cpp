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
    CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___T_13;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_76;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_13;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_14;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_17;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4;
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
    CData/*3:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    CData/*3:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt;
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
    VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2;
    VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vtemp435;
    VlWide<4>/*127:0*/ __Vtemp436;
    VlWide<3>/*95:0*/ __Vtemp458;
    VlWide<3>/*95:0*/ __Vtemp461;
    VlWide<3>/*95:0*/ __Vtemp466;
    VlWide<3>/*95:0*/ __Vtemp469;
    VlWide<3>/*95:0*/ __Vtemp476;
    VlWide<3>/*95:0*/ __Vtemp479;
    VlWide<3>/*95:0*/ __Vtemp484;
    VlWide<3>/*95:0*/ __Vtemp485;
    VlWide<3>/*95:0*/ __Vtemp486;
    VlWide<3>/*95:0*/ __Vtemp487;
    VlWide<3>/*95:0*/ __Vtemp488;
    VlWide<3>/*95:0*/ __Vtemp500;
    VlWide<3>/*95:0*/ __Vtemp503;
    VlWide<4>/*127:0*/ __Vtemp511;
    VlWide<4>/*127:0*/ __Vtemp512;
    VlWide<3>/*95:0*/ __Vtemp531;
    VlWide<3>/*95:0*/ __Vtemp532;
    VlWide<5>/*159:0*/ __Vtemp534;
    VlWide<5>/*159:0*/ __Vtemp536;
    VlWide<5>/*159:0*/ __Vtemp537;
    VlWide<5>/*159:0*/ __Vtemp538;
    VlWide<5>/*159:0*/ __Vtemp539;
    VlWide<5>/*159:0*/ __Vtemp540;
    VlWide<5>/*159:0*/ __Vtemp542;
    VlWide<5>/*159:0*/ __Vtemp543;
    VlWide<5>/*159:0*/ __Vtemp544;
    VlWide<5>/*159:0*/ __Vtemp545;
    VlWide<5>/*159:0*/ __Vtemp546;
    VlWide<5>/*159:0*/ __Vtemp548;
    VlWide<5>/*159:0*/ __Vtemp549;
    VlWide<5>/*159:0*/ __Vtemp550;
    VlWide<5>/*159:0*/ __Vtemp558;
    VlWide<5>/*159:0*/ __Vtemp559;
    VlWide<5>/*159:0*/ __Vtemp567;
    VlWide<5>/*159:0*/ __Vtemp568;
    VlWide<5>/*159:0*/ __Vtemp572;
    VlWide<3>/*95:0*/ __Vtemp576;
    VlWide<3>/*95:0*/ __Vtemp577;
    VlWide<3>/*95:0*/ __Vtemp578;
    VlWide<5>/*159:0*/ __Vtemp583;
    VlWide<5>/*159:0*/ __Vtemp584;
    VlWide<5>/*159:0*/ __Vtemp585;
    VlWide<3>/*95:0*/ __Vtemp589;
    VlWide<3>/*95:0*/ __Vtemp590;
    VlWide<3>/*95:0*/ __Vtemp591;
    VlWide<3>/*95:0*/ __Vtemp594;
    VlWide<3>/*95:0*/ __Vtemp595;
    VlWide<3>/*95:0*/ __Vtemp596;
    VlWide<3>/*95:0*/ __Vtemp597;
    VlWide<3>/*95:0*/ __Vtemp598;
    VlWide<3>/*95:0*/ __Vtemp602;
    VlWide<4>/*127:0*/ __Vtemp606;
    VlWide<3>/*95:0*/ __Vtemp609;
    VlWide<4>/*127:0*/ __Vtemp613;
    VlWide<3>/*95:0*/ __Vtemp630;
    VlWide<3>/*95:0*/ __Vtemp631;
    VlWide<3>/*95:0*/ __Vtemp657;
    VlWide<3>/*95:0*/ __Vtemp678;
    VlWide<3>/*95:0*/ __Vtemp685;
    VlWide<3>/*95:0*/ __Vtemp688;
    VlWide<3>/*95:0*/ __Vtemp694;
    VlWide<3>/*95:0*/ __Vtemp695;
    VlWide<3>/*95:0*/ __Vtemp696;
    VlWide<3>/*95:0*/ __Vtemp699;
    VlWide<3>/*95:0*/ __Vtemp700;
    VlWide<3>/*95:0*/ __Vtemp709;
    VlWide<3>/*95:0*/ __Vtemp710;
    VlWide<3>/*95:0*/ __Vtemp720;
    VlWide<3>/*95:0*/ __Vtemp721;
    VlWide<3>/*95:0*/ __Vtemp746;
    VlWide<3>/*95:0*/ __Vtemp748;
    VlWide<3>/*95:0*/ __Vtemp752;
    VlWide<3>/*95:0*/ __Vtemp753;
    VlWide<3>/*95:0*/ __Vtemp758;
    VlWide<3>/*95:0*/ __Vtemp759;
    VlWide<3>/*95:0*/ __Vtemp775;
    VlWide<3>/*95:0*/ __Vtemp777;
    VlWide<3>/*95:0*/ __Vtemp783;
    VlWide<4>/*127:0*/ __Vtemp790;
    VlWide<4>/*127:0*/ __Vtemp791;
    VlWide<3>/*95:0*/ __Vtemp799;
    VlWide<3>/*95:0*/ __Vtemp805;
    VlWide<4>/*127:0*/ __Vtemp823;
    VlWide<4>/*127:0*/ __Vtemp831;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11;
    QData/*63:0*/ __Vtask_ramCtrl__0__rdata;
    QData/*63:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp;
    // Body
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__need_update 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update;
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset;
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state;
    __Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0 = 0U;
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
    __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    __Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 = 0U;
    __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall 
        = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall;
    __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt;
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
    __Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0 = 0U;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_167[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_167[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_166[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_166[0U])));
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
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_160));
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__need_update 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)
                                          ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_5)
                                          : ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)) 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_156));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime 
        = ((IData)(vlSelf->reset) ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag_io_A][0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag_io_A][1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag_io_A][2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag_io_A][3U];
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A][0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A][1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A][2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A][3U];
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A][0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A][1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A][2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A][3U];
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A][0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A][1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A][2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A][3U];
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_35));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram2_valid_T;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_valid_T;
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_dirty = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_dirty 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_dirty_T
                : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_dirty_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_dirty = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_dirty 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram2_dirty_T
                : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram2_dirty_T_1);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        VL_EXTEND_WQ(128,54, __Vtemp435, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag);
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp435[0U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp435[1U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp435[2U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp435[3U];
        __Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag_io_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write) {
        VL_EXTEND_WQ(128,54, __Vtemp436, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag);
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp436[0U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp436[1U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp436[2U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp436[3U];
        __Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A;
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_14));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
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
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 4U))))][0U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U])));
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 4U))))][1U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U])));
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 4U))))][2U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U])));
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 4U))))][3U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U])));
        __Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0 
            = (0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                         : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                    >> 4U))));
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 4U))))][0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 4U))))][1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 4U))))][2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 4U))))][3U];
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 4U))))][0U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U])));
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 4U))))][1U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U])));
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 4U))))][2U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U])));
        __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 4U))))][3U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U])));
        __Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0 
            = (0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                         : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                    >> 4U))));
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 4U))))][0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 4U))))][1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 4U))))][2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 4U))))][3U];
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
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
    if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data;
        __Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr;
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en 
            = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[2U] 
                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                        >> 2U)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                     >> 1U));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid 
            = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret 
            = ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                  >> 4U));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_exception = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_exception = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_exception 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                        >> 4U)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
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
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_rs_en = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_rs_en = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_rs_en 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                     >> 2U));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_w_rs_en = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_w_rs_en = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_w_rs_en 
            = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid)));
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
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                     >> 3U));
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
        VL_EXTEND_WI(65,32, __Vtemp458, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data));
        VL_EXTEND_WQ(65,64, __Vtemp461, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
        if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[0U]
                    : __Vtemp458[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[1U]
                    : __Vtemp458[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[2U]
                    : __Vtemp458[2U]);
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U]
                    : __Vtemp461[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U]
                    : __Vtemp461[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U]
                    : __Vtemp461[2U]);
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        VL_EXTEND_WI(65,32, __Vtemp466, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1));
        VL_EXTEND_WQ(65,64, __Vtemp469, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
        if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[0U]
                    : __Vtemp466[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[1U]
                    : __Vtemp466[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[2U]
                    : __Vtemp466[2U]);
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[0U]
                    : __Vtemp469[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[1U]
                    : __Vtemp469[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[2U]
                    : __Vtemp469[2U]);
        }
    }
    VL_EXTEND_WI(65,32, __Vtemp476, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1));
    VL_EXTEND_WQ(65,64, __Vtemp479, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
    VL_ADD_W(3, __Vtemp484, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor);
    __Vtemp485[0U] = 1U;
    __Vtemp485[1U] = 0U;
    __Vtemp485[2U] = 0U;
    __Vtemp486[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]);
    __Vtemp486[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]);
    __Vtemp486[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U]);
    VL_ADD_W(3, __Vtemp487, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem, __Vtemp486);
    VL_ADD_W(3, __Vtemp488, __Vtemp485, __Vtemp487);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                          ^ ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                              ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[2U]
                                  : __Vtemp476[2U])
                              : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[2U]
                                  : __Vtemp479[2U]))))
                    ? __Vtemp484[0U] : __Vtemp488[0U])
                : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
                        << 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U] 
                                     >> 1U)) : ((2U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                                 ? 
                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_1[0U]
                                                 : 
                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                          ^ ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                              ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[2U]
                                  : __Vtemp476[2U])
                              : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[2U]
                                  : __Vtemp479[2U]))))
                    ? __Vtemp484[1U] : __Vtemp488[1U])
                : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
                        << 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
                                     >> 1U)) : ((2U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                                 ? 
                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_1[1U]
                                                 : 
                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
            = (1U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                      ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                                ^ ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                    ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[2U]
                                        : __Vtemp476[2U])
                                    : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[2U]
                                        : __Vtemp479[2U]))))
                          ? __Vtemp484[2U] : __Vtemp488[2U])
                      : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                          ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
                             >> 1U) : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_1[2U]
                                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[2U]))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        VL_EXTEND_WI(65,32, __Vtemp500, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1));
        VL_EXTEND_WQ(65,64, __Vtemp503, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
        if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[0U]
                    : __Vtemp500[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[1U]
                    : __Vtemp500[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[2U]
                    : __Vtemp500[2U]);
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[0U]
                    : __Vtemp503[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[1U]
                    : __Vtemp503[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[2U]
                    : __Vtemp503[2U]);
        }
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U]);
    } else if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U];
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
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_peripheral 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__test_is_peripheral));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc;
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__inst_counter = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__inst_counter 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___inst_counter_T_1;
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
        __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp = 0xffffffffffffffffULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w) {
                __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
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
                = ((0x30U == (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
                    ? vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp
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
        VL_EXTEND_WQ(128,54, __Vtemp511, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp511[0U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp511[1U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp511[2U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp511[3U];
        __Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        VL_EXTEND_WQ(128,54, __Vtemp512, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp512[0U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp512[1U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp512[2U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp512[3U];
        __Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A;
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
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T) {
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)
                ? 2U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1));
    } else if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)) 
                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_w_ready) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)))) {
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_w_cnt_T_1;
    } else if ((((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)) 
                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_8)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w))) {
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_w_cnt_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_irq 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_time_irq) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_soft_irq)));
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcycle = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcycle 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)
                ? ((0xb00U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))
                    ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
                    : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mcycle_T_2)
                : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mcycle_T_2);
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_11)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)
                    ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                             ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid) 
                                     | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                                        & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w))))))
                : (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready)))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_1)
                    : (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready)))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_1)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_24))));
    }
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
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][0U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])));
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][1U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])));
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][2U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])));
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][3U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])));
        __Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0 
            = (0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                         : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                    >> 4U))));
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][3U];
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][0U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])));
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][1U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])));
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][2U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])));
        __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                         >> 4U))))][3U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])));
        __Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0 
            = (0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                         : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                    >> 4U))));
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                   >> 4U))))][3U];
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
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
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[3U];
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
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
        = __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp;
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[3U];
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
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram[__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_34));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_20));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr 
                = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                            >> 0x14U));
        }
    }
    vlSelf->io_difftest_reg_1 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [1U];
    vlSelf->io_difftest_reg_2 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [2U];
    vlSelf->io_difftest_reg_3 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [3U];
    vlSelf->io_difftest_reg_4 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [4U];
    vlSelf->io_difftest_reg_5 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [5U];
    vlSelf->io_difftest_reg_6 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [6U];
    vlSelf->io_difftest_reg_7 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [7U];
    vlSelf->io_difftest_reg_8 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [8U];
    vlSelf->io_difftest_reg_9 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [9U];
    vlSelf->io_difftest_reg_10 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0xaU];
    vlSelf->io_difftest_reg_11 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0xbU];
    vlSelf->io_difftest_reg_12 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0xcU];
    vlSelf->io_difftest_reg_13 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0xdU];
    vlSelf->io_difftest_reg_14 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0xeU];
    vlSelf->io_difftest_reg_15 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0xfU];
    vlSelf->io_difftest_reg_16 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x10U];
    vlSelf->io_difftest_reg_17 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x11U];
    vlSelf->io_difftest_reg_18 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x12U];
    vlSelf->io_difftest_reg_19 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x13U];
    vlSelf->io_difftest_reg_20 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x14U];
    vlSelf->io_difftest_reg_21 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x15U];
    vlSelf->io_difftest_reg_22 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x16U];
    vlSelf->io_difftest_reg_23 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x17U];
    vlSelf->io_difftest_reg_24 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x18U];
    vlSelf->io_difftest_reg_25 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x19U];
    vlSelf->io_difftest_reg_26 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x1aU];
    vlSelf->io_difftest_reg_27 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x1bU];
    vlSelf->io_difftest_reg_28 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x1cU];
    vlSelf->io_difftest_reg_29 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x1dU];
    vlSelf->io_difftest_reg_30 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x1eU];
    vlSelf->io_difftest_reg_31 = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [0x1fU];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_state_T_3 
        = ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt))
            ? 2U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state));
    __Vtemp531[0U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                       << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                                    >> 2U));
    __Vtemp531[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                       << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                                    >> 2U));
    __Vtemp531[2U] = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                            >> 2U));
    VL_EXTEND_WW(67,65, __Vtemp532, __Vtemp531);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[0U] 
        = __Vtemp532[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[1U] 
        = __Vtemp532[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[2U] 
        = __Vtemp532[2U];
    VL_EXTEND_WW(131,130, __Vtemp534, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    __Vtemp536[0U] = 1U;
    __Vtemp536[1U] = 0U;
    __Vtemp536[2U] = 0U;
    __Vtemp536[3U] = 0U;
    __Vtemp536[4U] = 0U;
    __Vtemp537[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp537[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp537[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp537[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp537[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp538, __Vtemp536, __Vtemp537);
    __Vtemp539[0U] = __Vtemp538[0U];
    __Vtemp539[1U] = __Vtemp538[1U];
    __Vtemp539[2U] = __Vtemp538[2U];
    __Vtemp539[3U] = __Vtemp538[3U];
    __Vtemp539[4U] = (3U & __Vtemp538[4U]);
    VL_EXTEND_WW(131,130, __Vtemp540, __Vtemp539);
    __Vtemp542[0U] = 1U;
    __Vtemp542[1U] = 0U;
    __Vtemp542[2U] = 0U;
    __Vtemp542[3U] = 0U;
    __Vtemp542[4U] = 0U;
    __Vtemp543[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp543[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp543[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp543[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp543[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp544, __Vtemp542, __Vtemp543);
    __Vtemp545[0U] = __Vtemp544[0U];
    __Vtemp545[1U] = __Vtemp544[1U];
    __Vtemp545[2U] = __Vtemp544[2U];
    __Vtemp545[3U] = __Vtemp544[3U];
    __Vtemp545[4U] = (3U & __Vtemp544[4U]);
    VL_EXTEND_WW(131,130, __Vtemp546, __Vtemp545);
    __Vtemp548[0U] = 1U;
    __Vtemp548[1U] = 0U;
    __Vtemp548[2U] = 0U;
    __Vtemp548[3U] = 0U;
    __Vtemp548[4U] = 0U;
    __Vtemp549[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp549[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp549[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp549[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp549[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp550, __Vtemp548, __Vtemp549);
    if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp558[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        __Vtemp558[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        __Vtemp558[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        __Vtemp558[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        __Vtemp558[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    } else {
        __Vtemp558[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                           : 0U);
        __Vtemp558[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                           : 0U);
        __Vtemp558[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                           : 0U);
        __Vtemp558[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                           : 0U);
        __Vtemp558[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                           : 0U);
    }
    VL_EXTEND_WW(131,130, __Vtemp559, __Vtemp558);
    if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp567[0U] = __Vtemp540[0U];
        __Vtemp567[1U] = __Vtemp540[1U];
        __Vtemp567[2U] = __Vtemp540[2U];
        __Vtemp567[3U] = __Vtemp540[3U];
        __Vtemp567[4U] = __Vtemp540[4U];
    } else {
        __Vtemp567[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp546[0U] : ((4U 
                                                == 
                                                (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                ? (
                                                   __Vtemp550[0U] 
                                                   << 1U)
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                    << 1U)
                                                    : 
                                                   __Vtemp559[0U])));
        __Vtemp567[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp546[1U] : ((4U 
                                                == 
                                                (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                ? (
                                                   (__Vtemp550[0U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp550[1U] 
                                                      << 1U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                       << 1U))
                                                    : 
                                                   __Vtemp559[1U])));
        __Vtemp567[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp546[2U] : ((4U 
                                                == 
                                                (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                ? (
                                                   (__Vtemp550[1U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp550[2U] 
                                                      << 1U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                       << 1U))
                                                    : 
                                                   __Vtemp559[2U])));
        __Vtemp567[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp546[3U] : ((4U 
                                                == 
                                                (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                ? (
                                                   (__Vtemp550[2U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp550[3U] 
                                                      << 1U))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                       << 1U))
                                                    : 
                                                   __Vtemp559[3U])));
        __Vtemp567[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp546[4U] : ((4U 
                                                == 
                                                (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                ? (
                                                   (__Vtemp550[3U] 
                                                    >> 0x1fU) 
                                                   | (6U 
                                                      & (__Vtemp550[4U] 
                                                         << 1U)))
                                                : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                    ? 
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                     >> 0x1fU) 
                                                    | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                                       << 1U))
                                                    : 
                                                   __Vtemp559[4U])));
    }
    VL_ADD_W(5, __Vtemp568, __Vtemp534, __Vtemp567);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U] 
        = __Vtemp568[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U] 
        = __Vtemp568[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U] 
        = __Vtemp568[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U] 
        = __Vtemp568[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U] 
        = (7U & __Vtemp568[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_state_T_3 
        = ((0x40U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt))
            ? 2U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall));
    __Vtemp572[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                      << 1U);
    __Vtemp572[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                    << 1U));
    __Vtemp572[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       << 2U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                  >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                               << 1U)));
    __Vtemp572[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                    << 2U));
    __Vtemp572[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                       >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                    << 2U));
    __Vtemp576[0U] = 1U;
    __Vtemp576[1U] = 0U;
    __Vtemp576[2U] = 0U;
    __Vtemp577[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp577[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp577[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp578, __Vtemp576, __Vtemp577);
    __Vtemp583[0U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                       ? 0U : 1U);
    __Vtemp583[1U] = 0U;
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))) {
        __Vtemp583[2U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                          << 1U);
        __Vtemp583[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                           >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                        << 1U));
        __Vtemp583[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                           >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                        << 1U));
    } else {
        __Vtemp583[2U] = (__Vtemp578[0U] << 1U);
        __Vtemp583[3U] = ((__Vtemp578[0U] >> 0x1fU) 
                          | (__Vtemp578[1U] << 1U));
        __Vtemp583[4U] = ((__Vtemp578[1U] >> 0x1fU) 
                          | (2U & (__Vtemp578[2U] << 1U)));
    }
    VL_EXTEND_WW(131,130, __Vtemp584, __Vtemp583);
    VL_ADD_W(5, __Vtemp585, __Vtemp572, __Vtemp584);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[0U] 
        = __Vtemp585[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[1U] 
        = __Vtemp585[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U] 
        = __Vtemp585[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
        = __Vtemp585[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
        = (7U & __Vtemp585[4U]);
    riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4 
        = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                 ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]));
    __Vtemp589[0U] = 1U;
    __Vtemp589[1U] = 0U;
    __Vtemp589[2U] = 0U;
    __Vtemp590[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp590[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp590[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp591, __Vtemp589, __Vtemp590);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct 
        = ((((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]) 
             & (0U != ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                       | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))) 
            | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        ^ __Vtemp591[0U]) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                             ^ __Vtemp591[1U])) 
                      | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                         ^ (1U & __Vtemp591[2U]))))) 
           | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                      | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))));
    vlSelf->io_difftest_peripheral = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_peripheral;
    vlSelf->io_difftest_inst = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst;
    vlSelf->io_difftest_pc = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc;
    vlSelf->io_difftest_commit = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit;
    vlSelf->io_inst_counter = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__inst_counter;
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___inst_counter_T_1 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__inst_counter);
    vlSelf->io_difftest_mstatus = vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus;
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mstatus_T_3 
        = ((0xffffffffffffff77ULL & vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus) 
           | ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus 
                             >> 3U))) ? 0x1880ULL : 0x1800ULL));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_1;
    }
    vlSelf->io_difftest_irq = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_irq;
    vlSelf->io_difftest_mcause = vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcause;
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mcycle_T_2 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcycle);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_11)));
    }
    vlSelf->io_difftest_mepc = vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc;
    vlSelf->io_difftest_mtvec = vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtvec;
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)
                                             ? ((0xb02U 
                                                 == 
                                                 (0xfffU 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data
                                                 : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_minstret_T_3)
                                             : vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_minstret_T_3));
    VL_ADD_W(3, __Vtemp594, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    __Vtemp595[0U] = 1U;
    __Vtemp595[1U] = 0U;
    __Vtemp595[2U] = 0U;
    __Vtemp596[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp596[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp596[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp597, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp596);
    VL_ADD_W(3, __Vtemp598, __Vtemp595, __Vtemp597);
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_1[0U] 
            = ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                ? __Vtemp594[0U] : __Vtemp598[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_1[1U] 
            = ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                ? __Vtemp594[1U] : __Vtemp598[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_1[2U] 
            = (1U & ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                      ? __Vtemp594[2U] : __Vtemp598[2U]));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_1[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_1[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_1[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt 
        = __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt;
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
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T 
        = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_w_cnt_T_1 
        = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt) 
                 - (IData)(1U)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_11 
        = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_1 
        = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                 - (IData)(1U)));
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state 
        = ((IData)(vlSelf->reset) ? 0U : ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                           ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)
                                               ? 1U
                                               : 0U)
                                           : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                               ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                                   ? 
                                                  ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T)) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T)))
                                                    ? 3U
                                                    : 2U)
                                                   : 2U)
                                               : ((2U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_98)
                                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_105)))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wdata = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wdata = 0ULL;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wstrb = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wstrb = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w = 0U;
        }
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
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
            __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset 
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
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_32;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_99)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_101));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata = 0ULL;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_33;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_83;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_29;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_97)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_100));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb 
                = ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_wstrb_T_1)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_wstrb_T_2));
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_80;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U] = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_30[0U];
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_30[1U];
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_30[2U];
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_30[3U];
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_82[0U];
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_82[1U];
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_82[2U];
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_82[3U];
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
                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T)
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
                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_35))
                                             : ((2U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                                 ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_79)
                                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_104)))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wdata = 0ULL;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wdata 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_52;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wdata 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_94;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wlast = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wlast 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_53;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wlast 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_91;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_valid = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_49;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_valid 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_92)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_102));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_b_ready = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_b_ready = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_b_ready 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_50;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_b_ready 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_96)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_103));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_23;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cnt = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cnt 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_55;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cnt 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_93;
        }
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
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_wstrb_T_1 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wstrb) 
           << 8U);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_wstrb_T_2 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wstrb;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_91 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wlast;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_93 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cnt;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_94 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wdata;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_92 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_valid;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_96 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_b_ready;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag));
    __Vtemp602[1U] = (IData)((((QData)((IData)(((((0x8000U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                   ? 0xffU
                                                   : 0U) 
                                                 << 0x18U) 
                                                | ((((0x4000U 
                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                      ? 0xffU
                                                      : 0U) 
                                                    << 0x10U) 
                                                   | ((((0x2000U 
                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                         ? 0xffU
                                                         : 0U) 
                                                       << 8U) 
                                                      | ((0x1000U 
                                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                          ? 0xffU
                                                          : 0U)))))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((((0x800U 
                                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                               ? 0xffU
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((0x400U 
                                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                                  ? 0xffU
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((0x200U 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                                     ? 0xffU
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((0x100U 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                                      ? 0xffU
                                                                      : 0U))))))));
    __Vtemp602[2U] = (IData)(((((QData)((IData)((((
                                                   (0x8000U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                    ? 0xffU
                                                    : 0U) 
                                                  << 0x18U) 
                                                 | ((((0x4000U 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                       ? 0xffU
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | ((((0x2000U 
                                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                          ? 0xffU
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((0x1000U 
                                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                           ? 0xffU
                                                           : 0U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x800U 
                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                                ? 0xffU
                                                                : 0U) 
                                                              << 0x18U) 
                                                             | ((((0x400U 
                                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 0x10U) 
                                                                | ((((0x200U 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                                      ? 0xffU
                                                                      : 0U) 
                                                                    << 8U) 
                                                                   | ((0x100U 
                                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                                       ? 0xffU
                                                                       : 0U))))))) 
                              >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U] 
        = ((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
              ? 0xffU : 0U) << 0x18U) | ((((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                            ? 0xffU
                                            : 0U) << 0x10U) 
                                         | ((((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                               ? 0xffU
                                               : 0U) 
                                             << 8U) 
                                            | ((1U 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                ? 0xffU
                                                : 0U))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U] 
        = ((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
              ? 0xffU : 0U) << 0x18U) | ((((0x40U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                            ? 0xffU
                                            : 0U) << 0x10U) 
                                         | ((((0x20U 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                               ? 0xffU
                                               : 0U) 
                                             << 8U) 
                                            | ((0x10U 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb))
                                                ? 0xffU
                                                : 0U))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U] 
        = __Vtemp602[1U];
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U] 
        = __Vtemp602[2U];
    riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[0U] 
        = (IData)((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U]))));
    riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[1U] 
        = (IData)(((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U]))) 
                   >> 0x20U));
    riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[2U] 
        = (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
    riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[3U] 
        = (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                   >> 0x20U));
    VL_EXTEND_WQ(128,64, __Vtemp606, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wdata);
    if ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[2U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wdata);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[3U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wdata 
                       >> 0x20U));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[0U] 
            = __Vtemp606[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[1U] 
            = __Vtemp606[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[2U] 
            = __Vtemp606[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[3U] 
            = __Vtemp606[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_105 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
            ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_100 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_101 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_102 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_valid));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_103 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_b_ready));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag 
           == (0x3fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag 
           == (0x3fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_dirty_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_dirty 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_dirty_T_1 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_dirty 
           & (~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram2_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram2_dirty_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_dirty 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram2_dirty_T_1 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_dirty 
           & (~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_lru_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_lru_2_T_1 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2 
           & (~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_r_raddr_T 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag 
            << 6U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_0_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_dirty 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_dirty 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_104 
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
    __Vtemp609[1U] = (IData)((((QData)((IData)(((((0x8000U 
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
    __Vtemp609[2U] = (IData)(((((QData)((IData)((((
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
        = __Vtemp609[1U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U] 
        = __Vtemp609[2U];
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
    VL_EXTEND_WQ(128,64, __Vtemp613, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata);
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
            = __Vtemp613[0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U] 
            = __Vtemp613[1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U] 
            = __Vtemp613[2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U] 
            = __Vtemp613[3U];
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
                                                       vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
           == (0x3fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U])))));
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
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_102 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
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
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__test_is_peripheral = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__test_is_peripheral 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) 
                  & (0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result 
                              >> 0x1fU))));
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
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_inst;
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
                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid)))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc
                : (4ULL + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc));
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_32 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T)) 
            | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T))) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_35 
        = (1U & ((~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T)) 
                     | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T)))) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)));
    if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T)) 
         | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T)))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_29 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_30[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[0U]
                : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_30[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[1U]
                : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_30[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[2U]
                : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_30[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[3U]
                : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_33 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0)
                    ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
                        ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[2U])))
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[0U]))))
                    : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
                        ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[2U])))
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[0U]))))));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_29 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_30[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_30[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_30[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_30[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_33 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata;
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T 
        = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T) 
                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T)));
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
                        ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[2U])))
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[0U]))))
                    : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                        ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[2U])))
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[0U]))))));
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
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_49 
            = (1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_0_T) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))) 
                      | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_2_T) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_valid)));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_50 
            = (1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_0_T) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))) 
                      | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_2_T) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_b_ready)));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_53 
            = ((~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_0_T) 
                    & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))) 
                   | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_2_T) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T)))) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wlast));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_55 
            = ((1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_0_T) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))) 
                      | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_2_T) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))))
                ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cnt));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_52 
            = ((1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_0_T) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))) 
                      | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_2_T) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))))
                ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))
                    ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[0U])))
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q[0U]))))
                : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wdata);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_49 
            = (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_valid));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_50 
            = (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_b_ready));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_53 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wlast;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_55 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cnt;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_52 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wdata;
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_160 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish)
            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish)
                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T)
                        ? ((~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_0_T) 
                                & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))) 
                               | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_2_T) 
                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T)))) 
                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish))
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish)))
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish)));
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
                    ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[0U])))
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[0U]))))
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_inst = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_inst 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall)
                         ? 0U : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr 
            = (QData)((IData)(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)
                                ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A 
        = (0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                     : (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___temp_data_T_4 
        = ((0x20U == (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime
            : ((0U == (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
                ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip))
                : 0ULL));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_msip_T_1 
        = (1U & ((0U == (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
                  ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata)
                  : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip)));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtimecmp_T 
        = ((0x30U == (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata
            : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid 
        = ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                     >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint 
        = ((0x2000000U > (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr))) 
           | (0x200ffffU < (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr))));
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
            = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                      >> 1U) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                >> 2U)));
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
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall 
        = __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall;
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr 
                = (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                   >> 0x14U);
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___GEN_0));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr 
                = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                            >> 7U));
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
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
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
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
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid));
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
                                ? (((QData)((IData)(
                                                    ((4U 
                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                                      ? 
                                                     vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]
                                                      : 
                                                     vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((4U 
                                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                                                  ? 
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]
                                                                  : 
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]))))
                                : 0ULL) | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid)
                                            ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType)
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U])))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]))))
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
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_1 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1));
    vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_time_irq) 
           | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_soft_irq)));
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                ? 0U : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                ? 0U : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                ? 0U : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)
                         : 0U));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_19[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    }
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
    __Vtemp630[0U] = 1U;
    __Vtemp630[1U] = 0U;
    __Vtemp630[2U] = 0U;
    VL_ADD_W(3, __Vtemp631, __Vtemp630, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q);
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]
                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                             ? ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                                 ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]
                                 : __Vtemp631[0U]) : 
                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]
                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                             ? ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                                 ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]
                                 : __Vtemp631[1U]) : 
                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                      ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]
                               : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                                   ? ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]
                                       : __Vtemp631[2U])
                                   : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]))));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]);
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
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid)));
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
    if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall) {
        vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType;
        vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc;
        vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType;
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen 
        = ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)
            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_1));
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
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_4 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall));
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_9 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid));
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid 
        = ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType))
            ? 0x10U : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType))
                        ? 8U : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType))
                                 ? 4U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType))
                                          ? 2U : (4U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType))))));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
        = (vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc 
           + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm);
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb = 0xffU;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb)
                : 0U);
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast 
            = (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen));
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1));
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid 
        = ((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)) 
            & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))) 
           | ((((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid)) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_w_ready 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
    riscv_soc__DOT__core__DOT__d_cache__DOT___T_17 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready) 
           & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
              & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)));
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
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_rs1_data 
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__valid 
        = (1U & (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                    >> 3U) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                              >> 4U)) & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall))) 
                 & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__valid 
        = (1U & (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                    >> 3U) & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                 >> 4U))) & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall))) 
                 & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall))));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6 = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready) 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5 = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready) 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid));
    riscv_soc__DOT__core__DOT__d_cache__DOT___T_14 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_w_ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_96 
        = ((~ (IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___T_17)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
    riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95 
        = ((IData)(riscv_soc__DOT__core__DOT__d_cache__DOT___T_17) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
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
        __Vtemp657[1U] = (IData)((((~ vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm) 
                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data) 
                                  >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[0U] 
            = (IData)(((~ vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm) 
                       & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data));
    } else {
        __Vtemp657[1U] = ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
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
        = __Vtemp657[1U];
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[0U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[1U] 
        = (IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                  >> 0x1fU))) ? 0x1ffffffffULL
                    : 0ULL));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[2U] 
        = (IData)((((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                   >> 0x1fU))) ? 0x1ffffffffULL
                     : 0ULL) >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[0U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[1U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[2U] 
        = (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                         >> 0x3fU)));
    if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[0U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                  >> 0x1fU))) ? 0xffffffffU
                    : 0U) : 0U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                  >> 0x1fU))) ? 0xffffffffU
                    : 0U) : 0U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                  >> 0x1fU))) ? 1U : 0U)
                : 0U);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[0U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                  >> 0x3fU))) ? 0xffffffffU
                    : 0U) : 0U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                  >> 0x3fU))) ? 0xffffffffU
                    : 0U) : 0U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                  >> 0x3fU))) ? 1U : 0U)
                : 0U);
    }
    VL_EXTEND_WQ(65,64, __Vtemp678, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
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
                : __Vtemp678[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                           >> 0x20U)) : __Vtemp678[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                 >> 0x3fU))) : __Vtemp678[2U]);
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
                    ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[2U])))
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q[2U])))));
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
    VL_EXTEND_WI(65,32, __Vtemp685, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data));
    VL_EXTEND_WQ(65,64, __Vtemp688, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
    if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[0U]
                : __Vtemp685[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[1U]
                : __Vtemp685[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[2U]
                : __Vtemp685[2U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U]
                : __Vtemp688[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U]
                : __Vtemp688[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U]
                : __Vtemp688[2U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp694, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
    VL_EXTEND_WQ(65,64, __Vtemp695, (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    VL_ADD_W(3, __Vtemp696, __Vtemp694, __Vtemp695);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U] 
        = __Vtemp696[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[1U] 
        = __Vtemp696[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[2U] 
        = (1U & __Vtemp696[2U]);
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
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag_io_A 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag_io_A 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A 
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
    __Vtemp699[0U] = 1U;
    __Vtemp699[1U] = 0U;
    __Vtemp699[2U] = 0U;
    VL_ADD_W(3, __Vtemp700, __Vtemp699, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2 
        = (1U & ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                       >> 0x3fU))))
                  ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                             >> 0x3fU)) : (__Vtemp700[1U] 
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
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc);
    vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_23 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_11 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid)
            ? 2U : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w)))
                     ? 3U : 0U));
    __Vtemp709[0U] = 1U;
    __Vtemp709[1U] = 0U;
    __Vtemp709[2U] = 0U;
    VL_ADD_W(3, __Vtemp710, __Vtemp709, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    __Vtemp720[0U] = 1U;
    __Vtemp720[1U] = 0U;
    __Vtemp720[2U] = 0U;
    VL_ADD_W(3, __Vtemp721, __Vtemp720, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    __Vtemp746[1U] = ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                       ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                           == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)
                           ? 0U : (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                           >> 0x20U)))
                       : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                           ? ((1U & __Vtemp710[2U])
                               ? 0U : (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                               >> 0x20U)))
                           : ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                               ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                   ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                                              >> 0x20U))
                                   : 0U) : ((0x3eU 
                                             == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                             ? ((1U 
                                                 & __Vtemp721[2U])
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
    __Vtemp748[0U] = ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                       ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11)
                       : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                           ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                               == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)
                               ? 0U : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11))
                           : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                               ? ((1U & __Vtemp710[2U])
                                   ? 0U : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11))
                               : ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                   ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                       ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11)
                                       : 0U) : ((0x3eU 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                 ? 
                                                ((1U 
                                                  & __Vtemp721[2U])
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
            = __Vtemp748[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
            = ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_11 
                           >> 0x20U)) : __Vtemp746[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
            = ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? 1U : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                         ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                             == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2)
                             ? 0U : 1U) : ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                            ? ((1U 
                                                & __Vtemp710[2U])
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
                                                     & __Vtemp721[2U])
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
    __Vtemp752[0U] = 1U;
    __Vtemp752[1U] = 0U;
    __Vtemp752[2U] = 0U;
    VL_ADD_W(3, __Vtemp753, __Vtemp752, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    __Vtemp758[0U] = 1U;
    __Vtemp758[1U] = 0U;
    __Vtemp758[2U] = 0U;
    VL_ADD_W(3, __Vtemp759, __Vtemp758, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
    __Vtemp775[1U] = ((4U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
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
    __Vtemp777[0U] = ((6U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
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
        __Vtemp783[1U] = (IData)((((__Vtemp753[0U] 
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
        __Vtemp783[2U] = 1U;
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[0U] 
            = (IData)(((__Vtemp753[0U] >> 0x1fU) ? 
                       (0xffffffff00000000ULL | (QData)((IData)(
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U]))))
                        : (QData)((IData)(((IData)(1U) 
                                           + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3[0U])))));
    } else {
        __Vtemp783[1U] = ((0xaU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
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
                                     ? 0U : __Vtemp775[1U])));
        __Vtemp783[2U] = ((0xaU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
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
                                                    & __Vtemp759[2U])))
                    : __Vtemp777[0U]));
    }
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[1U] 
        = __Vtemp783[1U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[2U] 
        = __Vtemp783[2U];
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
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___GEN_0 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)) 
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
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen 
        = ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_11))));
    VL_EXTEND_WQ(127,64, __Vtemp790, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp791, __Vtemp790, 
                  (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    if ((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                            >> 1U)))) {
        __Vtemp799[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                  >> (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))));
        __Vtemp799[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                   >> (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))) 
                                  >> 0x20U));
    } else {
        __Vtemp799[0U] = ((0xdU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
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
                                                           __Vtemp791[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            __Vtemp791[0U]))))
                               : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[0U]));
        __Vtemp799[1U] = ((0xdU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
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
                                                         __Vtemp791[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp791[0U]))) 
                                       >> 0x20U)) : 
                           riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_82[1U]));
    }
    if ((0xfU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                           >> 1U)))) {
        __Vtemp805[1U] = (IData)(((((QData)((IData)(
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
        __Vtemp805[1U] = ((0xeU == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
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
                           __Vtemp799[1U]));
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
                    : __Vtemp799[0U]));
    }
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_94[1U] 
        = __Vtemp805[1U];
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
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready 
        = (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)) 
           | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
              & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready)));
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)));
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready 
            = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid) 
               & 1U);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)))
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen))
                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)))
                    : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))))));
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast));
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
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
           & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                        >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready)
               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)));
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid) 
           & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                        >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
               : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_8 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1 = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready) 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid));
    riscv_soc__DOT__core__DOT__i_cache__DOT___T_13 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
    riscv_soc__DOT__core__DOT__d_cache__DOT___T_13 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
    riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_76 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish));
    riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_14 
        = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)
                  ? ((~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush))) 
                         & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid))
                  : ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid))));
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_29 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_24 
        = (3U & (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)))
                  ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                     - (IData)(1U)) : ((((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_8)) 
                                        & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w)))
                                        ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                                           - (IData)(1U))
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
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
    if (riscv_soc__DOT__core__DOT__i_cache__DOT___T_13) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_79 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_80 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? 0xffffU : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_83 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                    ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata
                    : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
                        ? vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U])))))
                : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_79 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_80 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_83 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata;
    }
    VL_EXTEND_WQ(128,64, __Vtemp823, vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
    if (riscv_soc__DOT__core__DOT__i_cache__DOT___T_13) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_82[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[0U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U]) 
                       | (riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[0U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U])))
                    : riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[0U])
                : __Vtemp823[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_82[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[1U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U]) 
                       | (riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[1U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U])))
                    : riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[1U])
                : __Vtemp823[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_82[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[2U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U]) 
                       | (riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[2U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U])))
                    : riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[2U])
                : __Vtemp823[2U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_82[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[3U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U]) 
                       | (riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[3U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U])))
                    : riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[3U])
                : __Vtemp823[3U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_82[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_82[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_82[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_82[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U];
    }
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
    VL_EXTEND_WQ(128,64, __Vtemp831, vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
    if (riscv_soc__DOT__core__DOT__d_cache__DOT___T_13) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[0U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
                       | (riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])))
                    : riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U])
                : __Vtemp831[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
                       | (riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])))
                    : riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U])
                : __Vtemp831[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
                       | (riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])))
                    : riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U])
                : __Vtemp831[2U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
                       | (riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])))
                    : riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U])
                : __Vtemp831[3U]);
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
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_97 
        = (((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_76) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_98 
        = (((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_76) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish))
            ? 3U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_99 
        = (((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_76) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_156 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish)
            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)) 
                   & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T)) 
                       | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T))) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish)))
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                    ? ((IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___T_13)
                        ? (IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_76)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish))
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish))));
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

VL_INLINE_OPT void Vriscv_soc___024root___combo__TOP__3(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___combo__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp835;
    VlWide<3>/*95:0*/ __Vtemp836;
    VlWide<3>/*95:0*/ __Vtemp837;
    VlWide<3>/*95:0*/ __Vtemp840;
    VlWide<3>/*95:0*/ __Vtemp843;
    VlWide<3>/*95:0*/ __Vtemp850;
    VlWide<3>/*95:0*/ __Vtemp851;
    VlWide<3>/*95:0*/ __Vtemp852;
    VlWide<3>/*95:0*/ __Vtemp855;
    VlWide<3>/*95:0*/ __Vtemp858;
    VlWide<3>/*95:0*/ __Vtemp865;
    VlWide<3>/*95:0*/ __Vtemp866;
    VlWide<3>/*95:0*/ __Vtemp867;
    VlWide<3>/*95:0*/ __Vtemp868;
    VlWide<3>/*95:0*/ __Vtemp871;
    VlWide<3>/*95:0*/ __Vtemp875;
    VlWide<3>/*95:0*/ __Vtemp882;
    VlWide<3>/*95:0*/ __Vtemp883;
    VlWide<3>/*95:0*/ __Vtemp884;
    VlWide<3>/*95:0*/ __Vtemp885;
    VlWide<3>/*95:0*/ __Vtemp888;
    VlWide<3>/*95:0*/ __Vtemp892;
    VlWide<5>/*159:0*/ __Vtemp901;
    VlWide<5>/*159:0*/ __Vtemp904;
    VlWide<4>/*127:0*/ __Vtemp914;
    VlWide<4>/*127:0*/ __Vtemp915;
    VlWide<4>/*127:0*/ __Vtemp916;
    VlWide<4>/*127:0*/ __Vtemp917;
    VlWide<4>/*127:0*/ __Vtemp918;
    VlWide<5>/*159:0*/ __Vtemp932;
    VlWide<5>/*159:0*/ __Vtemp936;
    VlWide<5>/*159:0*/ __Vtemp937;
    VlWide<5>/*159:0*/ __Vtemp938;
    VlWide<5>/*159:0*/ __Vtemp939;
    VlWide<5>/*159:0*/ __Vtemp940;
    // Body
    VL_EXTEND_WQ(67,64, __Vtemp835, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp836, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp837, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_r_raddr_T 
                                     << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp840, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_r_raddr_T 
                                     << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp843, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_166[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_166[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_166[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_166[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp835[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                         ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T)) 
                                             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T)))
                                             ? __Vtemp836[0U]
                                             : __Vtemp837[0U])
                                         : __Vtemp840[0U])
                                     : __Vtemp843[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_166[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp835[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                         ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T)) 
                                             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T)))
                                             ? __Vtemp836[1U]
                                             : __Vtemp837[1U])
                                         : __Vtemp840[1U])
                                     : __Vtemp843[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_166[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp835[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                         ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T)) 
                                             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T)))
                                             ? __Vtemp836[2U]
                                             : __Vtemp837[2U])
                                         : __Vtemp840[2U])
                                     : __Vtemp843[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp850, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp851, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp852, (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                     << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp855, (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                     << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp858, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp850[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
                                             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))
                                             ? __Vtemp851[0U]
                                             : __Vtemp852[0U])
                                         : __Vtemp855[0U])
                                     : __Vtemp858[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp850[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
                                             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))
                                             ? __Vtemp851[1U]
                                             : __Vtemp852[1U])
                                         : __Vtemp855[1U])
                                     : __Vtemp858[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp850[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
                                             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))
                                             ? __Vtemp851[2U]
                                             : __Vtemp852[2U])
                                         : __Vtemp855[2U])
                                     : __Vtemp858[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp865, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp866, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp867, ((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))
                                        ? (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U])))
                                        : (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q[0U])))) 
                                      << 0xaU) | (QData)((IData)(
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index) 
                                                                  << 4U)))));
    VL_EXTEND_WQ(67,64, __Vtemp868, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp871, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp875, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_167[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_167[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_167[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_167[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp865[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                         ? __Vtemp866[0U]
                                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T)
                                             ? ((1U 
                                                 & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_0_T) 
                                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_2_T) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))))
                                                 ? 
                                                __Vtemp867[0U]
                                                 : 
                                                __Vtemp868[0U])
                                             : __Vtemp871[0U]))
                                     : __Vtemp875[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_167[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp865[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                         ? __Vtemp866[1U]
                                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T)
                                             ? ((1U 
                                                 & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_0_T) 
                                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_2_T) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))))
                                                 ? 
                                                __Vtemp867[1U]
                                                 : 
                                                __Vtemp868[1U])
                                             : __Vtemp871[1U]))
                                     : __Vtemp875[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_167[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp865[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                         ? __Vtemp866[2U]
                                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T)
                                             ? ((1U 
                                                 & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_0_T) 
                                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___tag_dirty_2_T) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T))))
                                                 ? 
                                                __Vtemp867[2U]
                                                 : 
                                                __Vtemp868[2U])
                                             : __Vtemp871[2U]))
                                     : __Vtemp875[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp882, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp883, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp884, ((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))
                                        ? (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U])))
                                        : (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q[0U])))) 
                                      << 0xaU) | (QData)((IData)(
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index) 
                                                                  << 4U)))));
    VL_EXTEND_WQ(67,64, __Vtemp885, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp888, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp892, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp882[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? __Vtemp883[0U]
                                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                                             ? ((1U 
                                                 & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))))
                                                 ? 
                                                __Vtemp884[0U]
                                                 : 
                                                __Vtemp885[0U])
                                             : __Vtemp888[0U]))
                                     : __Vtemp892[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp882[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? __Vtemp883[1U]
                                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                                             ? ((1U 
                                                 & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))))
                                                 ? 
                                                __Vtemp884[1U]
                                                 : 
                                                __Vtemp885[1U])
                                             : __Vtemp888[1U]))
                                     : __Vtemp892[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp882[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                     ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                         ? __Vtemp883[2U]
                                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                                             ? ((1U 
                                                 & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))))
                                                 ? 
                                                __Vtemp884[2U]
                                                 : 
                                                __Vtemp885[2U])
                                             : __Vtemp888[2U]))
                                     : __Vtemp892[2U]));
    }
    VL_EXTEND_WW(131,130, __Vtemp901, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    VL_EXTEND_WW(131,130, __Vtemp904, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
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
                                          ? __Vtemp901[0U]
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U]))
                             : __Vtemp904[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                 ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? __Vtemp901[1U]
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U]))
                             : __Vtemp904[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                 ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? __Vtemp901[2U]
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U]))
                             : __Vtemp904[2U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[3U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                 ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? __Vtemp901[3U]
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U]))
                             : __Vtemp904[3U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[4U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U]
                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                             ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)
                                 ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                                          ? __Vtemp901[4U]
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U]))
                             : __Vtemp904[4U])));
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
    VL_EXTEND_WQ(127,64, __Vtemp914, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata);
    VL_EXTEND_WQ(127,64, __Vtemp915, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata);
    VL_EXTEND_WQ(127,64, __Vtemp916, ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr) 
                                        == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr)) 
                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data
                                       : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data));
    VL_SHIFTL_WWI(127,127,6, __Vtemp917, __Vtemp916, 
                  (0x38U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result) 
                            << 3U)));
    VL_EXTEND_WQ(127,64, __Vtemp918, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[3U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp914[0U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)
                                     ? __Vtemp915[0U]
                                     : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                         ? __Vtemp917[0U]
                                         : __Vtemp918[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp914[1U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)
                                     ? __Vtemp915[1U]
                                     : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                         ? __Vtemp917[1U]
                                         : __Vtemp918[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp914[2U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)
                                     ? __Vtemp915[2U]
                                     : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                         ? __Vtemp917[2U]
                                         : __Vtemp918[2U])));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78[3U] 
            = (0x7fffffffU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                               ? __Vtemp914[3U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush)
                                                    ? 
                                                   __Vtemp915[3U]
                                                    : 
                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                                     ? 
                                                    __Vtemp917[3U]
                                                     : 
                                                    __Vtemp918[3U]))));
    }
    VL_EXTEND_WQ(130,64, __Vtemp932, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
    if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
        __Vtemp936[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
        __Vtemp936[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                         >> 0x1fU)))
                           ? 0xffffffffU : 0U);
        __Vtemp936[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                         >> 0x1fU)))
                           ? 0xffffffffU : 0U);
        __Vtemp936[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                         >> 0x1fU)))
                           ? 0xffffffffU : 0U);
        __Vtemp936[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                         >> 0x1fU)))
                           ? 3U : 0U);
    } else {
        __Vtemp936[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1)
                           : __Vtemp932[0U]);
        __Vtemp936[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                           ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                      >> 0x20U)) : 
                          __Vtemp932[1U]);
        __Vtemp936[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                           ? 0xffffffffU : __Vtemp932[2U]);
        __Vtemp936[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                           ? 0xffffffffU : __Vtemp932[3U]);
        __Vtemp936[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                           ? 3U : __Vtemp932[4U]);
    }
    VL_EXTEND_WW(133,130, __Vtemp937, __Vtemp936);
    __Vtemp938[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                      << 2U);
    __Vtemp938[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                       >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                    << 2U));
    __Vtemp938[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                       >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                    << 2U));
    __Vtemp938[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                       >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                    << 2U));
    __Vtemp938[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                       >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                    << 2U));
    VL_EXTEND_WW(133,132, __Vtemp939, __Vtemp938);
    VL_EXTEND_WW(133,130, __Vtemp940, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[4U] = 0U;
        vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_39 = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp937[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                     ? __Vtemp939[0U]
                                     : __Vtemp940[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp937[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                     ? __Vtemp939[1U]
                                     : __Vtemp940[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp937[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                     ? __Vtemp939[2U]
                                     : __Vtemp940[2U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[3U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp937[3U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                     ? __Vtemp939[3U]
                                     : __Vtemp940[3U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[4U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp937[4U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                     ? __Vtemp939[4U]
                                     : __Vtemp940[4U]));
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
    Vriscv_soc___024root___combo__TOP__3(vlSelf);
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
