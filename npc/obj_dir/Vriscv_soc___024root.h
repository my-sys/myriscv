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
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__execute__DOT__valid;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2;
    CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_opType;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_152;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_167;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__decode__DOT__opType;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_217;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_232;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_262;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_284;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_299;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT__instType;
    IData/*31:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__regInst;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2;
    IData/*31:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp;
    IData/*31:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp;
    VlWide<3>/*65:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_68;
    VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_pc_T_24;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc;
    VlWide<3>/*65:0*/ riscv_soc__DOT__core__DOT__decode__DOT___reg_imm_T_51;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__regPC;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__fetch__DOT___regPC_T_1;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data;
    QData/*62:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_imm;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT__reg_pc;
    QData/*63:0*/ riscv_soc__DOT__axi_ram__DOT__mem_rdata;
    VlUnpacked<QData/*63:0*/, 32> riscv_soc__DOT__core__DOT__decode__DOT__regfile;

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ riscv_soc__DOT____Vtogcov__clock;
        CData/*0:0*/ riscv_soc__DOT____Vtogcov__reset;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_valid_next_pc;
        CData/*2:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_opType;
        CData/*5:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_exuType;
        CData/*4:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs_addr;
        CData/*4:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_rs_addr;
        CData/*0:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_w_rs_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_next_pc_valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_w_rs_en;
        CData/*3:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__valid;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__w_rs_en;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__u_rs1_l_rs2;
        CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__s_rs1_l_rs2;
        CData/*1:0*/ riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__opType;
        CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType;
        CData/*0:0*/ __Vclklast__TOP__clock;
        IData/*31:0*/ riscv_soc__DOT____Vtogcov__io_difftest_inst;
        IData/*31:0*/ riscv_soc__DOT____Vtogcov__core_regInst;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp;
        IData/*31:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp;
        VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3;
        VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc;
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
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_28;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_29;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_30;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_reg_31;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__io_difftest_pc;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core_io_in_rdata;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core_io_out_raddr;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_0;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_1;
        QData/*63:0*/ riscv_soc__DOT____Vtogcov__core___05FWIRE_2;
    };
    struct {
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
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_rs_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_rs_addr;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data;
        QData/*62:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_MPORT_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data;
        QData/*63:0*/ riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_dest_rs_addr;
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
