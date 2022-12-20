// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef VERILATED_VRISCV_SOC___024ROOT_H_
#define VERILATED_VRISCV_SOC___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class Vriscv_soc__Syms;
class Vriscv_soc_VerilatedVcd;
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

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute_io_out_w_rs_en;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute_io_out_exuType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute_io_out_w_mem_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute_io_out_flush;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__decode_io_in_stall;
        CData/*2:0*/ riscv_soc__DOT__core__DOT__decode_io_out_opType;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__decode_io_out_exuType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back_io_in_w_ok;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__is_read_mem;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__is_read_inst;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__tem_reg_is_read_inst;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__tem_reg_is_read_mem;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__stall;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__pc_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___reg_next_pc_valid_T;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___GEN_2;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_w_mem_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_out_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_flush;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en;
        CData/*3:0*/ riscv_soc__DOT__core__DOT__execute__DOT__valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT___GEN_11;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT___GEN_13;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
        CData/*6:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall;
        CData/*6:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_3;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_4;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr;
        CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_opType;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_stall;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT__stall;
        CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_165;
        CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_195;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_232;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_262;
        CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_299;
        CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT__instType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT__temp_stall;
    };
    struct {
        CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT___GEN_10;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall;
        CData/*7:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wstrb;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_avalid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT___GEN_0;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT___GEN_1;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT___GEN_6;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__fetch_io_out_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__handle_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__temp_reg_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___reg_inst_T_3;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_inst;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1;
        VlWide<3>/*65:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23;
        VlWide<3>/*65:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2;
        VlWide<3>/*66:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2;
        VlWide<3>/*66:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1;
        VlWide<5>/*129:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result;
        VlWide<3>/*65:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__pp;
        VlWide<3>/*69:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22;
        VlWide<5>/*132:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst;
        QData/*63:0*/ riscv_soc__DOT__core_io_out_raddr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back_io_out_result_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__tem_reg_rdata;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__regPC;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___reg_next_pc_T;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___regPC_T_3;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_rs1_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_address_result;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_result_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data;
    };
    struct {
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT___rs2_data_T_4;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data;
        QData/*62:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_result;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_imm;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_51;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wdata;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__mem_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__mem_data_result;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT___GEN_35;
        QData/*63:0*/ riscv_soc__DOT__axi_ram__DOT__mem_rdata;
        VlUnpacked<QData/*63:0*/, 32> riscv_soc__DOT__core__DOT__decode__DOT__regfile;
    };

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ riscv_soc__DOT____Vtogcov__clock;
        CData/*0:0*/ riscv_soc__DOT____Vtogcov__reset;
        CData/*0:0*/ riscv_soc__DOT____Vtogcov__io_difftest_commit;
        CData/*0:0*/ riscv_soc__DOT____Vtogcov__core_io_out_wen;
        CData/*7:0*/ riscv_soc__DOT____Vtogcov__core_io_out_wstrb;
        CData/*0:0*/ riscv_soc__DOT____Vtogcov__core_difftest_commit;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cpu_in_avalid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cpu_out_rvalid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__d_cache_io_cpu_in_avalid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__d_cache_io_cpu_out_rvalid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_de_stall;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_wb_stall;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_ex_stall;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_valid_next_pc;
        CData/*2:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_opType;
        CData/*5:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_exuType;
        CData/*4:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr;
        CData/*4:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_addr;
        CData/*4:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs_addr;
        CData/*4:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_wb_rs_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_wb_w_rs_en;
        CData/*4:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_rs_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_w_rs_en;
        CData/*5:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType;
        CData/*4:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_rs2_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_mem_avalid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_w_mem_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__decode_io_in_stall;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__is_read_mem;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__is_read_inst;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__stall;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_next_pc_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_w_rs_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_w_mem_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__mu_exu_io_in_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__mu_exu_io_out_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_flush;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_w_rs_en;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_exuType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_mem_avalid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_w_mem_en;
        CData/*3:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__w_rs_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__u_rs1_l_rs2;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__s_rs1_l_rs2;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__div_io_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__div_io_stall;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__div_io_out_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__mul_io_stall;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__mul_io_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__mul_io_out_valid;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_state;
        CData/*6:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_state;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_exuType;
        CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__stall;
        CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType;
    };
    struct {
        CData/*0:0*/ riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__temp_stall;
        CData/*4:0*/ riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_rs_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_w_rs_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_ls_state;
        CData/*5:0*/ riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType;
        CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state;
        CData/*0:0*/ __Vclklast__TOP__clock;
        IData/*31:0*/ riscv_soc__DOT____Vtogcov__io_difftest_inst;
        IData/*31:0*/ riscv_soc__DOT____Vtogcov__core_difftest_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_out_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__handle_inst;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__temp_reg_inst;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2;
        VlWide<3>/*66:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2;
        VlWide<3>/*66:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1;
        VlWide<5>/*129:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result;
        VlWide<3>/*65:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__pp;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_0;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_1;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_2;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_3;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_4;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_5;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_6;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_7;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_8;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_9;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_10;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_11;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_12;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_13;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_14;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_15;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_16;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_17;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_18;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_19;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_20;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_21;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_22;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_23;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_24;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_25;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_26;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_27;
    };
    struct {
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_28;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_29;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_30;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_31;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_pc;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core_io_in_rdata;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core_io_out_waddr;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core_io_out_wdata;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core_io_out_raddr;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core_difftest_pc;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_0;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_1;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_2;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_3;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_4;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_5;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_6;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_7;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_8;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_9;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_10;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_11;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_12;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_13;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_14;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_15;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_16;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_17;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_18;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_19;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_20;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_21;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_22;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_23;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_24;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_25;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_26;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_27;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_28;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_29;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_30;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_31;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__difftest_inst;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cpu_in_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cpu_out_rdata;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_out_pc1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_wb_result_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_rs_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_rs2_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_mem_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_op_data1;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_op_data2;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_rs1_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__mu_exu_io_result_data;
    };
    struct {
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_rs_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data;
        QData/*62:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__div_io_result;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__mul_io_result;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_MPORT_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_result_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_data_result;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_pc;
        QData/*63:0*/ __Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__regPC;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vriscv_soc__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

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
