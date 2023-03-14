// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef VERILATED_VRISCV_SOC___024ROOT_H_
#define VERILATED_VRISCV_SOC___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vriscv_soc__Syms;
class Vriscv_soc___024unit;


//----------

VL_MODULE(Vriscv_soc___024root) {
  public:
    // CELLS
    Vriscv_soc___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_difftest_commit,0,0);
    VL_OUT8(io_difftest_irq,0,0);
    VL_OUT8(io_difftest_peripheral,0,0);
    VL_OUT(io_difftest_inst,31,0);
    VL_OUT64(io_difftest_reg_0,63,0);
    VL_OUT64(io_difftest_reg_1,63,0);
    VL_OUT64(io_difftest_reg_2,63,0);
    VL_OUT64(io_difftest_reg_3,63,0);
    VL_OUT64(io_difftest_reg_4,63,0);
    VL_OUT64(io_difftest_reg_5,63,0);
    VL_OUT64(io_difftest_reg_6,63,0);
    VL_OUT64(io_difftest_reg_7,63,0);
    VL_OUT64(io_difftest_reg_8,63,0);
    VL_OUT64(io_difftest_reg_9,63,0);
    VL_OUT64(io_difftest_reg_10,63,0);
    VL_OUT64(io_difftest_reg_11,63,0);
    VL_OUT64(io_difftest_reg_12,63,0);
    VL_OUT64(io_difftest_reg_13,63,0);
    VL_OUT64(io_difftest_reg_14,63,0);
    VL_OUT64(io_difftest_reg_15,63,0);
    VL_OUT64(io_difftest_reg_16,63,0);
    VL_OUT64(io_difftest_reg_17,63,0);
    VL_OUT64(io_difftest_reg_18,63,0);
    VL_OUT64(io_difftest_reg_19,63,0);
    VL_OUT64(io_difftest_reg_20,63,0);
    VL_OUT64(io_difftest_reg_21,63,0);
    VL_OUT64(io_difftest_reg_22,63,0);
    VL_OUT64(io_difftest_reg_23,63,0);
    VL_OUT64(io_difftest_reg_24,63,0);
    VL_OUT64(io_difftest_reg_25,63,0);
    VL_OUT64(io_difftest_reg_26,63,0);
    VL_OUT64(io_difftest_reg_27,63,0);
    VL_OUT64(io_difftest_reg_28,63,0);
    VL_OUT64(io_difftest_reg_29,63,0);
    VL_OUT64(io_difftest_reg_30,63,0);
    VL_OUT64(io_difftest_reg_31,63,0);
    VL_OUT64(io_difftest_pc,63,0);
    VL_OUT64(io_inst_counter,63,0);
    VL_OUT64(io_difftest_mstatus,63,0);
    VL_OUT64(io_difftest_mcause,63,0);
    VL_OUT64(io_difftest_mepc,63,0);
    VL_OUT64(io_difftest_mtvec,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ riscv_soc__DOT__axi_ram_io_ram_bus_r_valid;
        CData/*0:0*/ riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_w_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid;
        CData/*7:0*/ riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch_io_in_flush;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute_io_out_exuType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute_io_out_is_exception;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute_io_out_is_mret;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__decode_io_out_exuType;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back_io_out_time_irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back_io_out_flush;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag_io_A;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state;
        CData/*7:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wstrb;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index;
        CData/*3:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram2_write;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wlast;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_b_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__hit_0;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___T;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cnt;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_23;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_29;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_32;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_35;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_49;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_50;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_53;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_55;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_79;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_91;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_92;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_93;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_96;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_97;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_98;
    };
    struct {
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_99;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_100;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_101;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_102;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_103;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_104;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_105;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_156;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_160;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
        CData/*7:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index;
        CData/*3:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_23;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_29;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_32;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_35;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_49;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_50;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_53;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_55;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_79;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_91;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_92;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_93;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_96;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_97;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_98;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_99;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_100;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_101;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_102;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_103;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_104;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_105;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___T;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_1;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_w_cnt_T_1;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___T_8;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    };
    struct {
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___T_11;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_11;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_1;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_24;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__stall;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__need_update;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___T;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___GEN_5;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___GEN_14;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__stall;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_flush;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__execute__DOT__valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_w_csr_en;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_w_rs_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
        CData/*6:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall;
        CData/*6:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_state_T_3;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_14;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_15;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_16;
        CData/*6:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_17;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_state_T_3;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_5;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_6;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_7;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_8;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_rs_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_exception;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_exception;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr;
        CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_opType;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_stall;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT__stall;
    };
    struct {
        CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_206;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_278;
        CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT__instType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT___GEN_0;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush;
        CData/*7:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__test_is_peripheral;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT___GEN_4;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT___GEN_9;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT___T_2;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT___GEN_29;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_csr_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__is_time_irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__is_soft_irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__is_irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__temp_except;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_time_irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_soft_irq;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_exception;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__difftest_irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__difftest_peripheral;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT__irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT___reg_msip_T_1;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_5;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_6;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT___T_2;
        CData/*3:0*/ riscv_soc__DOT__axi_ram__DOT__reg_rlen;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT__reg_ar_ready;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT__reg_r_valid;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT__reg_r_state;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT___T_1;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT___GEN_1;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT___GEN_2;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT___GEN_7;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT___GEN_20;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT__reg_is_w;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT__reg_aw_ready;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT__reg_w_ready;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT__reg_b_valid;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT___T_5;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT___T_6;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT___GEN_33;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT___GEN_34;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT___GEN_35;
        CData/*7:0*/ riscv_soc__DOT__axi_ram__DOT___GEN_39;
        SData/*15:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb;
        SData/*15:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___cache_wstrb_T_1;
        SData/*15:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___cache_wstrb_T_2;
        SData/*15:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_80;
        SData/*15:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb;
        SData/*15:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_1;
    };
    struct {
        SData/*15:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_2;
        SData/*15:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_80;
        SData/*11:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr;
        SData/*11:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_30;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_82;
        VlWide<3>/*66:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_166;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram_Q;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram_Q;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82;
        VlWide<3>/*66:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166;
        VlWide<3>/*66:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram_Q;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram_Q;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_inst;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q;
        VlWide<5>/*130:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_13;
        VlWide<3>/*65:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_40;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2;
        VlWide<3>/*66:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2;
        VlWide<5>/*129:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1;
        VlWide<5>/*129:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result;
        VlWide<5>/*130:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1;
        VlWide<3>/*66:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T;
        VlWide<5>/*132:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34;
        VlWide<5>/*130:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst;
        VlWide<4>/*126:0*/ riscv_soc__DOT__core__DOT__write_back__DOT___GEN_78;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch_io_in_next_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode_io_out_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back_io_out_result_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mtvec;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mstatus;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wdata;
        QData/*53:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag;
    };
    struct {
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_dirty;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_valid_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_dirty_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_dirty_T_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_valid;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram2_dirty;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram2_valid_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram2_dirty_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram2_dirty_T_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wdata;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_0_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___tag_valid_2_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___LRU_2_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___reg_lru_2_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___reg_lru_2_T_1;
        QData/*59:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___reg_r_raddr_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_33;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_52;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_83;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_94;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata;
        QData/*53:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_valid_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_valid_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1;
        QData/*59:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_33;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_83;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_94;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_pc_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_0_T_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T_3;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_pc;
    };
    struct {
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT___reg_rs_data_T_6;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT___rs1_data_T_6;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT___rs2_data_T_6;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_rd_result;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_csr_result;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_imm;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_51;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__mem_data_result;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT___reg_flush_pc_T_6;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_next_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__inst_counter;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT___inst_counter_T_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT___GEN_79;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mie;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtvec;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mscratch;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcause;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtval;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcycle;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mstatus_T_3;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mepc_T_2;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mcause_T_3;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mtval_T_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mstatus_T_9;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_mcycle_T_2;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT___reg_minstret_T_3;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__csr_reg__DOT___csr_rdata_T_33;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT___temp_data_T_4;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtimecmp_T;
        QData/*63:0*/ riscv_soc__DOT__axi_ram__DOT__mem_rdata;
        QData/*63:0*/ riscv_soc__DOT__axi_ram__DOT__reg_raddr;
        QData/*63:0*/ riscv_soc__DOT__axi_ram__DOT___GEN_9;
        QData/*63:0*/ riscv_soc__DOT__axi_ram__DOT__reg_w_addr;
        QData/*63:0*/ riscv_soc__DOT__axi_ram__DOT___reg_w_addr_T_1;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_data__DOT__sram__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__core__DOT__i_cache__DOT__sram0_tag__DOT__sram__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_data__DOT__sram__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_tag__DOT__sram__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram;
    };
    struct {
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram;
        VlUnpacked<QData/*63:0*/, 32> riscv_soc__DOT__core__DOT__decode__DOT__regfile;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;

    // INTERNAL VARIABLES
    Vriscv_soc__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_soc___024root);  ///< Copying not allowed
  public:
    Vriscv_soc___024root(const char* name);
    ~Vriscv_soc___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vriscv_soc__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
