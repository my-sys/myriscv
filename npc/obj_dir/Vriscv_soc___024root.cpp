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
    CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__execute__DOT__valid;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    CData/*7:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w;
    CData/*5:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index;
    CData/*3:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail;
    CData/*2:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size;
    CData/*1:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_ext__DOT__Memory__v0;
    CData/*1:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_ext__DOT__Memory__v0;
    CData/*1:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v1;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v2;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v3;
    CData/*1:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v4;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v4;
    CData/*1:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v5;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v5;
    CData/*2:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0;
    CData/*2:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory__v0;
    CData/*1:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en;
    CData/*6:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    CData/*6:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    CData/*6:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    CData/*3:0*/ __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_rlen;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_ar_ready;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_valid;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_is_w;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_aw_ready;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_w_ready;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN;
    VlWide<4>/*127:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata;
    VlWide<4>/*127:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata;
    IData/*31:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_ext__DOT__Memory__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0;
    VlWide<3>/*64:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor;
    VlWide<3>/*65:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend;
    VlWide<3>/*64:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem;
    VlWide<3>/*65:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q;
    VlWide<3>/*66:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2;
    VlWide<5>/*129:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1;
    VlWide<5>/*129:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0;
    VlWide<4>/*127:0*/ __Vtemp1;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp33;
    VlWide<4>/*127:0*/ __Vtemp34;
    VlWide<5>/*159:0*/ __Vtemp51;
    VlWide<5>/*159:0*/ __Vtemp52;
    VlWide<5>/*159:0*/ __Vtemp53;
    VlWide<9>/*287:0*/ __Vtemp54;
    VlWide<5>/*159:0*/ __Vtemp56;
    VlWide<5>/*159:0*/ __Vtemp57;
    VlWide<5>/*159:0*/ __Vtemp61;
    VlWide<5>/*159:0*/ __Vtemp62;
    VlWide<5>/*159:0*/ __Vtemp63;
    VlWide<13>/*415:0*/ __Vtemp72;
    VlWide<13>/*415:0*/ __Vtemp73;
    VlWide<5>/*159:0*/ __Vtemp80;
    VlWide<5>/*159:0*/ __Vtemp81;
    VlWide<3>/*95:0*/ __Vtemp104;
    VlWide<3>/*95:0*/ __Vtemp105;
    VlWide<3>/*95:0*/ __Vtemp139;
    VlWide<3>/*95:0*/ __Vtemp140;
    VlWide<3>/*95:0*/ __Vtemp141;
    VlWide<5>/*159:0*/ __Vtemp145;
    VlWide<5>/*159:0*/ __Vtemp151;
    VlWide<5>/*159:0*/ __Vtemp152;
    VlWide<3>/*95:0*/ __Vtemp158;
    VlWide<3>/*95:0*/ __Vtemp159;
    VlWide<3>/*95:0*/ __Vtemp168;
    VlWide<3>/*95:0*/ __Vtemp169;
    VlWide<3>/*95:0*/ __Vtemp170;
    VlWide<3>/*95:0*/ __Vtemp171;
    VlWide<3>/*95:0*/ __Vtemp172;
    VlWide<3>/*95:0*/ __Vtemp188;
    VlWide<3>/*95:0*/ __Vtemp189;
    VlWide<3>/*95:0*/ __Vtemp190;
    VlWide<3>/*95:0*/ __Vtemp191;
    VlWide<3>/*95:0*/ __Vtemp196;
    VlWide<3>/*95:0*/ __Vtemp200;
    VlWide<3>/*95:0*/ __Vtemp201;
    VlWide<4>/*127:0*/ __Vtemp219;
    VlWide<4>/*127:0*/ __Vtemp222;
    VlWide<4>/*127:0*/ __Vtemp234;
    VlWide<3>/*95:0*/ __Vtemp236;
    VlWide<16>/*511:0*/ __Vtemp263;
    VlWide<4>/*127:0*/ __Vtemp296;
    VlWide<4>/*127:0*/ __Vtemp297;
    VlWide<4>/*127:0*/ __Vtemp298;
    VlWide<4>/*127:0*/ __Vtemp299;
    VlWide<3>/*95:0*/ __Vtemp302;
    VlWide<3>/*95:0*/ __Vtemp303;
    VlWide<3>/*95:0*/ __Vtemp304;
    VlWide<3>/*95:0*/ __Vtemp305;
    VlWide<3>/*95:0*/ __Vtemp306;
    VlWide<4>/*127:0*/ __Vtemp309;
    VlWide<4>/*127:0*/ __Vtemp310;
    VlWide<4>/*127:0*/ __Vtemp313;
    VlWide<4>/*127:0*/ __Vtemp314;
    VlWide<4>/*127:0*/ __Vtemp322;
    VlWide<4>/*127:0*/ __Vtemp323;
    VlWide<16>/*511:0*/ __Vtemp326;
    VlWide<3>/*95:0*/ __Vtemp329;
    VlWide<3>/*95:0*/ __Vtemp332;
    VlWide<3>/*95:0*/ __Vtemp336;
    VlWide<3>/*95:0*/ __Vtemp340;
    VlWide<3>/*95:0*/ __Vtemp347;
    VlWide<3>/*95:0*/ __Vtemp351;
    VlWide<5>/*159:0*/ __Vtemp353;
    VlWide<5>/*159:0*/ __Vtemp354;
    VlWide<17>/*543:0*/ __Vtemp356;
    VlWide<3>/*95:0*/ __Vtemp360;
    VlWide<8>/*255:0*/ __Vtemp369;
    VlWide<8>/*255:0*/ __Vtemp372;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1;
    QData/*63:0*/ __Vtask_ramCtrl__0__rdata;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata;
    QData/*53:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc;
    QData/*63:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_ext__DOT__Memory__v0;
    QData/*63:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory__v0;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_raddr;
    QData/*63:0*/ __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_w_addr;
    // Body
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0 = 0U;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0 = 0U;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail;
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_ar_ready 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready;
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_raddr 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail;
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_rlen 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory__v0 = 0U;
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_valid 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid;
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready;
    __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked 
        = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked;
    __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId 
        = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId;
    __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready 
        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready;
    __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp;
    __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime 
        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime;
    __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip 
        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U];
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U];
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U];
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U];
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid;
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_aw_ready 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready;
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_is_w 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w;
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_w_addr 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr;
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_w_ready 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v3 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v4 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v5 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory__v0 = 0U;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U];
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0 = 0U;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready;
    __Vdly__riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret 
        = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret;
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid;
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid;
    __Vdly__riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
        = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus;
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state;
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1;
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid;
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready;
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr;
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write;
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid;
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
    Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(
                                                              ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                                                ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                                                : vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr), __Vtask_ramCtrl__0__rdata, (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_2), vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr, 
                                                              ((0U 
                                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                                                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                                                                 ? vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata
                                                                 : 0ULL)), 
                                                              (((QData)((IData)(
                                                                                (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 7U)))) 
                                                                                << 0x18U) 
                                                                                | ((0xff0000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 6U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 5U)))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 4U)))))))))) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                (((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 3U)))) 
                                                                                << 0x18U) 
                                                                                | ((0xff0000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 2U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0xff00U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb) 
                                                                                >> 1U)))) 
                                                                                << 8U)) 
                                                                                | (0xffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb))))))))))), 
                                                              ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                                               & (IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid)));
    vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata 
        = __Vtask_ramCtrl__0__rdata;
    if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_ext__DOT__Memory__v0 
            = vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc;
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_ext__DOT__Memory__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_ext__DOT__Memory__v0 
            = (1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3) 
                       << 3U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2) 
                                  << 2U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1) 
                                             << 1U) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0)))) 
                     >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail)));
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_ext__DOT__Memory__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        VL_EXTEND_WQ(128,54, __Vtemp1, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0[0U] 
            = __Vtemp1[0U];
        __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0[1U] 
            = __Vtemp1[1U];
        __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0[2U] 
            = __Vtemp1[2U];
        __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0[3U] 
            = __Vtemp1[3U];
        __Vdlyvset__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        VL_EXTEND_WQ(128,54, __Vtemp2, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
        __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0[0U] 
            = __Vtemp2[0U];
        __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0[1U] 
            = __Vtemp2[1U];
        __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0[2U] 
            = __Vtemp2[2U];
        __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0[3U] 
            = __Vtemp2[3U];
        __Vdlyvset__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
               | (vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[0U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])));
        __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
               | (vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[1U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])));
        __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
               | (vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[2U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])));
        __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
               | (vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[3U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])));
        __Vdlyvset__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
               | (vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[0U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])));
        __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
               | (vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[1U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])));
        __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
               | (vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[2U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])));
        __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
               | (vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[3U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])));
        __Vdlyvset__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
        __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
        __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
        __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        __Vdlyvset__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
        __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
        __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
        __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        __Vdlyvset__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_is_except));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast)) 
                                         & (((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_2)) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[3U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][0U]);
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][1U]);
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][2U]);
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][3U]);
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][0U]);
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][1U]);
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][2U]);
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][3U]);
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][0U]);
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][1U]);
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][2U]);
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][3U]);
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][0U]);
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][1U]);
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][2U]);
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr][3U]);
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[0U]))) {
            __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head 
                = (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                         - (IData)(1U)));
        } else if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[0U]))) {
            __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head 
                = (7U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head)));
        }
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_ext__DOT__Memory__v0 
            = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc 
                              >> 2U))) ? (IData)((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data 
                                                  >> 0x20U))
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data));
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_ext__DOT__Memory__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head;
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)) 
                                         & (((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_AXI_Bus_aw_valid_T_9)) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        VL_EXTEND_WQ(128,54, __Vtemp33, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                         >> 0xaU));
        __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0[0U] 
            = __Vtemp33[0U];
        __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0[1U] 
            = __Vtemp33[1U];
        __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0[2U] 
            = __Vtemp33[2U];
        __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0[3U] 
            = __Vtemp33[3U];
        __Vdlyvset__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        VL_EXTEND_WQ(128,54, __Vtemp34, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                         >> 0xaU));
        __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0[0U] 
            = __Vtemp34[0U];
        __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0[1U] 
            = __Vtemp34[1U];
        __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0[2U] 
            = __Vtemp34[2U];
        __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0[3U] 
            = __Vtemp34[3U];
        __Vdlyvset__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr;
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index));
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T) {
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) {
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail 
            = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail)));
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T) {
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail = 0U;
    } else if (((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid))) {
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail 
            = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail)));
    }
    if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) 
          & (2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[0U]))) 
         & (1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[0U])))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT____Vlvbound1 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
        if ((5U >= (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))) {
            __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory__v0 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT____Vlvbound1;
            __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory__v0 = 1U;
            __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory__v0 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head;
        }
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_raddr = 0ULL;
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_rlen = 0U;
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_ar_ready = 1U;
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_valid = 0U;
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state = 0U;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
        if ((1U & (~ (((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)) 
                       | (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid))) 
                      | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_4))))) {
            __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_raddr 
                = (8ULL + vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr);
            __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_rlen 
                = (0xfU & ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen) 
                           - (IData)(1U)));
        }
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_ar_ready 
            = ((((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) 
                 & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)) 
                & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_4)) 
               | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
        if (((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) 
             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid))) {
            __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_valid 
                = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_4)));
        }
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
            = ((((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)) 
                 | (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid))) 
                | (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_4))) 
               & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
    } else {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___T_1 
            = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_2));
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___T_1) {
            __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_raddr 
                = (8ULL + vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr);
            __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_rlen 
                = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0))
                    ? 1U : (0xfU & (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0))));
        }
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_ar_ready 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___T_1)) 
               & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___T_1) 
               | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
            = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___T_1) 
               | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
    }
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T) 
                                           | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid)
                                               ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram))
                                               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready)))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid 
            = (((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                        >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T)));
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked) {
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__unnamedblk1__DOT___T_3 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w));
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__unnamedblk1__DOT___T_3));
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)
                ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__unnamedblk1__DOT___T_3));
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_7) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid) {
            __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_ICache_bus_r_ready_T_1)
                    ? 1U : 2U);
            __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId = 0U;
        } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) {
            __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_DCache_bus_r_ready_T_1)
                    ? 1U : 2U);
            __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId = 1U;
        } else if (vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid) {
            __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
                = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1)));
            __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId = 2U;
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__unnamedblk2__DOT___T_9 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w)));
            __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__unnamedblk2__DOT___T_9)
                    ? (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4)))
                    : 0U);
            __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId 
                = (3U & (- (IData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__unnamedblk2__DOT___T_9))));
        }
    } else if ((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_ICache_bus_r_ready_T_1))) {
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
            = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                     - (IData)(1U)));
    } else if ((((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_DCache_bus_r_ready_T_1))) {
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
            = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                     - (IData)(1U)));
    } else if ((((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1))) {
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
            = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                     - (IData)(1U)));
    } else if (((((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid)) 
                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4)) 
                & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w)))) {
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
            = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                     - (IData)(1U)));
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp = 0xffffffffffffffffULL;
        __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = 0U;
    } else {
        if ((1U & (~ ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) 
                        | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid))) 
                       | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w))) 
                      | (0U != (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr))))))) {
            __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip 
                = (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata));
        }
        __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime 
            = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime);
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) 
                      | (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w)) 
                            & (0x4000U == (0xffffU 
                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr))))))))) {
            __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                = vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata;
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__unnamedblk1__DOT___GEN 
                = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)) 
                         | (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid) 
                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
            __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__unnamedblk1__DOT___GEN) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
            __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__unnamedblk1__DOT___GEN) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        } else {
            __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
            __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
        }
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) 
                      | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid)))))) {
            vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata 
                = ((0xbff8U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr)))
                    ? vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime
                    : ((0x4000U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr)))
                        ? vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp
                        : ((0U != (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr)))
                            ? 0ULL : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip)))));
        }
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_w_addr = 0ULL;
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_is_w = 0U;
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_aw_ready = 1U;
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_w_ready = 0U;
    } else {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___T_5 
            = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_AXI_Bus_aw_valid_T_9));
        vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___T_6 
            = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready) 
               & (IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid));
        vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___GEN 
            = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___T_6)) 
                     | (~ (IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast))));
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___T_5) {
            __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_w_addr 
                = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                        ? vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr
                        : 0ULL));
        } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___T_6) {
            __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_w_addr 
                = (8ULL + vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr);
        }
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_is_w 
            = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___T_5) 
               | ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___GEN) 
                  & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w)));
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_aw_ready 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___T_5)) 
               & (((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___T_6) 
                   & (IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast)) 
                  | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready)));
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_w_ready 
            = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___T_5) 
               | ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___GEN) 
                  & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready)));
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T) {
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head 
            = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)));
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T) {
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail 
            = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)));
    }
    __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)
                                           ? 0U : (7U 
                                                   & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                                       + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                                      - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data 
            = vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_rd_csr_data;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_ext__DOT__Memory
            [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail];
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T) {
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T) {
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v1 = 1U;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T) {
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v2 = 1U;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T) {
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v3 = 1U;
    }
    if (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)) 
         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq))) {
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v4 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v4 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN) {
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v5 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v5 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head;
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready)
                                             ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory
                                            [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]
                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31 = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
                & (0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr)))) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2) 
                                         & ((0U != 
                                             (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2)
                                             ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data
                                             : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2)
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                                  : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)
                                                 : 0ULL)));
    if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory__v0 
            = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                      ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_ext_R1_data))
                          ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_ext_R1_data)
                          : ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_ext_R1_data)))
                      : ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_ext_R1_data))
                          ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_ext_R1_data)
                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_ext_R1_data) 
                             - (IData)(1U)))));
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory__v0 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                >> 3U)));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid 
        = ((~ (IData)(vlSelf->reset)) & (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2)) 
                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg)) 
                                          & (0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr))) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)
                ? ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                    ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN))
                : 0U);
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) 
         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict))) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
               << 2U);
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0[1U] 
            = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                >> 0x1eU) | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                      >> 0x20U)) << 2U));
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0[2U] 
            = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                         >> 9U)) << 3U) | ((4U & ((IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                           >> 2U)) 
                                                  << 2U)) 
                                           | ((IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                       >> 0x20U)) 
                                              >> 0x1eU)));
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0[3U] 
            = (0x4000000U | (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 9U)) >> 0x1dU) 
                             | ((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                          >> 9U) >> 0x20U)) 
                                << 3U)));
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                >> 3U)));
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready = 1U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT___T_2 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T) 
               & ((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                          >> 0x1fU)) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                   : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4)
                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT___GEN_0 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT___T_2));
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT___GEN_0) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_1 
                = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)) 
                         | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT___T_2))));
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_1) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT___GEN_0) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0U] 
                    = (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata);
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[1U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[2U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
                               >> 8U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[3U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
                                >> 8U) >> 0x20U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[4U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
                               >> 0x10U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[5U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
                                >> 0x10U) >> 0x20U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[6U] 
                    = (IData)((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
                               >> 0x18U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[7U] 
                    = (IData)(((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
                                >> 0x18U) >> 0x20U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[8U] 
                    = (IData)((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
                                               >> 0x20U))));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[9U] 
                    = (IData)(((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
                                                >> 0x20U))) 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0xaU] 
                    = (IData)((QData)((IData)((0xffffffU 
                                               & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
                                                          >> 0x28U))))));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0xbU] 
                    = (IData)(((QData)((IData)((0xffffffU 
                                                & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
                                                           >> 0x28U))))) 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0xcU] 
                    = (IData)((QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
                                                          >> 0x30U))))));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0xdU] 
                    = (IData)(((QData)((IData)((0xffffU 
                                                & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
                                                           >> 0x30U))))) 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0xeU] 
                    = (IData)((QData)((IData)((0xffU 
                                               & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
                                                          >> 0x38U))))));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[0xfU] 
                    = (IData)(((QData)((IData)((0xffU 
                                                & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
                                                           >> 0x38U))))) 
                               >> 0x20U));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data 
                    = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[
                                        (((IData)(0x3fU) 
                                          + (0x1c0U 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr) 
                                                << 6U))) 
                                         >> 5U)])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2[
                                                    (0xeU 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr) 
                                                        << 1U))])));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data 
                    = ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                        ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data))
                        : ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                            ? (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data)))
                            : ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                ? (QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data))))
                                : ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                    ? (((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data 
                                                                       >> 0xfU)))))) 
                                        << 0x10U) | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data)))))
                                    : ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data))))
                                        : ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                            ? (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data 
                                                                               >> 7U)))))) 
                                                << 8U) 
                                               | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data)))))
                                            : ((0xcU 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data
                                                : 0ULL)))))));
            }
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_1) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_1) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
        } else {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready 
                = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid)));
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid) {
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata 
                    = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U])));
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN;
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType 
                    = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType;
            } else {
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr = 0ULL;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata = 0ULL;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb = 0U;
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType = 0U;
            }
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data = 0ULL;
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid;
        }
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT___GEN_0)
                   ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w))
                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en)));
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready = 1U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___pp_T_9[0U] 
            = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___pp_T_9[1U] 
            = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___pp_T_9[2U] 
            = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___pp_T_9[3U] 
            = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___pp_T_9[4U] 
            = (3U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___T 
            = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___T_1 
            = (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state));
        __Vtemp51[0U] = 1U;
        __Vtemp51[1U] = 0U;
        __Vtemp51[2U] = 0U;
        __Vtemp51[3U] = 0U;
        __Vtemp51[4U] = 0U;
        VL_ADD_W(5, __Vtemp52, __Vtemp51, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___pp_T_9);
        __Vtemp53[0U] = __Vtemp52[0U];
        __Vtemp53[1U] = __Vtemp52[1U];
        __Vtemp53[2U] = __Vtemp52[2U];
        __Vtemp53[3U] = __Vtemp52[3U];
        __Vtemp53[4U] = (3U & __Vtemp52[4U]);
        VL_EXTEND_WW(260,130, __Vtemp54, __Vtemp53);
        __Vtemp56[0U] = 1U;
        __Vtemp56[1U] = 0U;
        __Vtemp56[2U] = 0U;
        __Vtemp56[3U] = 0U;
        __Vtemp56[4U] = 0U;
        VL_ADD_W(5, __Vtemp57, __Vtemp56, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___pp_T_9);
        __Vtemp61[0U] = 1U;
        __Vtemp61[1U] = 0U;
        __Vtemp61[2U] = 0U;
        __Vtemp61[3U] = 0U;
        __Vtemp61[4U] = 0U;
        __Vtemp62[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___pp_T_9[0U];
        __Vtemp62[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___pp_T_9[1U];
        __Vtemp62[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___pp_T_9[2U];
        __Vtemp62[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___pp_T_9[3U];
        __Vtemp62[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___pp_T_9[4U];
        VL_ADD_W(5, __Vtemp63, __Vtemp61, __Vtemp62);
        __Vtemp72[0U] = 0U;
        __Vtemp72[1U] = 0U;
        __Vtemp72[2U] = 0U;
        __Vtemp72[3U] = 0U;
        __Vtemp72[4U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                         << 2U);
        __Vtemp72[5U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                          >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                       << 2U));
        __Vtemp72[6U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                          >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                       << 2U));
        __Vtemp72[7U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                          >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                       << 2U));
        __Vtemp72[8U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                          << 4U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                     >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                                  << 2U)));
        __Vtemp72[9U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                          >> 0x1cU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                       << 4U));
        __Vtemp72[0xaU] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                            >> 0x1cU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                         << 4U));
        __Vtemp72[0xbU] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                            >> 0x1cU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                         << 4U));
        __Vtemp72[0xcU] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                            >> 0x1cU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                         << 4U));
        VL_EXTEND_WW(391,390, __Vtemp73, __Vtemp72);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0U] 
            = __Vtemp73[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[1U] 
            = __Vtemp73[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[2U] 
            = __Vtemp73[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[3U] 
            = __Vtemp73[3U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[4U] 
            = __Vtemp73[4U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[5U] 
            = __Vtemp73[5U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[6U] 
            = __Vtemp73[6U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[7U] 
            = __Vtemp73[7U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[8U] 
            = __Vtemp73[8U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[9U] 
            = __Vtemp73[9U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0xaU] 
            = __Vtemp73[0xaU];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0xbU] 
            = __Vtemp73[0xbU];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0xcU] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                << 7U) | __Vtemp73[0xcU]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0xdU] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                >> 0x19U) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                             << 7U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0xeU] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                >> 0x19U) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                             << 7U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0xfU] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                >> 0x19U) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                             << 7U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x10U] 
            = ((__Vtemp63[0U] << 9U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                         >> 0x19U) 
                                        | (0x80U & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                            << 7U))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x11U] 
            = ((0xffU & (__Vtemp63[0U] >> 0x17U)) | 
               ((0x100U & (__Vtemp63[0U] >> 0x17U)) 
                | (__Vtemp63[1U] << 9U)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x12U] 
            = ((0xffU & (__Vtemp63[1U] >> 0x17U)) | 
               ((0x100U & (__Vtemp63[1U] >> 0x17U)) 
                | (__Vtemp63[2U] << 9U)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x13U] 
            = ((0xffU & (__Vtemp63[2U] >> 0x17U)) | 
               ((0x100U & (__Vtemp63[2U] >> 0x17U)) 
                | (__Vtemp63[3U] << 9U)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x14U] 
            = ((0xffU & (__Vtemp63[3U] >> 0x17U)) | 
               ((__Vtemp57[0U] << 0xaU) | ((0x100U 
                                            & (__Vtemp63[3U] 
                                               >> 0x17U)) 
                                           | (0x200U 
                                              & (__Vtemp63[4U] 
                                                 << 9U)))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x15U] 
            = ((0xffU & (__Vtemp57[0U] >> 0x16U)) | 
               ((0x300U & (__Vtemp57[0U] >> 0x16U)) 
                | (__Vtemp57[1U] << 0xaU)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x16U] 
            = ((0xffU & (__Vtemp57[1U] >> 0x16U)) | 
               ((0x300U & (__Vtemp57[1U] >> 0x16U)) 
                | (__Vtemp57[2U] << 0xaU)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x17U] 
            = ((0xffU & (__Vtemp57[2U] >> 0x16U)) | 
               ((0x300U & (__Vtemp57[2U] >> 0x16U)) 
                | (__Vtemp57[3U] << 0xaU)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x18U] 
            = ((0xffU & (__Vtemp57[3U] >> 0x16U)) | 
               ((0x300U & (__Vtemp57[3U] >> 0x16U)) 
                | ((__Vtemp54[0U] << 0xcU) | (0xc00U 
                                              & (__Vtemp57[4U] 
                                                 << 0xaU)))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x19U] 
            = ((0xffU & (__Vtemp54[0U] >> 0x14U)) | 
               ((0x300U & (__Vtemp54[0U] >> 0x14U)) 
                | ((0xc00U & (__Vtemp54[0U] >> 0x14U)) 
                   | (__Vtemp54[1U] << 0xcU))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x1aU] 
            = ((0xffU & (__Vtemp54[1U] >> 0x14U)) | 
               ((0x300U & (__Vtemp54[1U] >> 0x14U)) 
                | ((0xc00U & (__Vtemp54[1U] >> 0x14U)) 
                   | (__Vtemp54[2U] << 0xcU))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x1bU] 
            = ((0xffU & (__Vtemp54[2U] >> 0x14U)) | 
               ((0x300U & (__Vtemp54[2U] >> 0x14U)) 
                | ((0xc00U & (__Vtemp54[2U] >> 0x14U)) 
                   | (__Vtemp54[3U] << 0xcU))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x1cU] 
            = ((0xffU & (__Vtemp54[3U] >> 0x14U)) | 
               ((0x300U & (__Vtemp54[3U] >> 0x14U)) 
                | ((0xc00U & (__Vtemp54[3U] >> 0x14U)) 
                   | (__Vtemp54[4U] << 0xcU))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x1dU] 
            = ((0xffU & (__Vtemp54[4U] >> 0x14U)) | 
               ((0x300U & (__Vtemp54[4U] >> 0x14U)) 
                | ((0xc00U & (__Vtemp54[4U] >> 0x14U)) 
                   | (__Vtemp54[5U] << 0xcU))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x1eU] 
            = ((0xffU & (__Vtemp54[5U] >> 0x14U)) | 
               ((0x300U & (__Vtemp54[5U] >> 0x14U)) 
                | ((0xc00U & (__Vtemp54[5U] >> 0x14U)) 
                   | (__Vtemp54[6U] << 0xcU))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x1fU] 
            = ((0xffU & (__Vtemp54[6U] >> 0x14U)) | 
               ((0x300U & (__Vtemp54[6U] >> 0x14U)) 
                | ((0xc00U & (__Vtemp54[6U] >> 0x14U)) 
                   | (__Vtemp54[7U] << 0xcU))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[0x20U] 
            = ((0xffU & (__Vtemp54[7U] >> 0x14U)) | 
               ((0x300U & (__Vtemp54[7U] >> 0x14U)) 
                | ((0xc00U & (__Vtemp54[7U] >> 0x14U)) 
                   | (__Vtemp54[8U] << 0xcU))));
        if ((0x40fU >= (0x7ffU & ((IData)(0x82U) * 
                                  (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))))) {
            __Vtemp80[0U] = (((0U == (0x1fU & ((IData)(0x82U) 
                                               * (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))))
                               ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[
                                       ((IData)(1U) 
                                        + (0x3fU & 
                                           (((IData)(0x82U) 
                                             * (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])) 
                                            >> 5U)))] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x82U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])))))) 
                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[
                                (0x3fU & (((IData)(0x82U) 
                                           * (7U & 
                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])) 
                                          >> 5U))] 
                                >> (0x1fU & ((IData)(0x82U) 
                                             * (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])))));
            __Vtemp80[1U] = (((0U == (0x1fU & ((IData)(0x82U) 
                                               * (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))))
                               ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[
                                       ((IData)(2U) 
                                        + (0x3fU & 
                                           (((IData)(0x82U) 
                                             * (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])) 
                                            >> 5U)))] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x82U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])))))) 
                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[
                                ((IData)(1U) + (0x3fU 
                                                & (((IData)(0x82U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])) 
                                                   >> 5U)))] 
                                >> (0x1fU & ((IData)(0x82U) 
                                             * (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])))));
            __Vtemp80[2U] = (((0U == (0x1fU & ((IData)(0x82U) 
                                               * (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))))
                               ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[
                                       ((IData)(3U) 
                                        + (0x3fU & 
                                           (((IData)(0x82U) 
                                             * (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])) 
                                            >> 5U)))] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x82U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])))))) 
                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[
                                ((IData)(2U) + (0x3fU 
                                                & (((IData)(0x82U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])) 
                                                   >> 5U)))] 
                                >> (0x1fU & ((IData)(0x82U) 
                                             * (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])))));
            __Vtemp80[3U] = (((0U == (0x1fU & ((IData)(0x82U) 
                                               * (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))))
                               ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[
                                       ((IData)(4U) 
                                        + (0x3fU & 
                                           (((IData)(0x82U) 
                                             * (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])) 
                                            >> 5U)))] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x82U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])))))) 
                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[
                                ((IData)(3U) + (0x3fU 
                                                & (((IData)(0x82U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])) 
                                                   >> 5U)))] 
                                >> (0x1fU & ((IData)(0x82U) 
                                             * (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])))));
            __Vtemp80[4U] = (((0U == (0x1fU & ((IData)(0x82U) 
                                               * (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))))
                               ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[
                                       ((IData)(5U) 
                                        + (0x3fU & 
                                           (((IData)(0x82U) 
                                             * (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])) 
                                            >> 5U)))] 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((IData)(0x82U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])))))) 
                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN[
                                ((IData)(4U) + (0x3fU 
                                                & (((IData)(0x82U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])) 
                                                   >> 5U)))] 
                                >> (0x1fU & ((IData)(0x82U) 
                                             * (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U])))));
        } else {
            __Vtemp80[0U] = 0U;
            __Vtemp80[1U] = 0U;
            __Vtemp80[2U] = 0U;
            __Vtemp80[3U] = 0U;
            __Vtemp80[4U] = 0U;
        }
        VL_ADD_W(5, __Vtemp81, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result, __Vtemp80);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[0U] 
            = __Vtemp81[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[1U] 
            = __Vtemp81[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[2U] 
            = __Vtemp81[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[3U] 
            = __Vtemp81[3U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[4U] 
            = (3U & __Vtemp81[4U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_1 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___T_1)) 
               & (2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)));
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___T) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready 
                = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__mul__io_valid)));
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__mul__io_valid) {
                if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2[0U] 
                        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2[1U] 
                        = (IData)((0x1ffffffffULL & 
                                   (- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
                                                                  >> 0x1fU))))))));
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2[2U] 
                        = (IData)(((0x1ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
                                                                     >> 0x1fU))))))) 
                                   >> 0x20U));
                } else {
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2[0U] 
                        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2[1U] 
                        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
                                   >> 0x20U));
                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2[2U] 
                        = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                 & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
                                            >> 0x3fU))));
                }
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                    = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2[0U] 
                       << 1U);
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                    = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2[1U] 
                                     << 1U));
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                    = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2[2U] 
                              << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2[1U] 
                                          >> 0x1fU) 
                                         | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2[2U] 
                                            << 1U)));
                if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data);
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                        = (- (IData)((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                    >> 0x1fU)))));
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                        = (- (IData)((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                    >> 0x1fU)))));
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                        = (- (IData)((1U & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                    >> 0x1fU)))));
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                        = (3U & (- (IData)((1U & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                          >> 0x1fU))))));
                } else {
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data);
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                   >> 0x20U));
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                        = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                            ? (- (IData)((1U & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                        >> 0x3fU)))))
                            : 0U);
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                        = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                            ? (- (IData)((1U & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                        >> 0x3fU)))))
                            : 0U);
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                        = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                            ? (3U & (- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                           >> 0x3fU))))))
                            : 0U);
                }
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType 
                    = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType;
            } else {
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] = 0U;
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] = 0U;
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] = 0U;
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] = 0U;
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] = 0U;
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] = 0U;
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] = 0U;
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType = 0U;
            }
        } else {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_1) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___T_1) {
                __Vtemp104[0U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                                   << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                                                >> 2U));
                __Vtemp104[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                                   << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                                                >> 2U));
                __Vtemp104[2U] = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                                        >> 2U));
                VL_EXTEND_WW(67,65, __Vtemp105, __Vtemp104);
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                    = __Vtemp105[0U];
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                    = __Vtemp105[1U];
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                    = __Vtemp105[2U];
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                    = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                       << 2U);
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                    = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                     << 2U));
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                    = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                     << 2U));
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                    = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                     << 2U));
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                    = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                       >> 0x1eU);
            }
        }
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_2 
            = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state) 
                << 6U) | ((((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt))
                             ? 2U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
                           << 2U) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__mul__io_valid)));
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
            = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_2) 
                     >> (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state) 
                               << 1U))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[4U] 
            = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[0U] 
               << 2U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[5U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[0U] 
                >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[1U] 
                             << 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[6U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[1U] 
                >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[2U] 
                             << 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[7U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[2U] 
                >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[3U] 
                             << 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[8U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[0U] 
                << 4U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[3U] 
                           >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[4U] 
                                        << 2U)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[9U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[0U] 
                >> 0x1cU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[1U] 
                             << 4U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[0xaU] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[1U] 
                >> 0x1cU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[2U] 
                             << 4U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[0xbU] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[2U] 
                >> 0x1cU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[3U] 
                             << 4U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[0xcU] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                << 6U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[3U] 
                           >> 0x1cU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0[4U] 
                                        << 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[0xdU] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                >> 0x1aU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                             << 6U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[0xeU] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                >> 0x1aU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                             << 6U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[0xfU] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                >> 0x1aU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                             << 6U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[0x10U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                >> 0x1aU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] 
                             << 6U));
        if ((0x207U >= (0x3ffU & ((IData)(0x82U) * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                = (((0U == (0x1fU & ((IData)(0x82U) 
                                     * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))))
                     ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[
                             ((IData)(1U) + (0x1fU 
                                             & (((IData)(0x82U) 
                                                 * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x82U) 
                                                      * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)))))) 
                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[
                      (0x1fU & (((IData)(0x82U) * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
                                >> 5U))] >> (0x1fU 
                                             & ((IData)(0x82U) 
                                                * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)))));
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                = (((0U == (0x1fU & ((IData)(0x82U) 
                                     * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))))
                     ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[
                             ((IData)(2U) + (0x1fU 
                                             & (((IData)(0x82U) 
                                                 * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x82U) 
                                                      * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)))))) 
                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[
                      ((IData)(1U) + (0x1fU & (((IData)(0x82U) 
                                                * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0x82U) * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)))));
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                = (((0U == (0x1fU & ((IData)(0x82U) 
                                     * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))))
                     ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[
                             ((IData)(3U) + (0x1fU 
                                             & (((IData)(0x82U) 
                                                 * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x82U) 
                                                      * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)))))) 
                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[
                      ((IData)(2U) + (0x1fU & (((IData)(0x82U) 
                                                * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0x82U) * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)))));
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                = (((0U == (0x1fU & ((IData)(0x82U) 
                                     * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))))
                     ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[
                             ((IData)(4U) + (0x1fU 
                                             & (((IData)(0x82U) 
                                                 * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
                                                >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x82U) 
                                                      * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)))))) 
                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[
                      ((IData)(3U) + (0x1fU & (((IData)(0x82U) 
                                                * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
                                               >> 5U)))] 
                      >> (0x1fU & ((IData)(0x82U) * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)))));
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] 
                = (3U & (((0U == (0x1fU & ((IData)(0x82U) 
                                           * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))))
                           ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[
                                   ((IData)(5U) + (0x1fU 
                                                   & (((IData)(0x82U) 
                                                       * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x82U) 
                                                   * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)))))) 
                         | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3[
                            ((IData)(4U) + (0x1fU & 
                                            (((IData)(0x82U) 
                                              * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x82U) 
                                         * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))))));
        } else {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] = 0U;
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] = 0U;
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] = 0U;
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] = 0U;
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] = 0U;
        }
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___T)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_1) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_4 
            = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt) 
                << 0x15U) | (0x3f80U & (((IData)(1U) 
                                         + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)) 
                                        << 7U)));
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt 
            = ((0x1bU >= (0x1fU & ((IData)(7U) * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))))
                ? (0x7fU & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_4 
                            >> (0x1fU & ((IData)(7U) 
                                         * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)))))
                : 0U);
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready = 1U;
    } else {
        if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend[1U] 
                = (IData)(((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                            ? 0ULL : (0x1ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                                       >> 0x1fU)))))))));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend[2U] 
                = (IData)((((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                             ? 0ULL : (0x1ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                                        >> 0x1fU)))))))) 
                           >> 0x20U));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__rem[0U] 
                = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                    ? 0U : (- (IData)((1U & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                     >> 0x1fU))))));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__rem[1U] 
                = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                    ? 0U : (- (IData)((1U & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                     >> 0x1fU))))));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__rem[2U] 
                = (1U & ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                          ? 0U : (- (IData)((1U & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                           >> 0x1fU)))))));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend[1U] 
                = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                           >> 0x20U));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend[2U] 
                = (1U & ((~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U)) & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                >> 0x3fU))));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__rem[0U] 
                = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                    ? 0U : (- (IData)((1U & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                     >> 0x3fU))))));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__rem[1U] 
                = ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                    ? 0U : (- (IData)((1U & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                     >> 0x3fU))))));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__rem[2U] 
                = (1U & ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                          ? 0U : (- (IData)((1U & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                           >> 0x3fU)))))));
        }
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_8[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_8[1U] 
            = (IData)(((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                        ? 0ULL : (0x1ffffffffULL & 
                                  (- (QData)((IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
                                                                 >> 0x1fU)))))))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_8[2U] 
            = (IData)((((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                         ? 0ULL : (0x1ffffffffULL & 
                                   (- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
                                                                  >> 0x1fU)))))))) 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_14[0U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_14[1U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_14[2U] 
            = (1U & ((~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                         >> 2U)) & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
                                            >> 0x3fU))));
        if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_8[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_8[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_8[2U];
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_14[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_14[1U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_14[2U];
        }
        __Vtemp139[0U] = 1U;
        __Vtemp139[1U] = 0U;
        __Vtemp139[2U] = 0U;
        __Vtemp140[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp140[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp140[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp141, __Vtemp139, __Vtemp140);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor[0U] 
            = __Vtemp141[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor[1U] 
            = __Vtemp141[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor[2U] 
            = (1U & __Vtemp141[2U]);
        __Vtemp145[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                          << 1U);
        __Vtemp145[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                           >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                        << 1U));
        __Vtemp145[2U] = (((IData)((((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))) 
                           << 3U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                      >> 0x1fU) | (
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                                   << 1U)));
        __Vtemp145[3U] = (((IData)((((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))) 
                           >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))) 
                                                 >> 0x20U)) 
                                        << 3U));
        __Vtemp145[4U] = ((IData)(((((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))) 
                                   >> 0x20U)) >> 0x1dU);
        __Vtemp151[0U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                 ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                           ? 0U : 1U);
        __Vtemp151[1U] = 0U;
        if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))) {
            __Vtemp151[2U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                              << 2U);
            __Vtemp151[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                               >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                            << 2U));
            __Vtemp151[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                               >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                            << 2U));
        } else {
            __Vtemp151[2U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor[0U] 
                              << 2U);
            __Vtemp151[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor[0U] 
                               >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor[1U] 
                                            << 2U));
            __Vtemp151[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor[1U] 
                               >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor[2U] 
                                            << 2U));
        }
        VL_ADD_W(5, __Vtemp152, __Vtemp145, __Vtemp151);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[0U] 
            = __Vtemp152[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[1U] 
            = __Vtemp152[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[2U] 
            = __Vtemp152[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[3U] 
            = __Vtemp152[3U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[4U] 
            = (7U & __Vtemp152[4U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T 
            = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___reg_q_T[0U] 
            = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend[0U] 
               << 1U);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___reg_q_T[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend[0U] 
                >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend[1U] 
                             << 1U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___reg_q_T[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend[1U] 
                >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend[2U] 
                             << 1U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_2 
            = (2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_6 
            = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_0 
            = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
               & ((((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                     ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                        >> 1U)) & (0U != ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                          | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))) 
                   | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor[0U]) 
                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                 ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor[1U])) 
                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor[2U])))) 
                  | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                            | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_1 
            = (((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_2))) 
               & (3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)));
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_8[0U];
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_8[1U];
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_8[2U];
                } else {
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_14[0U];
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_14[1U];
                    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_14[2U];
                }
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___reg_q_T[0U];
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___reg_q_T[1U];
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___reg_q_T[2U];
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType 
                    = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType;
            } else {
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] = 0U;
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] = 0U;
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] = 0U;
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] = 0U;
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] = 0U;
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] = 0U;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType = 0U;
            }
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready 
                = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid)));
        } else {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_1) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
        }
        VL_ADD_W(3, __Vtemp158, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
        VL_ADD_W(3, __Vtemp159, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor);
        VL_ADD_W(3, __Vtemp168, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor);
        __Vtemp169[0U] = 1U;
        __Vtemp169[1U] = 0U;
        __Vtemp169[2U] = 0U;
        __Vtemp170[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor[0U]);
        __Vtemp170[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor[1U]);
        __Vtemp170[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor[2U]);
        VL_ADD_W(3, __Vtemp171, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__rem, __Vtemp170);
        VL_ADD_W(3, __Vtemp172, __Vtemp169, __Vtemp171);
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[0U] 
                = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor[2U] 
                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend[2U]))
                    ? __Vtemp168[0U] : __Vtemp172[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[1U] 
                = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor[2U] 
                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend[2U]))
                    ? __Vtemp168[1U] : __Vtemp172[1U]);
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[1U] = 0U;
        }
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[2U] 
            = (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[3U] 
                 << 0x1fU) | (0x7ffffffeU & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[2U] 
                                             >> 1U))) 
               | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid)
                   ? (1U & ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor[2U] 
                                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend[2U]))
                             ? __Vtemp168[2U] : __Vtemp172[2U]))
                   : 0U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[3U] 
            = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[3U] 
                      >> 1U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[4U] 
                                  << 0x1fU) | (0x7ffffffeU 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[3U] 
                                                  >> 1U))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[4U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                << 2U) | ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[4U] 
                                 >> 1U)) | (2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[4U] 
                                                  >> 1U))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[5U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                             << 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[6U] 
            = ((((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_2) 
                        | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_0))))
                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]
                  : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_6)
                      ? __Vtemp158[0U] : __Vtemp159[0U])) 
                << 3U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                           >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                        << 2U)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[7U] 
            = ((((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_2) 
                        | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_0))))
                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]
                  : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_6)
                      ? __Vtemp158[0U] : __Vtemp159[0U])) 
                >> 0x1dU) | (((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_2) 
                                     | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_0))))
                               ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]
                               : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_6)
                                   ? __Vtemp158[1U]
                                   : __Vtemp159[1U])) 
                             << 3U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[8U] 
            = ((((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_2) 
                        | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_0))))
                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]
                  : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_6)
                      ? __Vtemp158[1U] : __Vtemp159[1U])) 
                >> 0x1dU) | (8U & (((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_2) 
                                           | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_0))))
                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]
                                     : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_6)
                                         ? __Vtemp158[2U]
                                         : __Vtemp159[2U])) 
                                   << 3U)));
        if ((0x103U >= (0x1ffU & ((IData)(0x41U) * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                = (((0U == (0x1fU & ((IData)(0x41U) 
                                     * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))))
                     ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[
                             ((IData)(1U) + (0xfU & 
                                             (((IData)(0x41U) 
                                               * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                                              >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x41U) 
                                                      * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)))))) 
                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[
                      (0xfU & (((IData)(0x41U) * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                               >> 5U))] >> (0x1fU & 
                                            ((IData)(0x41U) 
                                             * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)))));
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                = (((0U == (0x1fU & ((IData)(0x41U) 
                                     * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))))
                     ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[
                             ((IData)(2U) + (0xfU & 
                                             (((IData)(0x41U) 
                                               * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                                              >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x41U) 
                                                      * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)))))) 
                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[
                      ((IData)(1U) + (0xfU & (((IData)(0x41U) 
                                               * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                                              >> 5U)))] 
                      >> (0x1fU & ((IData)(0x41U) * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)))));
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                = (1U & (((0U == (0x1fU & ((IData)(0x41U) 
                                           * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))))
                           ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[
                                   ((IData)(3U) + (0xfU 
                                                   & (((IData)(0x41U) 
                                                       * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x41U) 
                                                   * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)))))) 
                         | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2[
                            ((IData)(2U) + (0xfU & 
                                            (((IData)(0x41U) 
                                              * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x41U) 
                                         * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))))));
        } else {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] = 0U;
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] = 0U;
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] = 0U;
        }
        __Vtemp188[0U] = 1U;
        __Vtemp188[1U] = 0U;
        __Vtemp188[2U] = 0U;
        VL_SUB_W(3, __Vtemp189, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q, __Vtemp188);
        __Vtemp190[0U] = 1U;
        __Vtemp190[1U] = 0U;
        __Vtemp190[2U] = 0U;
        VL_ADD_W(3, __Vtemp191, __Vtemp190, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q);
        __Vtemp196[0U] = 1U;
        __Vtemp196[1U] = 0U;
        __Vtemp196[2U] = 0U;
        __Vtemp200[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                          << 1U);
        __Vtemp200[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                           >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                        << 1U));
        __Vtemp200[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                           >> 0x1fU) | (2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                              << 1U)));
        VL_ADD_W(3, __Vtemp201, __Vtemp196, __Vtemp200);
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___reg_q_T[0U];
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___reg_q_T[1U];
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[1U] = 0U;
        }
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[0U] 
                << 2U) | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid)
                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___reg_q_T[2U]
                           : 0U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[0U] 
                >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[1U] 
                             << 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[4U] 
            = ((__Vtemp201[0U] << 4U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[1U] 
                                          >> 0x1eU) 
                                         | (0xcU & 
                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN[2U] 
                                             << 2U))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[5U] 
            = ((__Vtemp201[0U] >> 0x1cU) | (__Vtemp201[1U] 
                                            << 4U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[6U] 
            = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_0)
                  ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_6)
                      ? __Vtemp189[0U] : __Vtemp191[0U])
                  : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]) 
                << 6U) | ((__Vtemp201[1U] >> 0x1cU) 
                          | (0x30U & (__Vtemp201[2U] 
                                      << 4U))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[7U] 
            = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_0)
                  ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_6)
                      ? __Vtemp189[0U] : __Vtemp191[0U])
                  : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]) 
                >> 0x1aU) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_0)
                               ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_6)
                                   ? __Vtemp189[1U]
                                   : __Vtemp191[1U])
                               : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]) 
                             << 6U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[8U] 
            = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_0)
                  ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_6)
                      ? __Vtemp189[1U] : __Vtemp191[1U])
                  : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]) 
                >> 0x1aU) | (0xc0U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_0)
                                        ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_6)
                                            ? __Vtemp189[2U]
                                            : __Vtemp191[2U])
                                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]) 
                                      << 6U)));
        if ((0x107U >= (0x1ffU & ((IData)(0x42U) * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                = (((0U == (0x1fU & ((IData)(0x42U) 
                                     * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))))
                     ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[
                             ((IData)(1U) + (0xfU & 
                                             (((IData)(0x42U) 
                                               * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                                              >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x42U) 
                                                      * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)))))) 
                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[
                      (0xfU & (((IData)(0x42U) * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                               >> 5U))] >> (0x1fU & 
                                            ((IData)(0x42U) 
                                             * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)))));
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                = (((0U == (0x1fU & ((IData)(0x42U) 
                                     * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))))
                     ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[
                             ((IData)(2U) + (0xfU & 
                                             (((IData)(0x42U) 
                                               * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                                              >> 5U)))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x42U) 
                                                      * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)))))) 
                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[
                      ((IData)(1U) + (0xfU & (((IData)(0x42U) 
                                               * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                                              >> 5U)))] 
                      >> (0x1fU & ((IData)(0x42U) * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)))));
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                = (3U & (((0U == (0x1fU & ((IData)(0x42U) 
                                           * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))))
                           ? 0U : (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[
                                   ((IData)(3U) + (0xfU 
                                                   & (((IData)(0x42U) 
                                                       * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                                                      >> 5U)))] 
                                   << ((IData)(0x20U) 
                                       - (0x1fU & ((IData)(0x42U) 
                                                   * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)))))) 
                         | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3[
                            ((IData)(2U) + (0xfU & 
                                            (((IData)(0x42U) 
                                              * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                                             >> 5U)))] 
                            >> (0x1fU & ((IData)(0x42U) 
                                         * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))))));
        } else {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] = 0U;
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] = 0U;
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] = 0U;
        }
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_4 
            = (0x30U | ((((0x40U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt))
                           ? 2U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                         << 2U) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid)));
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
            = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_4) 
                     >> (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state) 
                               << 1U))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_5 
            = ((((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_2) 
                        | (~ (IData)((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))))))
                  ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)
                  : 0U) << 0x15U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
                                      << 0xeU) | (0x3f80U 
                                                  & (((IData)(1U) 
                                                      + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)) 
                                                     << 7U))));
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt 
            = ((0x1bU >= (0x1fU & ((IData)(7U) * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))))
                ? (0x7fU & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_5 
                            >> (0x1fU & ((IData)(7U) 
                                         * (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)))))
                : 0U);
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_1) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)));
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T)
                                             ? ((0xb00U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                                 : 
                                                (1ULL 
                                                 + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle))
                                             : (1ULL 
                                                + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle)));
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T) {
        if ((0xb02U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))) {
            __Vdly__riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
        } else if (vlSelf->riscv_soc__DOT__core__DOT___execute_io_commit) {
            __Vdly__riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret 
                = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret);
        }
    } else if (vlSelf->riscv_soc__DOT__core__DOT___execute_io_commit) {
        __Vdly__riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret 
            = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready = 1U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__valid 
            = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready)) 
                & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T))) 
               & (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN 
            = (QData)((IData)((0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                >> 4U)))));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___LRU_1_T 
            = VL_SHIFTR_QQQ(64,64,64, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_3 
            = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_4 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_0_hit) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_1_hit));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_7 
            = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid))) 
               | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_1_hit) 
                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid))));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN_0 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_4) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_7));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_9 
            = (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_10 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_ICache_bus_r_ready_T_1));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN_1 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_9) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_ICache_bus_r_bits_rlast));
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_3) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__valid) 
                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_4)
                       ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_0_hit))
                       : ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) 
                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid)) 
                           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid)))
                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___LRU_1_T)
                           : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid)))));
            if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__valid) 
                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_4)) 
                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_7))) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_0_hit)
                        ? ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                          >> 3U))) ? 
                           (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[2U])))
                            : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[0U]))))
                        : ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                          >> 3U))) ? 
                           (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[2U])))
                            : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[0U])))));
            }
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__valid) {
                __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN_0;
                __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_4)
                        ? (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_7)))
                        : 1U);
            } else {
                __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid 
                    = ((3U <= (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
                __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state = 0U;
            }
            __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready 
                = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__valid)) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN_0)));
            __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__valid) 
                   & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_4)) 
                      | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_7))));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 
                = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_9) 
                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_10)) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_ICache_bus_r_bits_rlast));
            __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN_1) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata 
                    = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                      >> 3U))) ? vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U]))));
            }
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN_1) {
                __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state = 0U;
            }
            __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
            __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid 
                = ((((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_9)) 
                     | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_10))) 
                    | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_ICache_bus_r_bits_rlast))) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
        }
        if ((1U & (~ (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_3)) 
                       | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__valid))) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN_0))))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr 
                = (0xfffffffffffffff0ULL & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr);
        }
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_3) 
                      | (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_9) 
                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_10))))))) {
            VL_EXTEND_WQ(128,64, __Vtemp219, vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata);
            if (vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_ICache_bus_r_bits_rlast) {
                __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U] 
                    = (IData)((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U]))));
                __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U] 
                    = (IData)(((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U]))) 
                               >> 0x20U));
                __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U] 
                    = (IData)(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata);
                __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U] 
                    = (IData)((vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata 
                               >> 0x20U));
            } else {
                __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U] 
                    = __Vtemp219[0U];
                __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U] 
                    = __Vtemp219[1U];
                __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U] 
                    = __Vtemp219[2U];
                __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U] 
                    = __Vtemp219[3U];
            }
        }
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_3)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN_1) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write)));
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_3) 
             & (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)))) {
            __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr;
        }
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_3) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__valid))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__chose_bit 
                = VL_SHIFTL_QQQ(64,64,64, 1ULL, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN);
            __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_0_hit)
                    ? (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
                       | vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__chose_bit)
                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_1_hit)
                        ? (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
                           & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__chose_bit))
                        : ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid)) 
                            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) 
                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid)))
                            ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___LRU_1_T))
                                ? (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
                                   & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__chose_bit))
                                : (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
                                   | vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__chose_bit))
                            : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) 
                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid))
                                ? (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
                                   & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__chose_bit))
                                : (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
                                   | vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__chose_bit)))));
        }
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 = 0x80000000ULL;
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid = 1U;
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT___T_3 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_addr_ready) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT___T_3) {
            __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc
                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)
                        ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc
                        : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid)
                            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc
                            : (4ULL + vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0))));
            __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid 
                = ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        } else {
            __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid 
                = ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
        }
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT___T_3)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)));
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT___T_3) 
                      | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)))))) {
            __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc;
        }
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T) {
            __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 = 0ULL;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 = 0ULL;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 = 0ULL;
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 = 0ULL;
            __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head = 0U;
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT__unnamedblk2__DOT__pre_enq 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT___T_3) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT__unnamedblk2__DOT__pre_enq) {
                __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head)));
            }
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT__unnamedblk2__DOT__pre_enq) 
                 & (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head)))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc;
            }
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT__unnamedblk2__DOT__pre_enq) 
                 & (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head)))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc;
            }
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT__unnamedblk2__DOT__pre_enq) 
                 & (2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head)))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc;
            }
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT__unnamedblk2__DOT__pre_enq) 
                 & (3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head)))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc;
            }
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT___T_3) {
                __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head)));
            }
        }
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T)) 
               & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT___T_3) 
                   & (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head)))
                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid)
                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0)));
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T)) 
               & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT___T_3) 
                   & (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head)))
                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid)
                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1)));
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T)) 
               & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT___T_3) 
                   & (2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head)))
                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid)
                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2)));
        __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T)) 
               & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT___T_3) 
                   & (3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head)))
                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid)
                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3)));
    }
    if (__Vdlyvset__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0[0U];
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0[1U];
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0[2U];
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0[0U];
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0[1U];
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0[2U];
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0[0U];
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0[1U];
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0[2U];
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram2__DOT__sram_ext__DOT__Memory__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0[0U];
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0[1U];
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0[2U];
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram0__DOT__sram_ext__DOT__Memory__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_ext__DOT__Memory__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_ext__DOT__Memory__v0] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0[0U];
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0[1U];
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0[2U];
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram3__DOT__sram_ext__DOT__Memory__v0[3U];
    }
    if (__Vdlyvset__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0[0U];
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0[1U];
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0[2U];
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram1__DOT__sram_ext__DOT__Memory__v0[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head;
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory__v0] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory__v0;
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr 
        = __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_raddr;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready 
        = __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_ar_ready;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen 
        = __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_rlen;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid 
        = __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_valid;
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked 
        = __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked;
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId 
        = __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId;
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready 
        = __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_aw_ready;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr 
        = __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_w_addr;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w 
        = __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_is_w;
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_ext__DOT__Memory__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_ext__DOT__Memory__v0] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_ext__DOT__Memory__v0;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head;
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory[0U] = 0U;
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v1) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory[1U] = 0U;
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v2) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory[2U] = 0U;
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v3) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory[3U] = 0U;
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v4) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v4] = 0U;
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v5) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory__v5] = 1U;
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory__v0] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0[0U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0[1U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0[2U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory__v0[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType;
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready 
        = __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready;
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret 
        = __Vdly__riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U] 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U] 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U] 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U] 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid;
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_4 = (0U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen));
    vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_7 
        = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt));
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish = 1U;
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish = 1U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_0 
            = (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit 
            = VL_SHIFTL_QQQ(64,64,64, 1ULL, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_0);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_0 
            = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
               == (0x3fffffffffffffULL & (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U])))));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_2 
            = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
               == (0x3fffffffffffffULL & (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U])))));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_valid_0_T 
            = VL_SHIFTR_QQQ(64,64,64, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_0);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_valid_2_T 
            = VL_SHIFTR_QQQ(64,64,64, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_0);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___LRU_2_T 
            = VL_SHIFTR_QQQ(64,64,64, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_0);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_1 
            = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_2 
            = (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_3 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_0) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_2));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_6 
            = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_0) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_valid_0_T)) 
               | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_2) 
                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_valid_2_T)));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_1 
            = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_3) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_6)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_7 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_valid_0_T) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_valid_2_T)));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_dirty_2_T 
            = VL_SHIFTR_QQQ(64,64,64, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_0);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_dirty_0_T 
            = VL_SHIFTR_QQQ(64,64,64, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_0);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_11 
            = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_dirty_0_T) 
                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___LRU_2_T))) 
                     | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_dirty_2_T) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___LRU_2_T))));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_2 
            = (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_3)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_7)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_11));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_3 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_7) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_11));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_12 
            = (2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_13 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_DCache_bus_r_ready_T_1));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_14 
            = (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_15 
            = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_19 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready) 
               & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                  & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_21 
            = (((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_DCache_bus_r_bits_rlast) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_19) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish)));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_4 
            = (3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_5 
            = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_21)
                  ? 3U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
                << 4U) | ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_3)
                             ? (2U | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_6))
                             : 2U) << 2U) | (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_DCache_valid)));
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
            = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_5) 
                     >> (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state) 
                               << 1U))));
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_1) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_DCache_valid))) {
            __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata 
                = vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata;
            __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb 
                = vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb;
            __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w 
                = vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w;
            __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                = (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                   >> 0xaU);
            __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index 
                = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                                    >> 4U)));
            __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
                = (0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr));
        }
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_1)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_2)
                   ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_3) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_6)) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready))
                   : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_12)
                       ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_21) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready))
                       : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_4) 
                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)))));
        if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_1) {
            __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_DCache_valid) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_1[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_1[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_1[2U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata);
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_1[3U] 
                = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata 
                           >> 0x20U));
            VL_EXTEND_WQ(128,64, __Vtemp222, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata);
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_2[0U] 
                = __Vtemp222[0U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_2[1U] 
                = __Vtemp222[1U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_2[2U] 
                = __Vtemp222[2U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_2[3U] 
                = __Vtemp222[3U];
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_6 
                    = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_3) 
                              | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_7))) 
                             | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_11))));
                if ((1U & (~ (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_3)) 
                               | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_6))) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata 
                        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_0)
                            ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U]))))
                            : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U])))));
                }
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb 
                    = ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                        ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb) 
                           << 8U) : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb));
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_1) {
                    if ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))) {
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_1[0U];
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_1[1U];
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_1[2U];
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_1[3U];
                    } else {
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_2[0U];
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_2[1U];
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_2[2U];
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_2[3U];
                    }
                }
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_3) 
                              | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_3)))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata 
                        = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___LRU_2_T))
                            ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U])))
                            : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U]))));
                    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt = 1U;
                }
                __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_6) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
                __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish 
                    = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_3) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_6)) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
                __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_6) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___GEN_7 
                    = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_12) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_13)) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_DCache_bus_r_bits_rlast));
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___T_16 
                    = (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt));
                if ((1U & (~ ((((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_12)) 
                                | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_13))) 
                               | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_DCache_bus_r_bits_rlast))) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w))))) {
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata 
                        = ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                            ? vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata
                            : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U]))));
                }
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___GEN_7) {
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb = 0xffffU;
                }
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_12) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_13))) {
                    VL_EXTEND_WQ(128,64, __Vtemp234, vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata);
                    if (vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_DCache_bus_r_bits_rlast) {
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                                ? ((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_1[0U]
                                      : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_2[0U]) 
                                    & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
                                   | ((IData)((((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U])))) 
                                      & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])))
                                : (IData)((((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U])))));
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                                ? ((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_1[1U]
                                      : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_2[1U]) 
                                    & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
                                   | ((IData)(((((QData)((IData)(
                                                                 vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U]))) 
                                               >> 0x20U)) 
                                      & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])))
                                : (IData)(((((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U]))) 
                                           >> 0x20U)));
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                                ? ((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_1[2U]
                                      : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_2[2U]) 
                                    & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
                                   | ((IData)(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata) 
                                      & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])))
                                : (IData)(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata));
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                                ? ((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                      ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_1[3U]
                                      : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_2[3U]) 
                                    & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
                                   | ((IData)((vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata 
                                               >> 0x20U)) 
                                      & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])))
                                : (IData)((vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata 
                                           >> 0x20U)));
                    } else {
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                            = __Vtemp234[0U];
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                            = __Vtemp234[1U];
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                            = __Vtemp234[2U];
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                            = __Vtemp234[3U];
                    }
                }
                if ((1U & (~ (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_12)) 
                               | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_14))) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_15))))) {
                    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___T_16) {
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt 
                            = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt) 
                                     - (IData)(1U)));
                        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata 
                            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag)
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U]))));
                    } else {
                        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt 
                            = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt) 
                                     - (IData)(1U)));
                        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata 
                            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag)
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U]))));
                    }
                }
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_12) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_14))) {
                    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast 
                        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_15)) 
                           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___T_16) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast)));
                }
                __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish 
                    = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___GEN_7) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
                __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish 
                    = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_12) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_19)) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            }
            __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation 
                = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_2)) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
        }
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_1)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_2)
                   ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_1) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write))
                   : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_12)
                       ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_21) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write))
                       : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_4) 
                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write)))));
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_1) 
                      | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_2)))))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_8 
                = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                    << 0xaU) | (QData)((IData)(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index) 
                                                << 4U))));
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_3) {
                __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag 
                    = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_0)));
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_6)))) {
                    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
                        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_8;
                }
            } else {
                __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag 
                    = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_7)
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___LRU_2_T)
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_valid_0_T)));
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_8;
            }
        }
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid 
            = (((- (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write))) 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit) 
               | vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid);
        if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
            __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
                       | vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit)
                    : (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
                       & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit)));
        }
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid 
            = (((- (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write))) 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit) 
               | vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid);
        if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
            __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
                       | vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit)
                    : (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
                       & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit)));
        }
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid 
            = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_1)) 
                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_2)
                         ? (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_3)) 
                             | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_6))) 
                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid))
                         : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_12)
                             ? (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_13)) 
                                 | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_DCache_bus_r_bits_rlast))) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid))
                             : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_4) 
                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid))))));
        if ((1U & (~ ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_1) 
                        | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_2))) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_3)) 
                      | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_3)))))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr 
                = ((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___LRU_2_T))
                      ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U])))
                      : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U])))) 
                    << 0xaU) | (QData)((IData)(((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index) 
                                                << 4U))));
        }
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_1)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_2)
                   ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_2) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid))
                   : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_12)
                       ? (((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_14)) 
                           | (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_15))) 
                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid))
                       : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_4) 
                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)))));
        __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_1)) 
               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_2)
                   ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_2) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready))
                   : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_12)
                       ? ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_19)) 
                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready))
                       : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_4) 
                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready)))));
        if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation) {
            __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_0)
                    ? (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
                       | vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit)
                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_2)
                        ? (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
                           & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit))
                        : ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_valid_0_T) 
                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_valid_2_T)))
                            ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___LRU_2_T))
                                ? (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
                                   & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit))
                                : (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
                                   | vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit))
                            : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_valid_0_T))
                                ? (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
                                   & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit))
                                : (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
                                   | vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit)))));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT___T 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT___T) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT___T) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T;
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                    = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken 
                    = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U] 
                       & 1U);
            } else {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc = 0ULL;
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken = 0U;
            }
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_target_next_pc_T;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr;
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = 0ULL;
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT___GEN 
            = (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index));
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))) {
            __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = 0ULL;
            __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid = 0ULL;
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__chose_bit 
                = (1ULL << (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                             >> 4U))));
            __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
                = (((- (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write))) 
                    & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__chose_bit) 
                   | vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid);
            __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid 
                = (((- (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write))) 
                    & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__chose_bit) 
                   | vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid);
        }
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT___reg_temp_sram0_valid_T 
            = VL_SHIFTR_QQQ(64,64,64, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid 
            = (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT___reg_temp_sram0_valid_T));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT___reg_temp_sram1_valid_T 
            = VL_SHIFTR_QQQ(64,64,64, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid 
            = (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT___reg_temp_sram1_valid_T));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__time_irq 
            = (((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                 <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime) 
                & (IData)((vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus 
                           >> 3U))) & (IData)((vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mie 
                                               >> 7U)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__soft_irq 
            = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip) 
                & (IData)((vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus 
                           >> 3U))) & (IData)((vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mie 
                                               >> 3U)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT___reg_valid_next_pc_T 
            = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__time_irq) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__soft_irq)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_is_except));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__time_irq;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__soft_irq;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT___reg_valid_next_pc_T)
                ? (0xfffffffffffffffcULL & (((0x305U 
                                              == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                             : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec))
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T)
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_target_next_pc_T
                    : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_next_pc)
                        ? vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mepc
                        : 0ULL)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc 
            = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT___reg_valid_next_pc_T) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_next_pc));
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready 
        = __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_w_ready;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr;
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
        = __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp;
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime 
        = __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime;
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip 
        = __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip;
    __Vtemp236[1U] = (IData)((((QData)((IData)((((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                >> 0xfU)))) 
                                                 << 0x18U) 
                                                | ((0xff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                      >> 0xeU)))) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                         >> 0xdU)))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                          >> 0xcU)))))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                            >> 0xbU)))) 
                                                             << 0x18U) 
                                                            | ((0xff0000U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 0xaU)))) 
                                                                   << 0x10U)) 
                                                               | ((0xff00U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 9U)))) 
                                                                      << 8U)) 
                                                                  | (0xffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 8U))))))))))));
    __Vtemp236[2U] = (IData)(((((QData)((IData)((((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                 >> 0xfU)))) 
                                                  << 0x18U) 
                                                 | ((0xff0000U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                       >> 0xeU)))) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                          >> 0xdU)))) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                           >> 0xcU)))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                             >> 0xbU)))) 
                                                              << 0x18U) 
                                                             | ((0xff0000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 0xaU)))) 
                                                                    << 0x10U)) 
                                                                | ((0xff00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 9U)))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 8U))))))))))) 
                              >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U] 
        = (((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                              >> 3U)))) << 0x18U) | 
           ((0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                            >> 2U)))) 
                          << 0x10U)) | ((0xff00U & 
                                         ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                         >> 1U)))) 
                                          << 8U)) | 
                                        (0xffU & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))))))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U] 
        = (((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                              >> 7U)))) << 0x18U) | 
           ((0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                            >> 6U)))) 
                          << 0x10U)) | ((0xff00U & 
                                         ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                         >> 5U)))) 
                                          << 8U)) | 
                                        (0xffU & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                >> 4U))))))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U] 
        = __Vtemp236[1U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U] 
        = __Vtemp236[2U];
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[3U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[0U]);
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[1U]);
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[2U]);
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[3U]);
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[0U]);
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[1U]);
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[2U]);
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[3U]);
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][0U]);
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][1U]);
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][2U]);
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][3U]);
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][0U]);
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][1U]);
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][2U]);
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : vlSelf->riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory
             [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][3U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_ext_R1_data 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                           >> 3U)))];
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
    }
    riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index) 
           == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid) 
                                          & (6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) 
                                         & (5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT__irq 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_time_irq) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_soft_irq));
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT___T_2 
            = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT__irq)) 
                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_except))));
        if (vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_except) {
            __Vdly__riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
                = (0x1800ULL | ((0xffffffffffffff77ULL 
                                 & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus) 
                                | (QData)((IData)((0x80U 
                                                   & ((IData)(
                                                              (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
                                                               >> 3U)) 
                                                      << 7U))))));
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc;
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause 
                = (QData)((IData)((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))));
        } else if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT__irq) {
            __Vdly__riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
                = (0x1800ULL | ((0xffffffffffffff77ULL 
                                 & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus) 
                                | (QData)((IData)((0x80U 
                                                   & ((IData)(
                                                              (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
                                                               >> 3U)) 
                                                      << 7U))))));
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_except)
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc
                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc);
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause 
                = (0x8000000000000000ULL | (QData)((IData)(
                                                           (3U 
                                                            | ((IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_time_irq) 
                                                               << 2U)))));
        } else {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T) 
                 & (0x300U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)))) {
                __Vdly__riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
            }
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T) 
                 & (0x341U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
            }
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T) 
                 & (0x342U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
            }
        }
        if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT___T_2)) 
             & (0x304U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
        }
        if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT___T_2)) 
             & (0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
        }
        if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT___T_2)) 
             & (0x340U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
        }
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_except) 
             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT__irq))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = 0ULL;
        } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T) 
                    & (0x343U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
        }
    }
    if (__Vdlyvset__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0[0U];
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0[1U];
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0[2U];
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram5__DOT__sram_ext__DOT__Memory__v0[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag)));
    if (__Vdlyvset__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0[0U];
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0[1U];
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0[2U];
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__sram7__DOT__sram_ext__DOT__Memory__v0[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready) 
              & (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
        = __Vdly__riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index 
        = (0x3fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready)
                     ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr 
                                >> 4U)) : (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                   >> 4U))));
    if ((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                >> 0x1fU))) {
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr;
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data 
            = vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][0U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][1U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][2U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][3U];
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid 
        = ((~ (IData)((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                              >> 0x1fU)))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_next_pc) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc 
                = vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mepc;
        } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_target_next_pc_T;
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                           ? 0x300U
                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception 
        = ((IData)(vlSelf->reset) ? 0U : ((0U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 0xbU : 
                                          (3U & (- (IData)(
                                                           (8U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                                >> 2U))))))));
    __Vtemp263[0U] = 0U;
    __Vtemp263[1U] = 0U;
    __Vtemp263[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data);
    __Vtemp263[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data 
                              >> 0x20U));
    __Vtemp263[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result);
    __Vtemp263[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
                              >> 0x20U));
    __Vtemp263[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result);
    __Vtemp263[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
                              >> 0x20U));
    __Vtemp263[8U] = 0U;
    __Vtemp263[9U] = 0U;
    __Vtemp263[0xaU] = (IData)(((0xffffffffffffffe0ULL 
                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data) 
                                | (QData)((IData)((0x1fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))));
    __Vtemp263[0xbU] = (IData)((((0xffffffffffffffe0ULL 
                                  & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data) 
                                 | (QData)((IData)(
                                                   (0x1fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))) 
                                >> 0x20U));
    __Vtemp263[0xcU] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result);
    __Vtemp263[0xdU] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
                                >> 0x20U));
    __Vtemp263[0xeU] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result);
    __Vtemp263[0xfU] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
                                >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                             ? (0x80ULL 
                                                | ((0xffffffffffffff77ULL 
                                                    & vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus) 
                                                   | (QData)((IData)(
                                                                     (8U 
                                                                      & ((IData)(
                                                                                (vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus 
                                                                                >> 7U)) 
                                                                         << 3U))))))
                                             : (((QData)((IData)(
                                                                 __Vtemp263[
                                                                 (((IData)(0x3fU) 
                                                                   + 
                                                                   (0x1c0U 
                                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                                       << 4U))) 
                                                                  >> 5U)])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  __Vtemp263[
                                                                  (0xeU 
                                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                                      >> 1U))])))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid 
        = (((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[3U] 
             >> 0x1aU) & ((0xffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[2U])) 
                                                     >> 2U))) 
                          == ((0xfffffffffffffeULL 
                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                  >> 8U)) | (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                        >> 2U)))))))) 
           & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory
              [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                 >> 3U)))] >> 1U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid)
            ? ((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[0U]))
                ? ((5U >= (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory
                   [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head]
                    : 0ULL) : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[2U])) 
                                << 0x3eU) | (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[0U])) 
                                                >> 2U))))
            : 0ULL);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr 
            = (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
               >> 0x14U);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_ext__DOT__Memory
            [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail];
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = 0ULL;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN 
            = ((0x1fc00U & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                            >> 0xfU)) | ((0x380U & 
                                          (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                           >> 5U)) 
                                         | (0x7fU & vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst)));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1 
            = (0x33U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0 
            = ((0x380U & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                          >> 5U)) | (0x7fU & vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_1 
            = ((0xfc00U & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                           >> 0x10U)) | ((0x380U & 
                                          (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                           >> 5U)) 
                                         | (0x7fU & vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst)));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_3 
            = (0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_5 
            = (0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_7 
            = (0x3bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_9 
            = (0x3b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11 
            = (0x393U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13 
            = (0x17U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_15 
            = (0x63U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_17 
            = (0x2e3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_19 
            = (0x3e3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_21 
            = (0x263U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_23 
            = (0x363U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_25 
            = (0xe3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_27 
            = (0x1f3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_29 
            = (0x3f3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_31 
            = (0x173U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_33 
            = (0x373U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_35 
            = (0xf3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_37 
            = (0x2f3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_39 
            = (0x183U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_41 
            = (3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_43 
            = (0x203U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_45 
            = (0x83U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_47 
            = (0x283U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49 
            = (0x37U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51 
            = (0x103U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53 
            = (0x303U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_55 
            = (0x1a3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_57 
            = (0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_59 
            = (0xa3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61 
            = (0xb3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_63 
            = (0x93U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_1));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_65 
            = (0x9bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_67 
            = (0xbbU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_69 
            = (0x133U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_71 
            = (0x113U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_73 
            = (0x193U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_75 
            = (0x1b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_77 
            = (0x82b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_79 
            = (0x4293U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_1));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_81 
            = (0x829bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_83 
            = (0x82bbU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_85 
            = (0x2b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_87 
            = (0x293U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_1));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_89 
            = (0x29bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91 
            = (0x2bbU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93 
            = (0x8033U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95 
            = (0x803bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97 
            = (0x123U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99 
            = (0x333U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101 
            = (0x313U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103 
            = (0x233U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105 
            = (0x213U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_107 
            = (0x633U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_109 
            = (0x6b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_111 
            = (0x6bbU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_113 
            = (0x63bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_115 
            = (0x433U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_117 
            = (0x4b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_119 
            = (0x533U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_121 
            = (0x5b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_123 
            = (0x43bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_125 
            = (0x733U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_127 
            = (0x7b3U == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_129 
            = (0x7bbU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_131 
            = (0x73bU == vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_133 
            = (0x6fU == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_135 
            = (0x67U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_137 
            = (0x100073U == vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_139 
            = (0x30200073U == vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_141 
            = (0x73U == vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_143 
            = (0x10200073U == vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_145 
            = (0xfU == ((0xf00000U & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                      >> 8U)) | (0xfffffU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst)));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_147 
            = (0x100fU == vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_149 
            = (0x48073U == ((0x3f8000U & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                          >> 0xaU)) 
                            | (0x7fffU & vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst)));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_2 
            = (((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_107) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_109)) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_111)) 
                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_113)) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_115)) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_117)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_119)) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_121)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_123)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_125)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_127)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_129)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_131));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_3 
            = (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_39) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_41)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_43)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_45)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_47));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_4 
            = ((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_27) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_29)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_31)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_33)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_35)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_37));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_5 
            = ((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_15) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_17)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_19)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_21)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_23)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_25));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_6 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_87) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_89));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_7 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_83) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_85));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_8 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_79) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_81));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_9 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_75) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_77));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_10 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_71) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_73));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_11 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_67) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_69));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_12 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_63) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_65));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_13 
            = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_55) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_57)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_59));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_14 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_7) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_9));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_15 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_3) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_5));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1)
                ? 6U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_15)
                         ? 0xcU : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_14)
                                    ? 6U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11)
                                             ? 0xcU
                                             : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13)
                                                 ? 1U
                                                 : 
                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_5)
                                                  ? 7U
                                                  : 
                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_4)
                                                   ? 5U
                                                   : 
                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_3)
                                                    ? 0xcU
                                                    : 
                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49)
                                                     ? 1U
                                                     : 
                                                    (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51) 
                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53))
                                                      ? 0xcU
                                                      : 
                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_13)
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61)
                                                        ? 6U
                                                        : 
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_12)
                                                         ? 4U
                                                         : 
                                                        ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_11)
                                                          ? 6U
                                                          : 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_10)
                                                           ? 0xcU
                                                           : 
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_9)
                                                            ? 6U
                                                            : 
                                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_8)
                                                             ? 4U
                                                             : 
                                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_7)
                                                              ? 6U
                                                              : 
                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_6)
                                                               ? 4U
                                                               : 
                                                              ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91) 
                                                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93)) 
                                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95))
                                                                ? 6U
                                                                : 
                                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97)
                                                                 ? 3U
                                                                 : 
                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99)
                                                                  ? 6U
                                                                  : 
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101)
                                                                   ? 0xcU
                                                                   : 
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103)
                                                                    ? 6U
                                                                    : 
                                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105)
                                                                     ? 0xcU
                                                                     : 
                                                                    ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_2)
                                                                      ? 6U
                                                                      : 
                                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_133)
                                                                       ? 2U
                                                                       : 
                                                                      ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_135)
                                                                        ? 0xcU
                                                                        : 0U))))))))))))))))))))))))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType 
            = ((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_3)) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_5)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_7)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_9)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13))
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_5)
                         ? 1U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_4)
                                  ? 4U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_3)
                                           ? 5U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49)
                                                    ? 2U
                                                    : 
                                                   ((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51) 
                                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53)) 
                                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_55)) 
                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_57)) 
                                                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_59))
                                                     ? 5U
                                                     : 
                                                    (((((((((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61) 
                                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_63)) 
                                                                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_65)) 
                                                                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_67)) 
                                                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_69)) 
                                                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_71)) 
                                                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_73)) 
                                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_75)) 
                                                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_77)) 
                                                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_79)) 
                                                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_81)) 
                                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_83)) 
                                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_85)) 
                                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_87)) 
                                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_89)) 
                                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91)) 
                                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93)) 
                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95))
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97)
                                                       ? 5U
                                                       : 
                                                      (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99) 
                                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101)) 
                                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103)) 
                                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105))
                                                        ? 2U
                                                        : 
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_2)
                                                         ? 3U
                                                         : 
                                                        (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_133) 
                                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_135))
                                                          ? 1U
                                                          : 
                                                         (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_137) 
                                                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_139)) 
                                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_141)) 
                                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_143))
                                                           ? 4U
                                                           : 
                                                          ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_145) 
                                                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_147)) 
                                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_149))
                                                            ? 6U
                                                            : 0U)))))))))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_3)
                         ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_5)
                                  ? 1U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_7)
                                           ? 3U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_9)
                                                    ? 0x1eU
                                                    : 
                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11)
                                                     ? 0x1cU
                                                     : 
                                                    ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13)
                                                      ? 0x60U
                                                      : 
                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_15)
                                                       ? 0x22U
                                                       : 
                                                      ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_17)
                                                        ? 0x36U
                                                        : 
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_19)
                                                         ? 0x3eU
                                                         : 
                                                        ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_21)
                                                          ? 0x32U
                                                          : 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_23)
                                                           ? 0x3aU
                                                           : 
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_25)
                                                            ? 0x26U
                                                            : 
                                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_27)
                                                             ? 0xeU
                                                             : 
                                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_29)
                                                              ? 0x1eU
                                                              : 
                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_31)
                                                               ? 0xaU
                                                               : 
                                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_33)
                                                                ? 0x1aU
                                                                : 
                                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_35)
                                                                 ? 6U
                                                                 : 
                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_37)
                                                                  ? 0x16U
                                                                  : 
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_39)
                                                                   ? 0xcU
                                                                   : 
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_41)
                                                                    ? 0U
                                                                    : 
                                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_43)
                                                                     ? 0x10U
                                                                     : 
                                                                    ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_45)
                                                                      ? 4U
                                                                      : 
                                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_47)
                                                                       ? 0x14U
                                                                       : 
                                                                      ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49)
                                                                        ? 0x40U
                                                                        : 
                                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51)
                                                                         ? 8U
                                                                         : 
                                                                        ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_55)
                                                                           ? 0xeU
                                                                           : 
                                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_57)
                                                                            ? 2U
                                                                            : 
                                                                           (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_59) 
                                                                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61))
                                                                             ? 6U
                                                                             : 
                                                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_63)
                                                                              ? 4U
                                                                              : 
                                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_65)
                                                                               ? 5U
                                                                               : 
                                                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_67)
                                                                                ? 7U
                                                                                : 
                                                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_69)
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_71)
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_73)
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_75)
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_77)
                                                                                 ? 0x36U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_79)
                                                                                 ? 0x34U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_81)
                                                                                 ? 0x35U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_83)
                                                                                 ? 0x37U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_85)
                                                                                 ? 0x16U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_87)
                                                                                 ? 0x14U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_89)
                                                                                 ? 0x15U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91)
                                                                                 ? 0x17U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93)
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95)
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99)
                                                                                 ? 0x1aU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101)
                                                                                 ? 0x18U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103)
                                                                                 ? 0x12U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105)
                                                                                 ? 0x10U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_107)
                                                                                 ? 0x12U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_109)
                                                                                 ? 0x16U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_111)
                                                                                 ? 0x17U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_113)
                                                                                 ? 0x13U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_115)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_117)
                                                                                 ? 6U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_119)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_121)
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_123)
                                                                                 ? 3U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_125)
                                                                                 ? 0x1aU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_127)
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_129)
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_131)
                                                                                 ? 0x1bU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_133)
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_135)
                                                                                 ? 0xaU
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_137)
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_139)
                                                                                 ? 0x42U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_141)
                                                                                 ? 2U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_143)
                                                                                 ? 0x62U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_145)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_147)
                                                                                 ? 5U
                                                                                 : 
                                                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_149) 
                                                                                << 1U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_16 
            = ((((((((((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51) 
                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53)) 
                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_55)) 
                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_57)) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_59)) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61)) 
                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_63)) 
                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_65)) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_67)) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_69)) 
                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_71)) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_73)) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_75)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_77)) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_79)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_81)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_83)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_85)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_87)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_89));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_18 
            = (((((((((((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91) 
                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93)) 
                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95)) 
                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97)) 
                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99)) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101)) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103)) 
                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105)) 
                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_107)) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_109)) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_111)) 
                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_113)) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_115)) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_117)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_119)) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_121)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_123)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_125)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_127)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_129)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_131));
        if ((1U == (((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_3)) 
                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_5)) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_7)) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_9)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11))
                     ? 1U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13)
                              ? 0U : ((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_15) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_17)) 
                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_19)) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_21)) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_23)) 
                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_25)) 
                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_27))
                                       ? 1U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_29)
                                                ? 0U
                                                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_31)
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_33)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_35)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_37)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_3)
                                                        ? 1U
                                                        : 
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49)
                                                         ? 0U
                                                         : 
                                                        (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_16) 
                                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_18))
                                                          ? 1U
                                                          : 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_133)
                                                           ? 0U
                                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_135))))))))))))))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr 
                = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                            >> 0xfU));
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                     == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                  >> 0xfU))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                        (((IData)(0x3fU) 
                                          + (0x7c0U 
                                             & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                >> 9U))) 
                                         >> 5U)])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                    (0x3eU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                        >> 0xeU))]))));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = 0ULL;
        }
        if ((1U == ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1)
                     ? 1U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_15)
                              ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_14)
                                       ? 1U : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11) 
                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13))
                                                ? 0U
                                                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_5)
                                                    ? 1U
                                                    : 
                                                   (((((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_27) 
                                                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_29)) 
                                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_31)) 
                                                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_33)) 
                                                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_35)) 
                                                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_37)) 
                                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_39)) 
                                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_41)) 
                                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_43)) 
                                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_45)) 
                                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_47)) 
                                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49)) 
                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51)) 
                                                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53))
                                                     ? 0U
                                                     : 
                                                    (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_55) 
                                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_57)) 
                                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_59)) 
                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61))
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_12)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_11)
                                                        ? 1U
                                                        : 
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_10)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_9)
                                                          ? 1U
                                                          : 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_8)
                                                           ? 0U
                                                           : 
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_7)
                                                            ? 1U
                                                            : 
                                                           ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_6)
                                                             ? 0U
                                                             : 
                                                            ((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91) 
                                                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93)) 
                                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95)) 
                                                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97)) 
                                                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99))
                                                              ? 1U
                                                              : 
                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101)
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103)
                                                                ? 1U
                                                                : 
                                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105)
                                                                 ? 0U
                                                                 : 
                                                                (((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_107) 
                                                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_109)) 
                                                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_111)) 
                                                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_113)) 
                                                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_115)) 
                                                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_117)) 
                                                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_119)) 
                                                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_121)) 
                                                                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_123)) 
                                                                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_125)) 
                                                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_127)) 
                                                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_129))
                                                                  ? 1U
                                                                  : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_131)))))))))))))))))))))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr 
                = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                            >> 0x14U));
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                     == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                  >> 0x14U))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                        (((IData)(0x3fU) 
                                          + (0x7c0U 
                                             & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                >> 0xeU))) 
                                         >> 5U)])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[
                                                    (0x3eU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                        >> 0x13U))]))));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = 0ULL;
        }
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
            = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType))
                ? (0x3fU & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                            >> 0x14U)) : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType))
                                           ? (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                 >> 0xfU))
                                           : ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType))
                                               ? ((
                                                   (- (IData)(
                                                              (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0x800U 
                                                      & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                              >> 7U)))))
                                               : ((2U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst) 
                                                      | ((0x800U 
                                                          & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                               >> 0x14U)))))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                             >> 7U))))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType))
                                                     ? 
                                                    (0xfffff000U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                         >> 0x14U))
                                                      : 0U)))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_20 
            = (((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_63)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_65)) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_67)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_69)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_71)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_73)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_75)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_77));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_22 
            = ((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_79) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_81)) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_83)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_85)) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_87)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_89)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95)) 
               | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97)) 
                  & (((((((((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101)) 
                                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103)) 
                                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105)) 
                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_107)) 
                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_109)) 
                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_111)) 
                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_113)) 
                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_115)) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_117)) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_119)) 
                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_121)) 
                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_123)) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_125)) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_127)) 
                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_129)) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_131)) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_133)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_135))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg 
            = ((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_3)) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_5)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_7)) 
                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_9)) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11)) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13)) 
               | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_5)) 
                  & (((((((((((((((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_27) 
                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_29)) 
                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_31)) 
                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_33)) 
                               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_35)) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_37)) 
                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_39)) 
                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_41)) 
                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_43)) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_45)) 
                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_47)) 
                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49)) 
                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51)) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53)) 
                     | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_13)) 
                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_20) 
                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_22))))));
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_ext__DOT__Memory__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_ext__DOT__Memory[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_ext__DOT__Memory__v0] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_ext__DOT__Memory__v0;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail 
        = __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail;
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[1U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[2U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[3U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[4U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[5U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[6U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[7U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[8U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[9U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xaU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xbU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xcU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xdU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xeU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xfU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x10U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x11U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x12U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x13U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x14U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x15U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x16U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x17U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x18U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x19U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1aU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1bU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1cU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1dU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1eU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1fU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x20U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x21U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x22U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x23U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x24U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x25U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x26U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x27U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x28U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x29U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2aU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2bU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2cU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2dU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2eU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2fU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x30U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x31U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x32U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x33U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x34U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x35U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x36U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x37U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x38U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x39U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3aU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3bU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3cU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3dU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3eU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3fU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3 
        = ((IData)((0U != (9U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata
            : ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data
                : ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
                        ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                            ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))
                            : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))
                        : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                            ? (((QData)((IData)((- (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                            >> 0x1fU))))) 
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret 
        = ((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) | (0x18U == 
                                           (0x1fU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? 4U : (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                     | (5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)))
                     ? 2U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                             | (2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr;
    }
    riscv_soc__DOT__core__DOT__execute__DOT__valid 
        = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr 
            = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                        >> 7U));
    }
    vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_except 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_time_irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_soft_irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_commit 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) 
           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_ext__DOT__Memory
           [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid) 
             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))) 
            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mepc 
        = (((0x341U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus 
        = (((0x300U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mie 
        = (((0x304U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_rd_csr_data 
        = ((((vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
              >> 0x14U) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : ((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                           >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                : ((0xb00U == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                               >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle
                    : ((0x344U == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                   >> 0x14U)) ? 0ULL
                        : ((0x343U == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                       >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval
                            : ((0x342U == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                           >> 0x14U))
                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause
                                : ((0x341U == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                               >> 0x14U))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc
                                    : ((0x340U == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                   >> 0x14U))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch
                                        : ((0x306U 
                                            == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                >> 0x14U))
                                            ? 0ULL : 
                                           ((0x305U 
                                             == (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                 >> 0x14U))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec
                                             : ((0x304U 
                                                 == 
                                                 (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                  >> 0x14U))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie
                                                 : 
                                                (((((0x303U 
                                                     == 
                                                     (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                      >> 0x14U)) 
                                                    | (0x302U 
                                                       == 
                                                       (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                        >> 0x14U))) 
                                                   | (0x301U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                       >> 0x14U))) 
                                                  | (0x300U 
                                                     != 
                                                     (vlSelf->riscv_soc__DOT__core__DOT___fetch_io_put_pc_bits_inst 
                                                      >> 0x14U)))
                                                  ? 0ULL
                                                  : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2 
        = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data)))
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data 
        = ((0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? (((QData)((IData)((- (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
        = (((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                          >> 2U))) ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data
             : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
           + (((QData)((IData)((- (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                           >> 0x1fU))))) 
               << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
        = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data)))
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
           + (((QData)((IData)((- (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                           >> 0x1fU))))) 
               << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2 
        = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__valid) 
             >> 3U) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid 
        = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__valid) 
             >> 2U) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2 
        = (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__valid) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid 
        = (((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__valid) 
              >> 1U) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
            & (6U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
        = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2
            : (((QData)((IData)((- (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data 
           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
        = ((~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data) 
           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq 
        = (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
           == riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
        = ((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                         >> 5U))) ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
            : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
    VL_EXTEND_WQ(127,64, __Vtemp296, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
    VL_EXTEND_WI(124,3, __Vtemp297, (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr)));
    __Vtemp298[0U] = (__Vtemp297[0U] << 3U);
    __Vtemp298[1U] = ((__Vtemp297[0U] >> 0x1dU) | (
                                                   __Vtemp297[1U] 
                                                   << 3U));
    __Vtemp298[2U] = ((__Vtemp297[1U] >> 0x1dU) | (
                                                   __Vtemp297[2U] 
                                                   << 3U));
    __Vtemp298[3U] = ((__Vtemp297[2U] >> 0x1dU) | (
                                                   __Vtemp297[3U] 
                                                   << 3U));
    VL_SHIFTL_WWW(127,127,127, __Vtemp299, __Vtemp296, __Vtemp298);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U] 
        = __Vtemp299[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U] 
        = __Vtemp299[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U] 
        = __Vtemp299[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U] 
        = (0x7fffffffU & __Vtemp299[3U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN 
        = (0xffU & ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                     ? (0x7ffU & ((IData)(0xfU) << 
                                  (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))
                     : ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                         ? (0x1ffU & ((IData)(3U) << 
                                      (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))
                         : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                             ? (0x7fffU & ((IData)(0xffU) 
                                           << (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))
                             : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                 ? ((IData)(1U) << 
                                    (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr)))
                                 : 0U)))));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 4U)));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag)) 
               & 1U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag) 
               & 1U);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr 
            = (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_is_except 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U))) | (8U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_next_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid 
        = ((IData)(riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
              >> 4U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__mul__io_valid 
        = ((IData)(riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid) 
           & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                 >> 4U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
              >> 1U));
    riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data 
        = (0x3fU & ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                     ? (0x1fU & (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))
                     : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    VL_EXTEND_WQ(65,64, __Vtemp302, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data);
    VL_EXTEND_WQ(65,64, __Vtemp303, ((- (QData)((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                             >> 5U)))))) 
                                     ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    VL_ADD_W(3, __Vtemp304, __Vtemp302, __Vtemp303);
    VL_EXTEND_WI(65,1, __Vtemp305, (1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 5U))));
    VL_ADD_W(3, __Vtemp306, __Vtemp304, __Vtemp305);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U] 
        = __Vtemp306[0U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U] 
        = __Vtemp306[1U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U] 
        = (1U & __Vtemp306[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) 
           & (IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) 
           & (IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T));
    if (riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel) {
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata 
            = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U])));
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN;
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid;
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata;
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb;
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid;
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr;
    }
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2 
        = (1U & ((1U & ((IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                 >> 0x3fU)) ^ (IData)(
                                                      (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                       >> 0x3fU))))
                  ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                             >> 0x3fU)) : (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U] 
                                           >> 0x1fU)));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[0U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[1U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[2U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[3U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U];
    }
    VL_EXTEND_WQ(128,54, __Vtemp309, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                      >> 0xaU));
    VL_EXTEND_WQ(128,54, __Vtemp310, (0x3fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_0_hit 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            >> 0xaU) == (0x3fffffffffffffULL & (((QData)((IData)(
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                   ? 
                                                                  __Vtemp309[1U]
                                                                   : 
                                                                  __Vtemp310[1U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                    ? 
                                                                   __Vtemp309[0U]
                                                                    : 
                                                                   __Vtemp310[0U]))))));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[0U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[1U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[2U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[3U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U];
    }
    VL_EXTEND_WQ(128,54, __Vtemp313, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                      >> 0xaU));
    VL_EXTEND_WQ(128,54, __Vtemp314, (0x3fffffffffffffULL 
                                      & (((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_1_hit 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            >> 0xaU) == (0x3fffffffffffffULL & (((QData)((IData)(
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                   ? 
                                                                  __Vtemp313[1U]
                                                                   : 
                                                                  __Vtemp314[1U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                    ? 
                                                                   __Vtemp313[0U]
                                                                    : 
                                                                   __Vtemp314[0U]))))));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_DCache_valid 
        = ((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                   >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A 
        = (0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                     : (IData)((vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                                >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint 
        = ((0x2000000U > (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr))) 
           | (0x200ffffU < (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr))));
    VL_EXTEND_WQ(127,64, __Vtemp322, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp323, __Vtemp322, (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
    __Vtemp326[0U] = (IData)((((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U]))));
    __Vtemp326[1U] = (IData)(((((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U]))) 
                              >> 0x20U));
    __Vtemp326[2U] = (IData)((((QData)((IData)(__Vtemp323[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           __Vtemp323[0U]))));
    __Vtemp326[3U] = (IData)(((((QData)((IData)(__Vtemp323[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            __Vtemp323[0U]))) 
                              >> 0x20U));
    __Vtemp326[4U] = (IData)((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)));
    __Vtemp326[5U] = (IData)(((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)) 
                              >> 0x20U));
    __Vtemp326[6U] = (IData)((QData)((IData)((1U & 
                                              (~ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])))));
    __Vtemp326[7U] = (IData)(((QData)((IData)((1U & 
                                               (~ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])))) 
                              >> 0x20U));
    __Vtemp326[8U] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                              ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp326[9U] = (IData)(((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                               ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                              >> 0x20U));
    __Vtemp326[0xaU] = (IData)(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 5U)))
                                 ? VL_SHIFTRS_QQQ(64,64,64, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
                                 : VL_SHIFTR_QQQ(64,64,64, 
                                                 ((1U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                   ? (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                                   : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data), (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))));
    __Vtemp326[0xbU] = (IData)((((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 5U)))
                                  ? VL_SHIFTRS_QQQ(64,64,64, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
                                  : VL_SHIFTR_QQQ(64,64,64, 
                                                  ((1U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                    ? (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data), (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))) 
                                >> 0x20U));
    __Vtemp326[0xcU] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                | riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp326[0xdU] = (IData)(((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                 | riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                >> 0x20U));
    __Vtemp326[0xeU] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp326[0xfU] = (IData)(((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                 & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)
            : (((QData)((IData)(__Vtemp326[(((IData)(0x3fU) 
                                             + (0x1c0U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   << 4U))) 
                                            >> 5U)])) 
                << 0x20U) | (QData)((IData)(__Vtemp326[
                                            (0xeU & 
                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 1U))]))));
    VL_EXTEND_WQ(65,64, __Vtemp329, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp332, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp336, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp340, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp347, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp351, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    if (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq) {
        __Vtemp353[0U] = (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp353[1U] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                  >> 0x20U));
    } else {
        __Vtemp353[0U] = __Vtemp351[0U];
        __Vtemp353[1U] = __Vtemp351[1U];
    }
    __Vtemp353[2U] = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                         ? __Vtemp347[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                       << 1U) | ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                  ? 1U : __Vtemp351[2U]));
    __Vtemp353[3U] = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                         ? __Vtemp347[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                       >> 0x1fU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                      ? __Vtemp347[1U]
                                      : (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                 >> 0x20U))) 
                                    << 1U));
    __Vtemp353[4U] = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                         ? __Vtemp347[1U] : (IData)(
                                                    (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                     >> 0x20U))) 
                       >> 0x1fU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                      ? __Vtemp347[2U]
                                      : 1U) << 1U));
    VL_EXTEND_WW(131,130, __Vtemp354, __Vtemp353);
    __Vtemp356[0U] = __Vtemp354[0U];
    __Vtemp356[1U] = __Vtemp354[1U];
    __Vtemp356[2U] = __Vtemp354[2U];
    __Vtemp356[3U] = __Vtemp354[3U];
    __Vtemp356[4U] = (((IData)((0x8000000000000000ULL 
                                | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                   >> 1U))) << 3U) 
                      | __Vtemp354[4U]);
    __Vtemp356[5U] = (((IData)((0x8000000000000000ULL 
                                | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                   >> 1U))) >> 0x1dU) 
                      | ((IData)(((0x8000000000000000ULL 
                                   | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                      >> 1U)) >> 0x20U)) 
                         << 3U));
    __Vtemp356[6U] = (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1) 
                       << 3U) | ((IData)(((0x8000000000000000ULL 
                                           | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                              >> 1U)) 
                                          >> 0x20U)) 
                                 >> 0x1dU));
    __Vtemp356[7U] = (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1) 
                       >> 0x1dU) | ((IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                             >> 0x20U)) 
                                    << 3U));
    __Vtemp356[8U] = (8U | (((IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                      >> 0x20U)) >> 0x1dU) 
                            | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                 ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                 : __Vtemp340[0U]) 
                               << 4U)));
    __Vtemp356[9U] = ((7U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                               ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                               : __Vtemp340[0U]) >> 0x1cU)) 
                      | ((8U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                  ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                  : __Vtemp340[0U]) 
                                >> 0x1cU)) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                ? (IData)(
                                                          (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                           >> 0x20U))
                                                : __Vtemp340[1U]) 
                                              << 4U)));
    __Vtemp356[0xaU] = ((7U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                 ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                            >> 0x20U))
                                 : __Vtemp340[1U]) 
                               >> 0x1cU)) | ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                ? __Vtemp336[0U]
                                                : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                              << 5U) 
                                             | ((8U 
                                                 & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                      ? (IData)(
                                                                (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                 >> 0x20U))
                                                      : 
                                                     __Vtemp340[1U]) 
                                                    >> 0x1cU)) 
                                                | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                     ? 1U
                                                     : 
                                                    __Vtemp340[2U]) 
                                                   << 4U))));
    __Vtemp356[0xbU] = ((7U & ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                  ? __Vtemp336[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                >> 0x1bU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                               ? 1U
                                               : __Vtemp340[2U]) 
                                             >> 0x1cU))) 
                        | ((0x18U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                       ? __Vtemp336[0U]
                                       : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                     >> 0x1bU)) | (
                                                   ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                     ? 
                                                    __Vtemp336[1U]
                                                     : (IData)(
                                                               (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                >> 0x20U))) 
                                                   << 5U)));
    __Vtemp356[0xcU] = ((7U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                 ? __Vtemp336[1U] : (IData)(
                                                            (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                             >> 0x20U))) 
                               >> 0x1bU)) | ((((1U 
                                                & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                ? __Vtemp332[0U]
                                                : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                              << 6U) 
                                             | ((0x18U 
                                                 & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                      ? 
                                                     __Vtemp336[1U]
                                                      : (IData)(
                                                                (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                 >> 0x20U))) 
                                                    >> 0x1bU)) 
                                                | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                     ? 
                                                    __Vtemp336[2U]
                                                     : 1U) 
                                                   << 5U))));
    __Vtemp356[0xdU] = ((7U & ((((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                  ? __Vtemp332[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                >> 0x1aU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                               ? __Vtemp336[2U]
                                               : 1U) 
                                             >> 0x1bU))) 
                        | ((0x38U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                       ? __Vtemp332[0U]
                                       : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                     >> 0x1aU)) | (
                                                   ((1U 
                                                     & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                     ? 
                                                    __Vtemp332[1U]
                                                     : (IData)(
                                                               (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                >> 0x20U))) 
                                                   << 6U)));
    __Vtemp356[0xeU] = ((7U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                 ? __Vtemp332[1U] : (IData)(
                                                            (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                             >> 0x20U))) 
                               >> 0x1aU)) | ((((1U 
                                                & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                                : __Vtemp329[0U]) 
                                              << 7U) 
                                             | ((0x38U 
                                                 & (((1U 
                                                      & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                      ? 
                                                     __Vtemp332[1U]
                                                      : (IData)(
                                                                (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                 >> 0x20U))) 
                                                    >> 0x1aU)) 
                                                | (((1U 
                                                     & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                     ? 
                                                    __Vtemp332[2U]
                                                     : 1U) 
                                                   << 6U))));
    __Vtemp356[0xfU] = ((7U & ((((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                  ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                  : __Vtemp329[0U]) 
                                >> 0x19U) | (((1U & 
                                               riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                               ? __Vtemp332[2U]
                                               : 1U) 
                                             >> 0x1aU))) 
                        | ((0x78U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                       ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                       : __Vtemp329[0U]) 
                                     >> 0x19U)) | (
                                                   ((1U 
                                                     & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                     ? (IData)(
                                                               (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp329[1U]) 
                                                   << 7U)));
    __Vtemp356[0x10U] = ((7U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                  ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                             >> 0x20U))
                                  : __Vtemp329[1U]) 
                                >> 0x19U)) | ((0x78U 
                                               & (((1U 
                                                    & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                    ? (IData)(
                                                              (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                               >> 0x20U))
                                                    : 
                                                   __Vtemp329[1U]) 
                                                  >> 0x19U)) 
                                              | (((1U 
                                                   & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                   ? 1U
                                                   : 
                                                  __Vtemp329[2U]) 
                                                 << 7U)));
    if ((0x207U >= (0x3ffU & ((IData)(0x41U) * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))))) {
        __Vtemp360[0U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))))
                            ? 0U : (__Vtemp356[((IData)(1U) 
                                                + (0x1fU 
                                                   & (((IData)(0x41U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                           >> 2U))) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))))) 
                          | (__Vtemp356[(0x1fU & (((IData)(0x41U) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U))) 
                                                  >> 5U))] 
                             >> (0x1fU & ((IData)(0x41U) 
                                          * (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
        __Vtemp360[1U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))))
                            ? 0U : (__Vtemp356[((IData)(2U) 
                                                + (0x1fU 
                                                   & (((IData)(0x41U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                           >> 2U))) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))))) 
                          | (__Vtemp356[((IData)(1U) 
                                         + (0x1fU & 
                                            (((IData)(0x41U) 
                                              * (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U))) 
                                             >> 5U)))] 
                             >> (0x1fU & ((IData)(0x41U) 
                                          * (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
        __Vtemp360[2U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))))
                            ? 0U : (__Vtemp356[((IData)(3U) 
                                                + (0x1fU 
                                                   & (((IData)(0x41U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                           >> 2U))) 
                                                      >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x41U) 
                                            * (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U))))))) 
                          | (__Vtemp356[((IData)(2U) 
                                         + (0x1fU & 
                                            (((IData)(0x41U) 
                                              * (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U))) 
                                             >> 5U)))] 
                             >> (0x1fU & ((IData)(0x41U) 
                                          * (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
    } else {
        __Vtemp360[0U] = 0U;
        __Vtemp360[1U] = 0U;
        __Vtemp360[2U] = 0U;
    }
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U] 
            = __Vtemp360[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U] 
            = __Vtemp360[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U] 
            = (1U & __Vtemp360[2U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U] = 0U;
    }
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[0U] 
        = vlSelf->riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][0U];
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[1U] 
        = vlSelf->riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][1U];
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[2U] 
        = vlSelf->riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][2U];
    vlSelf->riscv_soc__DOT__sram4__DOT___sram_ext_R0_data[3U] 
        = vlSelf->riscv_soc__DOT__sram4__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][3U];
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[0U] 
        = vlSelf->riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][0U];
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[1U] 
        = vlSelf->riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][1U];
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[2U] 
        = vlSelf->riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][2U];
    vlSelf->riscv_soc__DOT__sram6__DOT___sram_ext_R0_data[3U] 
        = vlSelf->riscv_soc__DOT__sram6__DOT__sram_ext__DOT__Memory
        [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A][3U];
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid 
        = (((~ (IData)((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                               >> 0x1fU)))) & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
        = ((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                   >> 0x1fU)) ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                ? vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata
                : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid 
        = (((~ (IData)((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                               >> 0x1fU)))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_target_next_pc_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
            ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U])))
            : 0ULL);
    __Vtemp369[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0);
    __Vtemp369[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 
                              >> 0x20U));
    __Vtemp369[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1);
    __Vtemp369[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 
                              >> 0x20U));
    __Vtemp369[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2);
    __Vtemp369[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 
                              >> 0x20U));
    __Vtemp369[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3);
    __Vtemp369[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 
                              >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
           & (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U]) 
                & ((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U]))) 
                   != ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                        ? (((QData)((IData)(__Vtemp369[
                                            (((IData)(0x3fU) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                    << 6U))) 
                                             >> 5U)])) 
                            << ((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                 << 6U)))
                                 ? 0x20U : ((IData)(0x40U) 
                                            - (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                  << 6U))))) 
                           | (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                << 6U)))
                                ? 0ULL : ((QData)((IData)(
                                                          __Vtemp369[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                    << 6U))))) 
                              | ((QData)((IData)(__Vtemp369[
                                                 (6U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                     << 1U))])) 
                                 >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                              << 6U)))))
                        : 0ULL))) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U] 
                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)))) 
              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
                 & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U]))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)
                ? 0U : (((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w))
                         ? 1U : 2U)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0 
        = (3U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))
                  ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)
                      ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                               ? 1U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid)
                                        ? 2U : (- (IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid) 
                                                           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w))))))))
                  : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)));
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))) {
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb = 0xffU;
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid;
    } else {
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb)
                : 0U);
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast 
            = (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN));
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid 
            = (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w));
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_AXI_Bus_aw_valid_T_9 
        = ((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)) 
            & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))) 
           | ((((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid)) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_ICache_bus_r_ready_T_1 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_DCache_bus_r_ready_T_1 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_ICache_bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_DCache_bus_r_bits_rlast 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4 
        = (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)) 
           | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
              & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready)));
    __Vtemp372[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr);
    __Vtemp372[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr 
                              >> 0x20U));
    __Vtemp372[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    __Vtemp372[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
                              >> 0x20U));
    __Vtemp372[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0);
    __Vtemp372[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                              >> 0x20U));
    __Vtemp372[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr);
    __Vtemp372[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                              >> 0x20U));
    vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr 
        = (((QData)((IData)(__Vtemp372[(((IData)(0x3fU) 
                                         + (0xffU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                             << 6U))) 
                                        >> 5U)])) << 
            ((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                              << 6U))) ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                                      << 6U))))) 
           | (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp372[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp372[(6U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                                   << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                              << 6U)))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_2 
        = (1U & ((((((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid)) 
                    & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))) 
                   << 3U) | ((((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid) 
                               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))) 
                              << 2U) | ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))) 
                                         << 1U) | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid) 
                                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)))))) 
                 >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    if ((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                >> 0x1fU))) {
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_addr_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready;
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_addr_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1;
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size 
        = ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
           & (((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
              & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
}

void Vriscv_soc___024root___eval(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vriscv_soc___024root___sequent__TOP__2(vlSelf);
    }
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
