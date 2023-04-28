// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

void Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*0:0*/ rflag, QData/*63:0*/ waddr, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__3(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_13;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_26;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_39;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_52;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_215;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_228;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_241;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_254;
    CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_165;
    CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_180;
    CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_195;
    CData/*6:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_239;
    CData/*6:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_254;
    CData/*6:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_269;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_319;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_334;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_349;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_364;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_398;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_417;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_484;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_502;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_550;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_568;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_588;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    CData/*3:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    CData/*1:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc__v0;
    CData/*1:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre__v0;
    CData/*0:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre__v0;
    CData/*1:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0;
    CData/*2:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    CData/*4:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0;
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
    IData/*31:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vtemp335;
    VlWide<4>/*127:0*/ __Vtemp336;
    VlWide<3>/*95:0*/ __Vtemp371;
    VlWide<3>/*95:0*/ __Vtemp372;
    VlWide<3>/*95:0*/ __Vtemp373;
    VlWide<3>/*95:0*/ __Vtemp374;
    VlWide<3>/*95:0*/ __Vtemp375;
    VlWide<4>/*127:0*/ __Vtemp387;
    VlWide<4>/*127:0*/ __Vtemp388;
    VlWide<4>/*127:0*/ __Vtemp389;
    VlWide<4>/*127:0*/ __Vtemp390;
    VlWide<3>/*95:0*/ __Vtemp393;
    VlWide<3>/*95:0*/ __Vtemp394;
    VlWide<5>/*159:0*/ __Vtemp396;
    VlWide<5>/*159:0*/ __Vtemp398;
    VlWide<5>/*159:0*/ __Vtemp399;
    VlWide<5>/*159:0*/ __Vtemp400;
    VlWide<5>/*159:0*/ __Vtemp401;
    VlWide<5>/*159:0*/ __Vtemp402;
    VlWide<5>/*159:0*/ __Vtemp404;
    VlWide<5>/*159:0*/ __Vtemp405;
    VlWide<5>/*159:0*/ __Vtemp406;
    VlWide<5>/*159:0*/ __Vtemp407;
    VlWide<5>/*159:0*/ __Vtemp408;
    VlWide<5>/*159:0*/ __Vtemp410;
    VlWide<5>/*159:0*/ __Vtemp411;
    VlWide<5>/*159:0*/ __Vtemp412;
    VlWide<5>/*159:0*/ __Vtemp420;
    VlWide<5>/*159:0*/ __Vtemp421;
    VlWide<5>/*159:0*/ __Vtemp429;
    VlWide<5>/*159:0*/ __Vtemp430;
    VlWide<5>/*159:0*/ __Vtemp434;
    VlWide<3>/*95:0*/ __Vtemp438;
    VlWide<3>/*95:0*/ __Vtemp439;
    VlWide<3>/*95:0*/ __Vtemp440;
    VlWide<5>/*159:0*/ __Vtemp445;
    VlWide<5>/*159:0*/ __Vtemp446;
    VlWide<5>/*159:0*/ __Vtemp447;
    VlWide<3>/*95:0*/ __Vtemp451;
    VlWide<3>/*95:0*/ __Vtemp452;
    VlWide<3>/*95:0*/ __Vtemp453;
    VlWide<3>/*95:0*/ __Vtemp456;
    VlWide<3>/*95:0*/ __Vtemp457;
    VlWide<3>/*95:0*/ __Vtemp458;
    VlWide<3>/*95:0*/ __Vtemp459;
    VlWide<3>/*95:0*/ __Vtemp460;
    VlWide<3>/*95:0*/ __Vtemp466;
    VlWide<4>/*127:0*/ __Vtemp470;
    VlWide<3>/*95:0*/ __Vtemp480;
    VlWide<3>/*95:0*/ __Vtemp485;
    VlWide<3>/*95:0*/ __Vtemp489;
    VlWide<3>/*95:0*/ __Vtemp509;
    VlWide<3>/*95:0*/ __Vtemp513;
    VlWide<4>/*127:0*/ __Vtemp520;
    VlWide<4>/*127:0*/ __Vtemp521;
    QData/*63:0*/ __Vtask_ramCtrl__0__rdata;
    QData/*63:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc__v0;
    QData/*63:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0;
    QData/*63:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0;
    // Body
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    __Vdlyvset__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0 = 0U;
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
                                                                 ? 
                                                                (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))
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
    __Vdlyvset__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre__v0 = 0U;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
    __Vdlyvset__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0 = 0U;
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state;
    __Vdlyvset__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0 = 0U;
    __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst__v0 = 0U;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb 
        = (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35));
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___inst_counter_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mtval_T_1;
    }
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
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_35));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_5));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_3;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_3;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_9;
    }
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
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
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
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
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
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_54));
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
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
                                                       >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid 
                                                       >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index)))));
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
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_tail_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w) {
                vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip 
                    = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_msip_T_1;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp = 0xffffffffffffffffULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w) {
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
                = ((0xbff8U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))
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
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        VL_EXTEND_WQ(128,54, __Vtemp335, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp335[0U];
        __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp335[1U];
        __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp335[2U];
        __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp335[3U];
        __Vdlyvset__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram5__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        VL_EXTEND_WQ(128,54, __Vtemp336, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp336[0U];
        __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp336[1U];
        __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp336[2U];
        __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp336[3U];
        __Vdlyvset__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram7__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr;
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
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1));
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
               | (vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                         >> 4U))))][0U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])));
        __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
               | (vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                         >> 4U))))][1U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])));
        __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
               | (vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                         >> 4U))))][2U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])));
        __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
               | (vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                         >> 4U))))][3U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])));
        __Vdlyvset__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram4__DOT__sram__DOT__ram__v0 
            = (0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                         : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
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
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                   >> 4U))))][0U];
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                   >> 4U))))][1U];
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                   >> 4U))))][2U];
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__sram4__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                   >> 4U))))][3U];
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
               | (vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                         >> 4U))))][0U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])));
        __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
               | (vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                         >> 4U))))][1U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])));
        __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
               | (vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                         >> 4U))))][2U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])));
        __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
               | (vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram
                  [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                              : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                         >> 4U))))][3U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])));
        __Vdlyvset__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram6__DOT__sram__DOT__ram__v0 
            = (0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                         ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                         : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
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
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                   >> 4U))))][0U];
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                   >> 4U))))][1U];
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                   >> 4U))))][2U];
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__sram6__DOT__sram__DOT__ram
            [(0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                        : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                   >> 4U))))][3U];
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
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_45[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_45[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
        = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_45[2U]);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_14;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_5;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_13;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_15;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_6;
    }
    if (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)) 
         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size))) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc;
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg)
                ? (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                            >> 0x14U)) : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause 
            = (QData)((IData)((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))));
    } else if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause 
            = (0x8000000000000000ULL | (QData)((IData)(
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq)
                                                         ? 7U
                                                         : 3U))));
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcause_T_3;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                         & ((0U != 
                                             (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq) 
                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except)) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc)) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc)));
    if (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)) 
         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size))) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre__v0 
            = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3)
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2)
                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0))));
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
            = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                ? (0x3fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                            >> 0x14U)) : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                                           ? (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                 >> 0xfU))
                                           : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_47));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg)
                ? (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                            >> 0xfU)) : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid)
                                             ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data
                                             : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                                                >> 0x1fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                                  : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)
                                                 : 0ULL)));
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
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
                                      >> 0x1fU) | (
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                                   << 1U)));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] = 0U;
        }
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
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)
                : 0U);
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w = 0U;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1;
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre
            [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail];
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[0U]
                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[1U]
                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[2U]
                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U]);
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
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
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        VL_ADD_W(3, __Vtemp371, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor);
        __Vtemp372[0U] = 1U;
        __Vtemp372[1U] = 0U;
        __Vtemp372[2U] = 0U;
        __Vtemp373[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]);
        __Vtemp373[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]);
        __Vtemp373[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U]);
        VL_ADD_W(3, __Vtemp374, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem, __Vtemp373);
        VL_ADD_W(3, __Vtemp375, __Vtemp372, __Vtemp374);
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))
                    ? __Vtemp371[0U] : __Vtemp375[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))
                    ? __Vtemp371[1U] : __Vtemp375[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                = (1U & ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))
                          ? __Vtemp371[2U] : __Vtemp375[2U]));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] = 0U;
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
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U];
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if ((0x40U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 2U;
        }
    } else {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? 3U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1;
    } else if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)
                : 0U);
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w = 0U;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w 
                = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid)
                ? ((0xb00U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcycle_T_2)
                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcycle_T_2);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq)) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except))))) {
            if ((0x340U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq)) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except))))) {
            if ((0x304U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
            }
        }
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        __Vdlyvset__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr;
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc 
        = ((IData)(vlSelf->reset) ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid 
            = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_32));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid 
        = ((~ (IData)(vlSelf->reset)) & (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid)) 
                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg)) 
                                          & (0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr))) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg)
                ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                     == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                  >> 0x14U))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                    : ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                        >> 0x14U)))
                        ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                  >> 0x14U))])) : 0ULL);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg)
                ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                     == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                  >> 0xfU))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                    : ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                        >> 0xfU))) ? 0ULL
                        : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                  >> 0xfU))])) : 0ULL);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except)
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc
                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc);
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mepc_T_2;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid) 
                                          & (6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) 
                                         & (5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)
                ? ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                    ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))
                : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data 
            = ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                  >> 0x14U) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                : ((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                               >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_39));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x35U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x36U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x37U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x38U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x39U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x28U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x29U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x30U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x31U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x32U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x33U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x34U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x23U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x24U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x20U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x21U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x22U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x25U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x26U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x27U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x12U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x11U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xeU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x15U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x14U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x17U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x10U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x16U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x13U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xfU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x18U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x19U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xdU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((4U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xcU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((3U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xbU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((5U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((6U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((2U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xaU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((1U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((7U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((8U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((9U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) 
         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict))) {
        __Vtemp387[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                          << 2U);
        __Vtemp387[1U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                           >> 0x1eU) | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                 >> 0x20U)) 
                                        << 2U));
        __Vtemp387[2U] = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                    >> 9U)) << 3U) 
                          | ((4U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                             >> 2U)) 
                                    << 2U)) | ((IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                        >> 0x20U)) 
                                               >> 0x1eU)));
        __Vtemp387[3U] = (0x4000000U | (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                  >> 9U)) 
                                         >> 0x1dU) 
                                        | ((IData)(
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                     >> 9U) 
                                                    >> 0x20U)) 
                                           << 3U)));
        VL_EXTEND_WW(128,123, __Vtemp388, __Vtemp387);
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[0U] 
            = __Vtemp388[0U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[1U] 
            = __Vtemp388[1U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[2U] 
            = __Vtemp388[2U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[3U] 
            = __Vtemp388[3U];
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                >> 3U)));
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) 
         & ((2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])) 
            & (1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U]))))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____Vlvbound2 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
        if ((5U >= (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))) {
            __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____Vlvbound2;
            __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0 = 1U;
            __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)));
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
        __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
        __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
        __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        __Vdlyvset__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram0__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
        __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
        __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
        __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        __Vdlyvset__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram2__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        VL_EXTEND_WQ(128,54, __Vtemp389, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp389[0U];
        __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp389[1U];
        __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp389[2U];
        __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp389[3U];
        __Vdlyvset__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram1__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        VL_EXTEND_WQ(128,54, __Vtemp390, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                          >> 0xaU));
        __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp390[0U];
        __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp390[1U];
        __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp390[2U];
        __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp390[3U];
        __Vdlyvset__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram3__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr;
    }
    __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_4)
                                           ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)
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
                                                        & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w))) 
                                                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)))))))
                                           : (((0U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid) 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready)))
                                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5)
                                               : ((
                                                   (1U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready)))
                                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5)
                                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_23)))));
    if (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)) 
         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size))) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst__v0 
            = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
                              >> 2U))) ? (IData)(((
                                                   (0ULL 
                                                    != 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                     >> 0x1fU))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                                    : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata) 
                                                  >> 0x20U))
                : (IData)(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                     >> 0x1fU)) ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                            : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)));
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head;
    }
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
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre__v0] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre__v0;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[__Vdlyvdim0__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0;
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[0U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[1U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[2U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0;
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
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst__v0] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst__v0;
    }
    vlSelf->io_difftest_commit = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit;
    vlSelf->io_difftest_irq = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq;
    vlSelf->io_inst_counter = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter;
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___inst_counter_T_1 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_3 
        = ((0xffffffffffffff77ULL & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus) 
           | ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
                             >> 3U))) ? 0x1880ULL : 0x1800ULL));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_valid_T;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram1_valid_T;
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_34));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_20));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_tail_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_head_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime 
        = ((IData)(vlSelf->reset) ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1);
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception 
        = ((IData)(vlSelf->reset) ? 0U : ((0U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 0xbU : 
                                          ((8U == (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                            ? 3U : 0U)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail = 0U;
    } else if (((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_tail_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    __Vtemp393[0U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                       << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                                    >> 2U));
    __Vtemp393[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                       << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                                    >> 2U));
    __Vtemp393[2U] = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                            >> 2U));
    VL_EXTEND_WW(67,65, __Vtemp394, __Vtemp393);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[0U] 
        = __Vtemp394[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[1U] 
        = __Vtemp394[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[2U] 
        = __Vtemp394[2U];
    VL_EXTEND_WW(131,130, __Vtemp396, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    __Vtemp398[0U] = 1U;
    __Vtemp398[1U] = 0U;
    __Vtemp398[2U] = 0U;
    __Vtemp398[3U] = 0U;
    __Vtemp398[4U] = 0U;
    __Vtemp399[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp399[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp399[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp399[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp399[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp400, __Vtemp398, __Vtemp399);
    __Vtemp401[0U] = __Vtemp400[0U];
    __Vtemp401[1U] = __Vtemp400[1U];
    __Vtemp401[2U] = __Vtemp400[2U];
    __Vtemp401[3U] = __Vtemp400[3U];
    __Vtemp401[4U] = (3U & __Vtemp400[4U]);
    VL_EXTEND_WW(131,130, __Vtemp402, __Vtemp401);
    __Vtemp404[0U] = 1U;
    __Vtemp404[1U] = 0U;
    __Vtemp404[2U] = 0U;
    __Vtemp404[3U] = 0U;
    __Vtemp404[4U] = 0U;
    __Vtemp405[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp405[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp405[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp405[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp405[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp406, __Vtemp404, __Vtemp405);
    __Vtemp407[0U] = __Vtemp406[0U];
    __Vtemp407[1U] = __Vtemp406[1U];
    __Vtemp407[2U] = __Vtemp406[2U];
    __Vtemp407[3U] = __Vtemp406[3U];
    __Vtemp407[4U] = (3U & __Vtemp406[4U]);
    VL_EXTEND_WW(131,130, __Vtemp408, __Vtemp407);
    __Vtemp410[0U] = 1U;
    __Vtemp410[1U] = 0U;
    __Vtemp410[2U] = 0U;
    __Vtemp410[3U] = 0U;
    __Vtemp410[4U] = 0U;
    __Vtemp411[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp411[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp411[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp411[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp411[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp412, __Vtemp410, __Vtemp411);
    if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp420[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        __Vtemp420[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        __Vtemp420[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        __Vtemp420[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        __Vtemp420[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    } else {
        __Vtemp420[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                           : 0U);
        __Vtemp420[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                           : 0U);
        __Vtemp420[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                           : 0U);
        __Vtemp420[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                           : 0U);
        __Vtemp420[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                           : 0U);
    }
    VL_EXTEND_WW(131,130, __Vtemp421, __Vtemp420);
    if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp429[0U] = __Vtemp402[0U];
        __Vtemp429[1U] = __Vtemp402[1U];
        __Vtemp429[2U] = __Vtemp402[2U];
        __Vtemp429[3U] = __Vtemp402[3U];
        __Vtemp429[4U] = __Vtemp402[4U];
    } else {
        __Vtemp429[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp408[0U] : ((4U 
                                                == 
                                                (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                ? (
                                                   __Vtemp412[0U] 
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
                                                   __Vtemp421[0U])));
        __Vtemp429[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp408[1U] : ((4U 
                                                == 
                                                (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                ? (
                                                   (__Vtemp412[0U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp412[1U] 
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
                                                   __Vtemp421[1U])));
        __Vtemp429[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp408[2U] : ((4U 
                                                == 
                                                (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                ? (
                                                   (__Vtemp412[1U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp412[2U] 
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
                                                   __Vtemp421[2U])));
        __Vtemp429[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp408[3U] : ((4U 
                                                == 
                                                (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                ? (
                                                   (__Vtemp412[2U] 
                                                    >> 0x1fU) 
                                                   | (__Vtemp412[3U] 
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
                                                   __Vtemp421[3U])));
        __Vtemp429[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                           ? __Vtemp408[4U] : ((4U 
                                                == 
                                                (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                ? (
                                                   (__Vtemp412[3U] 
                                                    >> 0x1fU) 
                                                   | (6U 
                                                      & (__Vtemp412[4U] 
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
                                                   __Vtemp421[4U])));
    }
    VL_ADD_W(5, __Vtemp430, __Vtemp396, __Vtemp429);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U] 
        = __Vtemp430[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U] 
        = __Vtemp430[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U] 
        = __Vtemp430[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U] 
        = __Vtemp430[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U] 
        = (7U & __Vtemp430[4U]);
    vlSelf->io_difftest_peripheral = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral;
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr
                : 0ULL);
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w = 0U;
            }
        }
    } else {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid = 0U;
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_data_result;
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data = 0ULL;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en 
                    = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w)));
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)
                : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
               & (0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr 
                           >> 0x1fU)));
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state = 0U;
            }
        }
    } else {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22 = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt;
    }
    __Vtemp434[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                      << 1U);
    __Vtemp434[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                    << 1U));
    __Vtemp434[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       << 3U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                  >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                               << 1U)));
    __Vtemp434[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                    << 3U));
    __Vtemp434[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                       >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                    << 3U));
    __Vtemp438[0U] = 1U;
    __Vtemp438[1U] = 0U;
    __Vtemp438[2U] = 0U;
    __Vtemp439[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp439[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp439[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp440, __Vtemp438, __Vtemp439);
    __Vtemp445[0U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                       ? 0U : 1U);
    __Vtemp445[1U] = 0U;
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))) {
        __Vtemp445[2U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                          << 2U);
        __Vtemp445[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                           >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                        << 2U));
        __Vtemp445[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                           >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                        << 2U));
    } else {
        __Vtemp445[2U] = (__Vtemp440[0U] << 2U);
        __Vtemp445[3U] = ((__Vtemp440[0U] >> 0x1eU) 
                          | (__Vtemp440[1U] << 2U));
        __Vtemp445[4U] = ((__Vtemp440[1U] >> 0x1eU) 
                          | (4U & (__Vtemp440[2U] << 2U)));
    }
    VL_EXTEND_WW(132,131, __Vtemp446, __Vtemp445);
    VL_ADD_W(5, __Vtemp447, __Vtemp434, __Vtemp446);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[0U] 
        = __Vtemp447[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[1U] 
        = __Vtemp447[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U] 
        = __Vtemp447[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
        = __Vtemp447[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
        = (0xfU & __Vtemp447[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4 
        = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                 ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]));
    __Vtemp451[0U] = 1U;
    __Vtemp451[1U] = 0U;
    __Vtemp451[2U] = 0U;
    __Vtemp452[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp452[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp452[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp453, __Vtemp451, __Vtemp452);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct 
        = ((((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
              ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                 >> 1U)) & (0U != ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                   | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))) 
            | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        ^ __Vtemp453[0U]) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                             ^ __Vtemp453[1U])) 
                      | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                         ^ (1U & __Vtemp453[2U]))))) 
           | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                      | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))));
    vlSelf->io_difftest_inst = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst;
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst;
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcycle_T_2 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle);
    vlSelf->io_difftest_pc = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc;
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_16;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_7;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg 
            = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
               | ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                  | ((0x1bU == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                     | ((0x3bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                        | ((0x7033U == (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                           | ((0x7013U == (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                              | ((0x17U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                 | ((0x63U != (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                    & ((0x5063U != 
                                        (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                       & ((0x7063U 
                                           != (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                          & ((0x4063U 
                                              != (0x707fU 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                             & ((0x6063U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_434)))))))))))));
    }
    vlSelf->io_difftest_reg_1 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [1U];
    vlSelf->io_difftest_reg_2 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [2U];
    vlSelf->io_difftest_reg_3 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [3U];
    vlSelf->io_difftest_reg_4 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [4U];
    vlSelf->io_difftest_reg_5 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [5U];
    vlSelf->io_difftest_reg_6 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [6U];
    vlSelf->io_difftest_reg_7 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [7U];
    vlSelf->io_difftest_reg_8 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [8U];
    vlSelf->io_difftest_reg_9 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [9U];
    vlSelf->io_difftest_reg_10 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0xaU];
    vlSelf->io_difftest_reg_11 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0xbU];
    vlSelf->io_difftest_reg_12 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0xcU];
    vlSelf->io_difftest_reg_13 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0xdU];
    vlSelf->io_difftest_reg_14 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0xeU];
    vlSelf->io_difftest_reg_15 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0xfU];
    vlSelf->io_difftest_reg_16 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x10U];
    vlSelf->io_difftest_reg_17 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x11U];
    vlSelf->io_difftest_reg_18 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x12U];
    vlSelf->io_difftest_reg_19 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x13U];
    vlSelf->io_difftest_reg_20 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x14U];
    vlSelf->io_difftest_reg_21 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x15U];
    vlSelf->io_difftest_reg_22 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x16U];
    vlSelf->io_difftest_reg_23 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x17U];
    vlSelf->io_difftest_reg_24 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x18U];
    vlSelf->io_difftest_reg_25 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x19U];
    vlSelf->io_difftest_reg_26 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x1aU];
    vlSelf->io_difftest_reg_27 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x1bU];
    vlSelf->io_difftest_reg_28 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x1cU];
    vlSelf->io_difftest_reg_29 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x1dU];
    vlSelf->io_difftest_reg_30 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x1eU];
    vlSelf->io_difftest_reg_31 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x1fU];
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc 
                = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc;
        } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_next_pc;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc;
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid)
                                             ? ((0xb02U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                                 : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_minstret_T_3)
                                             : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_minstret_T_3));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken = 0U;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
               & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict = 0U;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))
                : 0ULL);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                : 0ULL);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready)) 
                                         & ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U]))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_1;
        } else if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U]))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_3;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid 
            = (((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                          >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_10)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___reg_head_T_1;
    }
    vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen 
        = (0xfU & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_39));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___reg_w_addr_T_1 
        = (8ULL + vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    VL_ADD_W(3, __Vtemp456, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    __Vtemp457[0U] = 1U;
    __Vtemp457[1U] = 0U;
    __Vtemp457[2U] = 0U;
    __Vtemp458[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp458[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp458[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp459, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp458);
    VL_ADD_W(3, __Vtemp460, __Vtemp457, __Vtemp459);
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                    ? __Vtemp456[0U] : __Vtemp460[0U])
                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                    ? __Vtemp456[1U] : __Vtemp460[1U])
                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                      ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                          ? __Vtemp456[2U] : __Vtemp460[2U])
                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_head_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head)));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T 
        = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_head_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_tail_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail)));
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr 
            = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                        >> 7U));
    }
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_13 
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc
            [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail];
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType 
            = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                ? 2U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                         ? 2U : ((0x1bU == (0x707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                  ? 2U : ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                           ? 2U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                    ? 2U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                     ? 2U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                      ? 2U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                       ? 1U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                        ? 1U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                         ? 1U
                                                         : 
                                                        ((0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                          ? 1U
                                                          : 
                                                         ((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                           ? 1U
                                                           : 
                                                          ((0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                            ? 1U
                                                            : 
                                                           ((0x3073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                             ? 4U
                                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_210)))))))))))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_1 
        = (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                 - (IData)(1U)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_3 
        = (7U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_43));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_4 
        = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5 
        = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                 - (IData)(1U)));
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
                = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb 
                = (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                   >> 0xaU);
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index 
                = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                    >> 4U)));
        }
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
                = (0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr));
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) 
               & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))
                   ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit))
                   : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1))
                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T)
                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_10;
            }
        }
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_34;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_21;
        } else if ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid = 0U;
        }
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_33;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr 
                = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))
                    ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_13
                    : (0xfffffffffffffff0ULL & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) 
               & ((~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))) 
                  | (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0)) 
                        | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit) 
                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1))))));
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_32;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U] = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[0U];
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[1U];
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[2U];
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_40;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 = 0ULL;
    } else if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit)
                ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit)
                    ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T_1
                    : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1))
                        ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))
                            ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T_1
                            : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T)
                        : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0)
                            ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T_1
                            : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T))));
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid)
                ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))
                    ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0)) 
                        | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit) 
                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1)))
                        ? 0U : 1U) : 1U) : 0U);
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast) {
            __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state = 0U;
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___reg_head_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)));
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
                                                      : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_13))))))))))))));
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc__v0] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc__v0;
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_head_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head)));
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___reg_tail_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? 4U : ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                     ? 2U : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                              ? 2U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                      | (2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))))));
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
    __Vtemp466[1U] = (IData)((((QData)((IData)(((((0x8000U 
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
    __Vtemp466[2U] = (IData)(((((QData)((IData)((((
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
        = __Vtemp466[1U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U] 
        = __Vtemp466[2U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U] 
        = (IData)((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U]))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U] 
        = (IData)(((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U]))) 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U] 
        = (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U] 
        = (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                   >> 0x20U));
    VL_EXTEND_WQ(128,64, __Vtemp470, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata);
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
            = __Vtemp470[0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U] 
            = __Vtemp470[1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U] 
            = __Vtemp470[2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U] 
            = __Vtemp470[3U];
    }
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
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
           | (1ULL << (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                        >> 4U)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram1_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid 
           | (1ULL << (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                        >> 4U)))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)
                                           ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__result_size)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr;
    }
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid 
        = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9));
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
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___reg_tail_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)));
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
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2)
            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0)));
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
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready) 
           & (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
           >> (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
           | (1ULL << (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                        >> 4U)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T_1 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
           & (~ (1ULL << (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                           >> 4U))))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3 
        = (3U & ((3U == (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63))
                  ? (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63)
                  : ((IData)(1U) + (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7 
        = (3U & ((0U == (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63))
                  ? (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63)
                  : ((IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63) 
                     - (IData)(1U))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index 
        = (0x3fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready)
                     ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr 
                                >> 4U)) : (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                   >> 4U))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 = 0x80000000ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc
                    : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_0_T_2));
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T)) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
        = ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                     >> 0x1fU)) ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr
            : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag 
        = ((0xfffffffffffffeULL & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 8U)) | (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                         >> 2U))))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][0U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][1U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][2U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][3U];
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_215 
        = ((0xdU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13)
            : ((0xcU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12)
                : ((0xbU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                              >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11)
                    : ((0xaU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                  >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10)
                        : ((9U == (0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                    >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9)
                            : ((8U == (0x3fU & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                        >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8)
                                : ((7U == (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7)
                                    : ((6U == (0x3fU 
                                               & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                          >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6)
                                        : ((5U == (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                              >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5)
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1)
                                                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid 
        = ((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                     >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc;
        }
    }
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_228 
        = ((0x1aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26)
            : ((0x19U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25)
                : ((0x18U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24)
                    : ((0x17U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23)
                        : ((0x16U == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22)
                            : ((0x15U == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21)
                                : ((0x14U == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20)
                                    : ((0x13U == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19)
                                        : ((0x12U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18)
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14)
                                                      : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_215))))))))))))));
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_241 
        = ((0x27U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39)
            : ((0x26U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38)
                : ((0x25U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37)
                    : ((0x24U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36)
                        : ((0x23U == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35)
                            : ((0x22U == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34)
                                : ((0x21U == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33)
                                    : ((0x20U == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32)
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31)
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30)
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29)
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28)
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27)
                                                      : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_228))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
        = ((IData)(vlSelf->reset) ? 0ULL : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq) 
                                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except))
                                             ? (0xfffffffffffffffcULL 
                                                & (((0x305U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec))
                                             : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc)
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_next_pc
                                                 : 
                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc)
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc
                                                  : 0ULL))));
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_254 
        = ((0x34U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52)
            : ((0x33U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51)
                : ((0x32U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50)
                    : ((0x31U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49)
                        : ((0x30U == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48)
                            : ((0x2fU == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47)
                                : ((0x2eU == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46)
                                    : ((0x2dU == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45)
                                        : ((0x2cU == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44)
                                            : ((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43)
                                                : (
                                                   (0x2aU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42)
                                                    : 
                                                   ((0x29U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41)
                                                     : 
                                                    ((0x28U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40)
                                                      : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_241))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_265 
        = ((0x3fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63)
            : ((0x3eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62)
                : ((0x3dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61)
                    : ((0x3cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60)
                        : ((0x3bU == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59)
                            : ((0x3aU == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58)
                                : ((0x39U == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57)
                                    : ((0x38U == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56)
                                        : ((0x37U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55)
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54)
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53)
                                                    : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_254))))))))))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq)) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except))))) {
            if ((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
            }
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid 
        = (((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U] 
             >> 0x1aU) & ((0xffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U])) 
                                                     >> 2U))) 
                          == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag)) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_265) 
              >> 1U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid 
        = (((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U] 
             >> 0x1aU) & ((0xffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U])) 
                                                     >> 2U))) 
                          == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag)) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_265) 
              >> 1U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid)
            ? ((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U]))
                ? ((5U >= (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS
                   [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head]
                    : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____Vxrand1)
                : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U])) 
                    << 0x3eU) | (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[1U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])) 
                                               >> 2U))))
            : 0ULL);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                ? ((0xffffffffffffff77ULL & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                   | (QData)((IData)(((1U & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                     >> 7U)))
                                       ? 0x88U : 0x80U))))
                : ((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                 >> 2U))) ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                    : ((3U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                     >> 2U))) ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                        : ((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U))) ? 
                           ((0xffffffffffffffe0ULL 
                             & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data) 
                            | (QData)((IData)((0x1fU 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm)))))
                            : ((1U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data
                                : ((6U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result
                                    : ((2U == (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result
                                        : 0ULL)))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_0_T_2 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid)
            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc
            : (4ULL + vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm 
        = (((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr 
            = (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
               >> 0x14U);
    }
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
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_9 
        = ((0x300U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType 
            = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                ? 2U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                         ? 0U : ((0x1bU == (0x707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                  ? 1U : ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                           ? 3U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                    ? 0x1eU
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                     ? 0x1cU
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                      ? 0x60U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                       ? 0x22U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                        ? 0x36U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                         ? 0x3eU
                                                         : 
                                                        ((0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                          ? 0x32U
                                                          : 
                                                         ((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                           ? 0x3aU
                                                           : 
                                                          ((0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                            ? 0x26U
                                                            : 
                                                           ((0x3073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                             ? 0xeU
                                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_284)))))))))))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst
        [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33 
        = ((0xb00U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                       >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle
            : ((0x344U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                           >> 0x14U)) ? 0ULL : ((0x343U 
                                                 == 
                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                  >> 0x14U))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                   >> 0x14U))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause
                                                  : 
                                                 ((0x341U 
                                                   == 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                    >> 0x14U))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc
                                                   : 
                                                  ((0x340U 
                                                    == 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                     >> 0x14U))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                      >> 0x14U))
                                                     ? 0ULL
                                                     : 
                                                    ((0x305U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                       >> 0x14U))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec
                                                      : 
                                                     ((0x304U 
                                                       == 
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                        >> 0x14U))
                                                       ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie
                                                       : 
                                                      ((0x303U 
                                                        == 
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                         >> 0x14U))
                                                        ? 0ULL
                                                        : 
                                                       ((0x302U 
                                                         == 
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                          >> 0x14U))
                                                         ? 0ULL
                                                         : 
                                                        ((0x301U 
                                                          == 
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                           >> 0x14U))
                                                          ? 0ULL
                                                          : 
                                                         ((0x300U 
                                                           == 
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                            >> 0x14U))
                                                           ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus
                                                           : 0ULL)))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_398 
        = ((0x2023U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
           & ((0x6033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
              | ((0x6013U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                 | ((0x4033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                    | ((0x4013U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                       | ((0x2004033U == (0xfe00707fU 
                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                          | ((0x2005033U == (0xfe00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                             | ((0x200503bU == (0xfe00707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                | ((0x200403bU == (0xfe00707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                   | ((0x2000033U == 
                                       (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                      | ((0x2001033U 
                                          == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                         | ((0x2002033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                            | ((0x2003033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                               | ((0x200003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                  | ((0x2006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                     | ((0x2007033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                        | ((0x200703bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                           | ((0x200603bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                              | ((0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                 | (0x67U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)))))))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_484 
        = ((0x3013U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
           | ((0x3033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
              | ((0x40005033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                 | ((0x40005013U == (0xfc00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                    | ((0x4000501bU == (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                       | ((0x4000503bU == (0xfe00707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                          | ((0x5033U == (0xfe00707fU 
                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                             | ((0x5013U == (0xfc00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                | ((0x501bU == (0xfe00707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                   | ((0x503bU == (0xfe00707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                      | ((0x40000033U 
                                          == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                         | ((0x4000003bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                            | ((0x2023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                               | ((0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                  | ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                     | ((0x4033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                        | ((0x4013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                           | ((0x2004033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                              | ((0x2005033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                 | ((0x200503bU 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                    | ((0x200403bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                       | ((0x2000033U 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                          | ((0x2001033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                             | ((0x2002033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                                | ((0x2003033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                                | ((0x200003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                                | ((0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                                | ((0x200703bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                                | ((0x200603bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                                | ((0x6fU 
                                                                                != 
                                                                                (0x7fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                                & (0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)))))))))))))))))))))))))))))))));
    if ((0x2002033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))) {
        riscv_soc__DOT__core__DOT__decode__DOT___T_165 = 3U;
        riscv_soc__DOT__core__DOT__decode__DOT___T_239 = 0xaU;
    } else {
        riscv_soc__DOT__core__DOT__decode__DOT___T_165 
            = ((0x2003033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                ? 3U : ((0x200003bU == (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                         ? 3U : ((0x2006033U == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                  ? 3U : ((0x2007033U 
                                           == (0xfe00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                           ? 3U : (
                                                   (0x200703bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                    ? 3U
                                                    : 
                                                   ((0x200603bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                     ? 3U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                      ? 1U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                       ? 1U
                                                       : 
                                                      ((0x100073U 
                                                        == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)
                                                        ? 4U
                                                        : 
                                                       ((0x30200073U 
                                                         == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)
                                                         ? 4U
                                                         : 
                                                        ((0x73U 
                                                          == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)
                                                          ? 4U
                                                          : 
                                                         ((0x10200073U 
                                                           == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)
                                                           ? 4U
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0xf00fffffU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                            ? 6U
                                                            : 
                                                           ((0x100fU 
                                                             == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)
                                                             ? 6U
                                                             : 
                                                            ((0x12000073U 
                                                              == 
                                                              (0xfe007fffU 
                                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                              ? 6U
                                                              : 0U)))))))))))))));
        riscv_soc__DOT__core__DOT__decode__DOT___T_239 
            = ((0x2003033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                ? 0xeU : ((0x200003bU == (0xfe00707fU 
                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                           ? 3U : ((0x2006033U == (0xfe00707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                    ? 0x1aU : ((0x2007033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                ? 0x1eU
                                                : (
                                                   (0x200703bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                    ? 0x1fU
                                                    : 
                                                   ((0x200603bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                     ? 0x1bU
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                      ? 0xeU
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                       ? 0xaU
                                                       : 
                                                      ((0x100073U 
                                                        == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)
                                                        ? 0x22U
                                                        : 
                                                       ((0x30200073U 
                                                         == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)
                                                         ? 0x42U
                                                         : 
                                                        ((0x73U 
                                                          == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)
                                                          ? 2U
                                                          : 
                                                         ((0x10200073U 
                                                           == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)
                                                           ? 0x62U
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0xf00fffffU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                            ? 1U
                                                            : 
                                                           ((0x100fU 
                                                             == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)
                                                             ? 5U
                                                             : 
                                                            ((0x12000073U 
                                                              == 
                                                              (0xfe007fffU 
                                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                              ? 2U
                                                              : 0U)))))))))))))));
    }
    riscv_soc__DOT__core__DOT__decode__DOT___T_550 
        = ((0x501bU != (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
           & ((0x503bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
              | ((0x40000033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                 | ((0x4000003bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                    | ((0x2023U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                       | ((0x6033U == (0xfe00707fU 
                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                          | ((0x6013U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                             & ((0x4033U == (0xfe00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                | ((0x4013U != (0x707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                   & ((0x2004033U == 
                                       (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                      | ((0x2005033U 
                                          == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                         | ((0x200503bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                            | ((0x200403bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                               | ((0x2000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                  | ((0x2001033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                     | ((0x2002033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                        | ((0x2003033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                           | ((0x200003bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                              | ((0x2006033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                 | ((0x2007033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                    | ((0x200703bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                       | (0x200603bU 
                                                                          == 
                                                                          (0xfe00707fU 
                                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)))))))))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_319 
        = ((0x2004033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
            ? 6U : ((0x2005033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                     ? 6U : ((0x200503bU == (0xfe00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                              ? 6U : ((0x200403bU == 
                                       (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                       ? 6U : ((0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                ? 6U
                                                : (
                                                   (0x2001033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                    ? 6U
                                                    : 
                                                   ((0x2002033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                     ? 6U
                                                     : 
                                                    ((0x2003033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                      ? 6U
                                                      : 
                                                     ((0x200003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                       ? 6U
                                                       : 
                                                      ((0x2006033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                        ? 6U
                                                        : 
                                                       ((0x2007033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                         ? 6U
                                                         : 
                                                        ((0x200703bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                          ? 6U
                                                          : 
                                                         ((0x200603bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                           ? 6U
                                                           : 
                                                          ((0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                            ? 2U
                                                            : 
                                                           ((0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
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
        = ((0x1023U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
           & ((0x1033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
              | ((0x1013U == (0xfc00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                 | ((0x101bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                    | ((0x103bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                       | ((0x2033U == (0xfe00707fU 
                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                          | ((0x2013U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                             | ((0x3013U == (0x707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                | ((0x3033U == (0xfe00707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                   | ((0x40005033U 
                                       == (0xfe00707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                      | ((0x40005013U 
                                          == (0xfc00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                         | ((0x4000501bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                            | ((0x4000503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                               | ((0x5033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                  | ((0x5013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                     | ((0x501bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                        | ((0x503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                           | ((0x40000033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                              | ((0x4000003bU 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                 | (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_398))))))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_502 
        = ((0x5073U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
           & ((0x3003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
              | ((3U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                 | ((0x4003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                    | ((0x1003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                       | ((0x5003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                          | ((0x37U != (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                             & ((0x2003U == (0x707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                | ((0x6003U == (0x707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                   | ((0x3023U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                      | ((0x23U == 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                         | ((0x1023U 
                                             == (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                            | ((0x1033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                               | ((0x1013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                  | ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                     | ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                        | ((0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                           | ((0x2013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                              | (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_484)))))))))))))))))));
    if ((0x501bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))) {
        riscv_soc__DOT__core__DOT__decode__DOT___T_180 = 2U;
        riscv_soc__DOT__core__DOT__decode__DOT___T_254 = 0x15U;
    } else {
        riscv_soc__DOT__core__DOT__decode__DOT___T_180 
            = ((0x503bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                ? 2U : ((0x40000033U == (0xfe00707fU 
                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                         ? 2U : ((0x4000003bU == (0xfe00707fU 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                  ? 2U : ((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                           ? 5U : (
                                                   (0x6033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                    ? 2U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                     ? 2U
                                                     : 
                                                    ((0x4033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                      ? 2U
                                                      : 
                                                     ((0x4013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                       ? 2U
                                                       : 
                                                      ((0x2004033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                        ? 3U
                                                        : 
                                                       ((0x2005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                         ? 3U
                                                         : 
                                                        ((0x200503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                          ? 3U
                                                          : 
                                                         ((0x200403bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                           ? 3U
                                                           : 
                                                          ((0x2000033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                            ? 3U
                                                            : 
                                                           ((0x2001033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                             ? 3U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_165)))))))))))))));
        riscv_soc__DOT__core__DOT__decode__DOT___T_254 
            = ((0x503bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                ? 0x17U : ((0x40000033U == (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                            ? 0x22U : ((0x4000003bU 
                                        == (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                        ? 0x23U : (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                    ? 0xaU
                                                    : 
                                                   ((0x6033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                     ? 0x1aU
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                      ? 0x18U
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                       ? 0x12U
                                                       : 
                                                      ((0x4013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                        ? 0x10U
                                                        : 
                                                       ((0x2004033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                         ? 0x12U
                                                         : 
                                                        ((0x2005033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                          ? 0x16U
                                                          : 
                                                         ((0x200503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                           ? 0x17U
                                                           : 
                                                          ((0x200403bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                            ? 0x13U
                                                            : 
                                                           ((0x2000033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                             ? 2U
                                                             : 
                                                            ((0x2001033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                              ? 6U
                                                              : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_239)))))))))))))));
    }
    riscv_soc__DOT__core__DOT__decode__DOT___T_568 
        = ((0x6003U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
           & ((0x3023U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
              | ((0x23U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                 | ((0x1023U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                    | ((0x1033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                       | ((0x1013U != (0xfc00707fU 
                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                          & ((0x101bU != (0xfe00707fU 
                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                             & ((0x103bU == (0xfe00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                | ((0x2033U == (0xfe00707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                   | ((0x2013U != (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                      & ((0x3013U != 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                         & ((0x3033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                            | ((0x40005033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                               | ((0x40005013U 
                                                   != 
                                                   (0xfc00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                  & ((0x4000501bU 
                                                      != 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                     & ((0x4000503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                        | ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                           | ((0x5013U 
                                                               != 
                                                               (0xfc00707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                              & (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_550)))))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_334 
        = ((0x40005033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
            ? 6U : ((0x40005013U == (0xfc00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                     ? 4U : ((0x4000501bU == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                              ? 4U : ((0x4000503bU 
                                       == (0xfe00707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                       ? 6U : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                ? 6U
                                                : (
                                                   (0x5013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                    ? 4U
                                                    : 
                                                   ((0x501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                     ? 4U
                                                     : 
                                                    ((0x503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                      ? 6U
                                                      : 
                                                     ((0x40000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                       ? 6U
                                                       : 
                                                      ((0x4000003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                        ? 6U
                                                        : 
                                                       ((0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                         ? 3U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                          ? 6U
                                                          : 
                                                         ((0x6013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                           ? 0xcU
                                                           : 
                                                          ((0x4033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                            ? 6U
                                                            : 
                                                           ((0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                             ? 0xcU
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_319))))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_minstret_T_3 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit)
            ? (1ULL + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret)
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_13 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)) 
           | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)
               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4)
               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_14 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)) 
           | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)
               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_5)
               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_15 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)) 
           | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)
               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_6)
               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_16 
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
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie 
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
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
        = ((0x1063U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
           & ((0x3073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
              | ((0x7073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                 | ((0x2073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                    | ((0x6073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                       | ((0x1073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                          | ((0x5073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                             | ((0x3003U == (0x707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                | ((3U == (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                   | ((0x4003U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                      | ((0x1003U == 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                         | ((0x5003U 
                                             == (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                            | ((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                               | ((0x2003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                  | ((0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                     | ((0x3023U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                        & ((0x23U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                           & (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_417))))))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg 
        = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
           | ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
              | ((0x1bU == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                 | ((0x3bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                    | ((0x7033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                       | ((0x7013U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                          | ((0x17U != (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                             & ((0x63U == (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                | ((0x5063U == (0x707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                   | ((0x7063U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                      | ((0x4063U == 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                         | ((0x6063U 
                                             == (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                            | ((0x1063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                               | ((0x3073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                  | ((0x7073U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                     & ((0x2073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                        | ((0x6073U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                           & ((0x1073U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                              | (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_502)))))))))))))))))));
    if ((0x1023U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))) {
        riscv_soc__DOT__core__DOT__decode__DOT___T_195 = 5U;
        riscv_soc__DOT__core__DOT__decode__DOT___T_269 = 6U;
    } else {
        riscv_soc__DOT__core__DOT__decode__DOT___T_195 
            = ((0x1033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                ? 2U : ((0x1013U == (0xfc00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                         ? 2U : ((0x101bU == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                  ? 2U : ((0x103bU 
                                           == (0xfe00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                           ? 2U : (
                                                   (0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                    ? 2U
                                                    : 
                                                   ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                     ? 2U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                      ? 2U
                                                      : 
                                                     ((0x3033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                       ? 2U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                        ? 2U
                                                        : 
                                                       ((0x40005013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                         ? 2U
                                                         : 
                                                        ((0x4000501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                          ? 2U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                           ? 2U
                                                           : 
                                                          ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                            ? 2U
                                                            : 
                                                           ((0x5013U 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                             ? 2U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_180)))))))))))))));
        riscv_soc__DOT__core__DOT__decode__DOT___T_269 
            = ((0x1033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                ? 6U : ((0x1013U == (0xfc00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                         ? 4U : ((0x101bU == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                  ? 5U : ((0x103bU 
                                           == (0xfe00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                           ? 7U : (
                                                   (0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                    ? 0x2aU
                                                    : 
                                                   ((0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                     ? 0x28U
                                                     : 
                                                    ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                      ? 0x2cU
                                                      : 
                                                     ((0x3033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                       ? 0x2eU
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                        ? 0x36U
                                                        : 
                                                       ((0x40005013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                         ? 0x34U
                                                         : 
                                                        ((0x4000501bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                          ? 0x35U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                           ? 0x37U
                                                           : 
                                                          ((0x5033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                            ? 0x16U
                                                            : 
                                                           ((0x5013U 
                                                             == 
                                                             (0xfc00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                             ? 0x14U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_254)))))))))))))));
    }
    riscv_soc__DOT__core__DOT__decode__DOT___T_588 
        = ((0x17U != (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
           & ((0x63U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
              | ((0x5063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                 | ((0x7063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                    | ((0x4063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                       | ((0x6063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                          | ((0x1063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                             | ((0x3073U != (0x707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                & ((0x7073U != (0x707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                   & ((0x2073U != (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                      & ((0x6073U != 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                         & ((0x1073U 
                                             != (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                            & ((0x5073U 
                                                != 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                               & ((0x3003U 
                                                   != 
                                                   (0x707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                  & ((3U 
                                                      != 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                     & ((0x4003U 
                                                         != 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                        & ((0x1003U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                           & ((0x5003U 
                                                               != 
                                                               (0x707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                              & ((0x37U 
                                                                  != 
                                                                  (0x7fU 
                                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                 & ((0x2003U 
                                                                     != 
                                                                     (0x707fU 
                                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                                                                    & (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_568)))))))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_349 
        = ((0x5003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
            ? 0xcU : ((0x37U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                       ? 1U : ((0x2003U == (0x707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                ? 0xcU : ((0x6003U 
                                           == (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                           ? 0xcU : 
                                          ((0x3023U 
                                            == (0x707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                            ? 3U : 
                                           ((0x23U 
                                             == (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                             ? 3U : 
                                            ((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                              ? 3U : 
                                             ((0x1033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                               ? 6U
                                               : ((0x1013U 
                                                   == 
                                                   (0xfc00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                   ? 4U
                                                   : 
                                                  ((0x101bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                    ? 4U
                                                    : 
                                                   ((0x103bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                     ? 6U
                                                     : 
                                                    ((0x2033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                      ? 6U
                                                      : 
                                                     ((0x2013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                       ? 0xcU
                                                       : 
                                                      ((0x3013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                        ? 0xcU
                                                        : 
                                                       ((0x3033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                         ? 6U
                                                         : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_334))))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip) 
            & (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                       >> 3U))) & (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie 
                                           >> 3U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq 
        = (((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
             <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime) 
            & (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                       >> 3U))) & (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie 
                                           >> 7U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data 
           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
        = ((~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data) 
           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data);
    VL_EXTEND_WQ(65,64, __Vtemp480, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
    if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
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
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data)
                : __Vtemp480[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                           >> 0x20U)) : __Vtemp480[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                 >> 0x3fU))) : __Vtemp480[2U]);
    }
    VL_EXTEND_WI(65,32, __Vtemp485, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data));
    if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[0U] 
            = __Vtemp485[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[1U] 
            = __Vtemp485[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[2U] 
            = __Vtemp485[2U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[1U] 
            = (IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                      >> 0x1fU))) ? 0x1ffffffffULL
                        : 0ULL));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[2U] 
            = (IData)((((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                       >> 0x1fU))) ? 0x1ffffffffULL
                         : 0ULL) >> 0x20U));
    }
    VL_EXTEND_WQ(65,64, __Vtemp489, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
    if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U] 
            = __Vtemp489[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U] 
            = __Vtemp489[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U] 
            = __Vtemp489[2U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U] 
            = (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                             >> 0x3fU)));
    }
    if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2 
            = (((QData)((IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data)));
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
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data;
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
    VL_EXTEND_WI(65,32, __Vtemp509, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data));
    VL_EXTEND_WQ(65,64, __Vtemp513, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
    if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? __Vtemp509[0U] : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? __Vtemp509[1U] : (IData)(((1U & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                           >> 0x1fU)))
                                             ? 0x1ffffffffULL
                                             : 0ULL)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? __Vtemp509[2U] : (IData)((((1U & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                            >> 0x1fU)))
                                              ? 0x1ffffffffULL
                                              : 0ULL) 
                                            >> 0x20U)));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? __Vtemp513[0U] : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? __Vtemp513[1U] : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                            >> 0x20U)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
            = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                ? __Vtemp513[2U] : (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x3fU))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
        = (((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                          >> 2U))) ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data
             : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
           + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4 
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
    VL_EXTEND_WQ(127,64, __Vtemp520, (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                       : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data));
    VL_SHIFTL_WWI(127,127,6, __Vtemp521, __Vtemp520, 
                  (0x38U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr) 
                            << 3U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U] 
        = __Vtemp521[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U] 
        = __Vtemp521[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U] 
        = __Vtemp521[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U] 
        = (0x7fffffffU & __Vtemp521[3U]);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready)) 
            & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush))) 
           & (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram 
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
             >> 2U) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid 
        = (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
              >> 1U) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
            & (6U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    if ((0x7073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_210 = 4U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_284 = 0x1eU;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_210 
            = ((0x2073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                ? 4U : ((0x6073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                         ? 4U : ((0x1073U == (0x707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                  ? 4U : ((0x5073U 
                                           == (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                           ? 4U : (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                    ? 5U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                     ? 5U
                                                     : 
                                                    ((0x4003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                      ? 5U
                                                      : 
                                                     ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                       ? 5U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                        ? 5U
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                         ? 2U
                                                         : 
                                                        ((0x2003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                          ? 5U
                                                          : 
                                                         ((0x6003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                           ? 5U
                                                           : 
                                                          ((0x3023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                            ? 5U
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                             ? 5U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_195)))))))))))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_284 
            = ((0x2073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                ? 0xaU : ((0x6073U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                           ? 0x1aU : ((0x1073U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                       ? 6U : ((0x5073U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                ? 0x16U
                                                : (
                                                   (0x3003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                    ? 0xcU
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                     ? 0U
                                                     : 
                                                    ((0x4003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                      ? 0x10U
                                                      : 
                                                     ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                       ? 4U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                        ? 0x14U
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                         ? 0x40U
                                                         : 
                                                        ((0x2003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                          ? 8U
                                                          : 
                                                         ((0x6003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                           ? 0x18U
                                                           : 
                                                          ((0x3023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                            ? 0xeU
                                                            : 
                                                           ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                             ? 2U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_269)))))))))))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg 
        = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
           | ((0x13U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
              & ((0x1bU != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                 & ((0x3bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                    | ((0x7033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                       | ((0x7013U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)) 
                          & (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_588)))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_364 
        = ((0x5063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
            ? 7U : ((0x7063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                     ? 7U : ((0x4063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                              ? 7U : ((0x6063U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                       ? 7U : ((0x1063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                ? 7U
                                                : (
                                                   (0x3073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                    ? 5U
                                                    : 
                                                   ((0x7073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                     ? 5U
                                                     : 
                                                    ((0x2073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                      ? 5U
                                                      : 
                                                     ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                       ? 5U
                                                       : 
                                                      ((0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                        ? 5U
                                                        : 
                                                       ((0x5073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                         ? 5U
                                                         : 
                                                        ((0x3003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                          ? 0xcU
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                           ? 0xcU
                                                           : 
                                                          ((0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                            ? 0xcU
                                                            : 
                                                           ((0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
        = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
        = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram) {
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
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index));
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_5 
        = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) 
                 | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))
                     ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram))
                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
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
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid) 
           & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                 >> 4U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
              >> 4U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
              >> 1U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType 
        = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
            ? 6U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                     ? 0xcU : ((0x1bU == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                ? 0xcU : ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                           ? 6U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                    ? 6U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                     ? 0xcU
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                      ? 1U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data))
                                                       ? 7U
                                                       : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_364)))))))));
}

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__4(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_13;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_14;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_17;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19;
    VlWide<4>/*127:0*/ __Vtemp525;
    VlWide<3>/*95:0*/ __Vtemp528;
    VlWide<3>/*95:0*/ __Vtemp529;
    VlWide<3>/*95:0*/ __Vtemp530;
    VlWide<3>/*95:0*/ __Vtemp531;
    VlWide<3>/*95:0*/ __Vtemp532;
    VlWide<4>/*127:0*/ __Vtemp535;
    VlWide<4>/*127:0*/ __Vtemp536;
    VlWide<4>/*127:0*/ __Vtemp539;
    VlWide<4>/*127:0*/ __Vtemp540;
    VlWide<4>/*127:0*/ __Vtemp543;
    VlWide<4>/*127:0*/ __Vtemp544;
    VlWide<3>/*95:0*/ __Vtemp548;
    VlWide<3>/*95:0*/ __Vtemp551;
    VlWide<3>/*95:0*/ __Vtemp554;
    VlWide<3>/*95:0*/ __Vtemp559;
    VlWide<3>/*95:0*/ __Vtemp561;
    VlWide<3>/*95:0*/ __Vtemp565;
    VlWide<3>/*95:0*/ __Vtemp574;
    VlWide<3>/*95:0*/ __Vtemp576;
    VlWide<3>/*95:0*/ __Vtemp578;
    VlWide<4>/*127:0*/ __Vtemp586;
    VlWide<4>/*127:0*/ __Vtemp593;
    // Body
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data 
        = (0x3fU & ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                     ? (0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))
                     : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
           == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
        = ((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                         >> 5U))) ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index) 
              == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                   >> 4U)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val 
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
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel)
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb
            : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb)));
    VL_EXTEND_WQ(127,64, __Vtemp525, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata);
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel) {
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
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U] 
            = __Vtemp525[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U] 
            = __Vtemp525[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[2U] 
            = __Vtemp525[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[3U] 
            = __Vtemp525[3U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr;
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_47 
        = ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
            ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                  >> 0x1fU) ? 0xfffffU : 0U) << 0xcU) 
               | ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                             << 4U)) | ((0x7e0U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                            >> 7U)))))
            : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                      >> 0x1fU) ? 0xfffU : 0U) << 0x14U) 
                   | ((0xff000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data) 
                      | ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                    >> 9U)) | (0x7feU 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                  >> 0x14U)))))
                : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                    ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                          >> 0x1fU) ? 0xfffffU : 0U) 
                        << 0xcU) | ((0xfe0U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                                >> 7U))))
                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                        ? (0xfffff000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data)
                        : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                            ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                  >> 0x1fU) ? 0xfffffU
                                  : 0U) << 0xcU) | 
                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_io_put_pc_bits_inst_MPORT_data 
                                >> 0x14U)) : 0U)))));
    VL_EXTEND_WQ(65,64, __Vtemp528, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data);
    VL_EXTEND_WQ(65,64, __Vtemp529, ((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                      ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    VL_ADD_W(3, __Vtemp530, __Vtemp528, __Vtemp529);
    VL_EXTEND_WI(65,1, __Vtemp531, (1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 5U))));
    VL_ADD_W(3, __Vtemp532, __Vtemp530, __Vtemp531);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[0U] 
        = __Vtemp532[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U] 
        = __Vtemp532[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U] 
        = (1U & __Vtemp532[2U]);
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
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__sram_Q[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
    VL_EXTEND_WQ(128,54, __Vtemp535, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                      >> 0xaU));
    VL_EXTEND_WQ(128,54, __Vtemp536, (0x3fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__sram_Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            >> 0xaU) == (0x3fffffffffffffULL & (((QData)((IData)(
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                   ? 
                                                                  __Vtemp535[1U]
                                                                   : 
                                                                  __Vtemp536[1U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                    ? 
                                                                   __Vtemp535[0U]
                                                                    : 
                                                                   __Vtemp536[0U]))))));
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
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__sram_Q[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
    VL_EXTEND_WQ(128,54, __Vtemp539, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                      >> 0xaU));
    VL_EXTEND_WQ(128,54, __Vtemp540, (0x3fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__sram_Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            >> 0xaU) == (0x3fffffffffffffULL & (((QData)((IData)(
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                   ? 
                                                                  __Vtemp539[1U]
                                                                   : 
                                                                  __Vtemp540[1U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                    ? 
                                                                   __Vtemp539[0U]
                                                                    : 
                                                                   __Vtemp540[0U]))))));
    if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                >> 4U)));
    }
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
                     >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint 
        = ((0x2000000U > (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))) 
           | (0x200ffffU < (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2 
        = (1U & ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                       >> 0x3fU))))
                  ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                             >> 0x3fU)) : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U] 
                                           >> 0x1fU)));
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
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid 
        = (((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                      >> 0x1fU)) & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
        = ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                     >> 0x1fU)) ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                ? vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata
                : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid 
        = (((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                      >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
    VL_EXTEND_WQ(127,64, __Vtemp543, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp544, __Vtemp543, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data 
        = ((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                         >> 2U))) ? ((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                      ? VL_SHIFTRS_QQI(64,64,6, 
                                                       ((1U 
                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                      : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                           ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                           : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                         >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
            : ((1U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U))) ? (((QData)((IData)(
                                                          __Vtemp544[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           __Vtemp544[0U])))
                : ((4U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                 >> 2U))) ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                             ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                    : ((6U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                     >> 2U))) ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                                 | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                        : ((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U))) ? 
                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                            & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                            : ((3U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? (QData)((IData)((1U 
                                                   & (~ 
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))))
                                : ((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                    ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2))
                                    : (((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[0U]))))))))));
    VL_EXTEND_WQ(65,64, __Vtemp548, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp551, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp554, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp559, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp561, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp565, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    __Vtemp574[1U] = ((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                    >> 2U))) ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                 ? 
                                                __Vtemp551[1U]
                                                 : (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                            >> 0x20U)))
                       : ((6U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                        >> 2U))) ? 
                          ((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])
                            ? __Vtemp554[1U] : (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                        >> 0x20U)))
                           : ((4U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U)))
                               ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                   ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                              >> 0x20U))
                                   : __Vtemp559[1U])
                               : ((1U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                   ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                       ? __Vtemp561[1U]
                                       : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                  >> 0x20U)))
                                   : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                       ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                  >> 0x20U))
                                       : __Vtemp565[1U])))));
    __Vtemp576[0U] = ((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                    >> 2U))) ? ((1U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])
                                                 ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                                 : 
                                                __Vtemp548[0U])
                       : ((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                        >> 2U))) ? 
                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                            ? __Vtemp551[0U] : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1))
                           : ((6U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U)))
                               ? ((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])
                                   ? __Vtemp554[0U]
                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1))
                               : ((4U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                   ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                       : __Vtemp559[0U])
                                   : ((1U == (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))
                                       ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                           ? __Vtemp561[0U]
                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1))
                                       : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                           : __Vtemp565[0U]))))));
    if ((3U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                      >> 2U)))) {
        __Vtemp578[2U] = 1U;
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                       >> 0x20U));
    } else {
        __Vtemp578[2U] = ((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                        >> 2U))) ? 
                          ((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])
                            ? 1U : __Vtemp548[2U]) : 
                          ((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U))) ? 
                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                             ? __Vtemp551[2U] : 1U)
                            : ((6U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? ((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])
                                    ? __Vtemp554[2U]
                                    : 1U) : ((4U == 
                                              (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                              ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                  ? 1U
                                                  : 
                                                 __Vtemp559[2U])
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                                   ? 
                                                  __Vtemp561[2U]
                                                   : 1U)
                                                  : 
                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                                   ? 1U
                                                   : 
                                                  __Vtemp565[2U]))))));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U] 
            = __Vtemp576[0U];
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U] 
            = ((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U))) ? ((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U])
                                          ? (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                     >> 0x20U))
                                          : __Vtemp548[1U])
                : __Vtemp574[1U]);
    }
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[2U] 
        = __Vtemp578[2U];
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_5 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_6 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
        = ((7U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
            ? (QData)((IData)((0xffU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                                >> 0x38U)))))
            : ((6U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                ? (QData)((IData)((0xffffU & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                                      >> 0x30U)))))
                : ((5U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                    ? (QData)((IData)((0xffffffU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                                            >> 0x28U)))))
                    : ((4U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                        ? (QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                           >> 0x20U)))
                        : ((3U == (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                            ? (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                               >> 0x18U) : ((2U == 
                                             (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                                             ? (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                                >> 0x10U)
                                             : ((1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr)))
                                                 ? 
                                                (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata 
                                                 >> 8U)
                                                 : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata)))))));
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
                                                  | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                     >> 1U))) 
                                         << 1U) : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
            = ((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U))) ? (((IData)((0x8000000000000000ULL 
                                                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                      >> 1U))) 
                                          >> 0x1fU) 
                                         | ((IData)(
                                                    ((0x8000000000000000ULL 
                                                      | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                         >> 1U)) 
                                                     >> 0x20U)) 
                                            << 1U))
                : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
            = ((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U))) ? ((IData)(((0x8000000000000000ULL 
                                                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                      >> 1U)) 
                                                  >> 0x20U)) 
                                         >> 0x1fU) : 
               riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19[2U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] = 0U;
    }
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
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast 
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
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid) 
           & ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                        >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
               : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
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
    VL_EXTEND_WQ(128,64, __Vtemp586, vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
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
            = __Vtemp586[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[1U] 
            = __Vtemp586[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[2U] 
            = __Vtemp586[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[3U] 
            = __Vtemp586[3U];
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
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast) 
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
    VL_EXTEND_WQ(128,64, __Vtemp593, vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
    if (riscv_soc__DOT__core__DOT__d_cache__DOT___T_13) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[0U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U])
                : __Vtemp593[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U])
                : __Vtemp593[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U])
                : __Vtemp593[2U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U])
                : __Vtemp593[3U]);
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
