// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef VERILATED_VRISCV_SOC___024ROOT_H_
#define VERILATED_VRISCV_SOC___024ROOT_H_  // guard

#include "verilated.h"

class Vriscv_soc__Syms;
class Vriscv_soc___024unit;


class Vriscv_soc___024root final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_soc___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ riscv_soc__DOT__core_clock;
        CData/*0:0*/ riscv_soc__DOT__core_reset;
        CData/*0:0*/ riscv_soc__DOT__core_io_axi_bus_aw_valid;
        CData/*0:0*/ riscv_soc__DOT__core_io_axi_bus_w_valid;
        CData/*0:0*/ riscv_soc__DOT__core_io_axi_bus_w_bits_wlast;
        CData/*0:0*/ riscv_soc__DOT__core_io_axi_bus_ar_valid;
        CData/*0:0*/ riscv_soc__DOT__core_io_axi_bus_r_valid;
        CData/*0:0*/ riscv_soc__DOT__core_io_axi_bus_r_bits_rlast;
        CData/*5:0*/ riscv_soc__DOT__core_io_sram0_addr;
        CData/*5:0*/ riscv_soc__DOT__core_io_sram4_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache_io_flush;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache_io_cpu_raddr_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache_io_is_fence_i;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_bits_rlast;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache_io_cache_bus_r_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache_io_cpu_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_bits_rlast;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache_io_cache_bus_r_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_io_bus1_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_io_bus2_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch_io_flush;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch_io_put_pc_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute_io_wb_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute_io_csr_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute_io_commit;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass0_val_T;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_5;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_2;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_7;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_21;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_32;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_33;
    };
    struct {
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_40;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_54;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT____VdfgTmp_h59dedee5__0;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
        CData/*7:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index;
        CData/*3:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag;
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
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_13;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_79;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_14;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_91;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_92;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_93;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___T_17;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_95;
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
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_haa56ce0f__0;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdb124cd4__0;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_h1e8875ce__0;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT____VdfgTmp_hdaab1c9d__0;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___T;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___T_4;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___T_6;
    };
    struct {
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_10;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_23;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_head_T_1;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_tail_T_1;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_head_T_1;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_tail_T_1;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___GEN_43;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail;
        CData/*2:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq;
        CData/*2:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__result_size;
        CData/*2:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_pht_data;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid;
        CData/*2:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_1;
        CData/*2:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_3;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_mispredict;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__ready;
        CData/*3:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT___valid_T_3;
        CData/*2:0*/ riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_taken;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_exception;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__time_irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__soft_irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_commit;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____VdfgTmp_hd9109502__0;
    };
    struct {
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__valid_next_pc;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready;
        CData/*7:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en;
        CData/*6:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_32;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
        CData/*6:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt;
        CData/*6:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready;
        CData/*6:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21;
        CData/*6:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_39;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
        CData/*6:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
        CData/*6:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt;
        CData/*6:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_valid;
        CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_opType;
        CData/*6:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__decode__DOT__fun_exuType;
        CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT__fun_op;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT__temp_kk;
        CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT__instType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT___reg_msip_T_1;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_5;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_6;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT___T_2;
        CData/*3:0*/ riscv_soc__DOT__axi_ram__DOT__reg_rlen;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT__reg_ar_ready;
    };
    struct {
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT__reg_r_valid;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT__reg_r_state;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT___T_1;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT___GEN_1;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT___GEN_2;
        CData/*7:0*/ riscv_soc__DOT__axi_ram__DOT___GEN_4;
        CData/*0:0*/ riscv_soc__DOT__axi_ram__DOT___GEN_7;
        CData/*3:0*/ riscv_soc__DOT__axi_ram__DOT___GEN_18;
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
        CData/*0:0*/ riscv_soc__DOT__sram0__DOT__wen;
        CData/*0:0*/ riscv_soc__DOT__sram2__DOT__wen;
        CData/*0:0*/ riscv_soc__DOT__sram4__DOT__wen;
        CData/*0:0*/ riscv_soc__DOT__sram6__DOT__wen;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb;
        SData/*15:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_1;
        SData/*15:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_2;
        SData/*15:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_80;
        SData/*11:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr;
        SData/*11:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__fetch_io_put_pc_bits_inst;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82;
        VlWide<3>/*66:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166;
        VlWide<3>/*66:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__btb_data;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_19;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_21;
        VlWide<4>/*126:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data;
        VlWide<4>/*126:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T;
        VlWide<4>/*126:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor;
        VlWide<3>/*65:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem;
        VlWide<3>/*65:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q;
        VlWide<5>/*131:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18;
        VlWide<3>/*66:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_30;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_4;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___mul_data2_T_6;
    };
    struct {
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2;
        VlWide<3>/*66:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2;
        VlWide<5>/*129:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1;
        VlWide<5>/*129:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result;
        VlWide<5>/*130:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1;
        VlWide<3>/*66:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T;
        VlWide<5>/*130:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_15;
        VlWide<5>/*132:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_16;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_imm;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst;
        VlWide<4>/*127:0*/ riscv_soc__DOT__sram0__DOT__Q;
        VlWide<4>/*127:0*/ riscv_soc__DOT__sram1__DOT__Q;
        VlWide<4>/*127:0*/ riscv_soc__DOT__sram2__DOT__Q;
        VlWide<4>/*127:0*/ riscv_soc__DOT__sram3__DOT__Q;
        VlWide<4>/*127:0*/ riscv_soc__DOT__sram4__DOT__Q;
        VlWide<4>/*127:0*/ riscv_soc__DOT__sram4__DOT__bwen;
        VlWide<4>/*127:0*/ riscv_soc__DOT__sram4__DOT___sram_T;
        VlWide<4>/*127:0*/ riscv_soc__DOT__sram4__DOT__read_sram;
        VlWide<4>/*127:0*/ riscv_soc__DOT__sram5__DOT__Q;
        VlWide<4>/*127:0*/ riscv_soc__DOT__sram6__DOT__Q;
        VlWide<4>/*127:0*/ riscv_soc__DOT__sram6__DOT__read_sram;
        VlWide<4>/*127:0*/ riscv_soc__DOT__sram7__DOT__Q;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ riscv_soc__DOT__core_io_axi_bus_ar_bits_araddr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute_io_mie;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_valid_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram1_valid_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_10;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_13;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_34;
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
    };
    struct {
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1;
        QData/*59:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_33;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_83;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_94;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_0_T_2;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_br_info_target_next_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_rdata;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mepc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_mstatus;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__next_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_data_result;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__inst_counter;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT___inst_counter_T_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle;
    };
    struct {
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_3;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mepc_T_2;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcause_T_3;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mtval_T_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_9;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcycle_T_2;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_minstret_T_3;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtimecmp_T;
        QData/*63:0*/ riscv_soc__DOT__axi_ram__DOT__mem_rdata;
        QData/*63:0*/ riscv_soc__DOT__axi_ram__DOT__reg_raddr;
        QData/*63:0*/ riscv_soc__DOT__axi_ram__DOT___GEN_9;
        QData/*63:0*/ riscv_soc__DOT__axi_ram__DOT__reg_w_addr;
        QData/*63:0*/ riscv_soc__DOT__axi_ram__DOT___reg_w_addr_T_1;
        VlUnpacked<QData/*63:0*/, 4> riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo;
        VlUnpacked<CData/*0:0*/, 4> riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo;
        VlUnpacked<QData/*63:0*/, 4> riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc;
        VlUnpacked<IData/*31:0*/, 4> riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst;
        VlUnpacked<CData/*0:0*/, 4> riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre;
        VlUnpacked<CData/*0:0*/, 4> riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB;
        VlUnpacked<QData/*63:0*/, 4> riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS;
        VlUnpacked<CData/*1:0*/, 64> riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT;
        VlUnpacked<QData/*63:0*/, 32> riscv_soc__DOT__core__DOT__commit__DOT__reg_file;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__sram0__DOT__sram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__sram1__DOT__sram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__sram2__DOT__sram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__sram3__DOT__sram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__sram4__DOT__sram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__sram5__DOT__sram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__sram6__DOT__sram;
        VlUnpacked<VlWide<4>/*127:0*/, 64> riscv_soc__DOT__sram7__DOT__sram;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vriscv_soc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_soc___024root(Vriscv_soc__Syms* symsp, const char* v__name);
    ~Vriscv_soc___024root();
    VL_UNCOPYABLE(Vriscv_soc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
