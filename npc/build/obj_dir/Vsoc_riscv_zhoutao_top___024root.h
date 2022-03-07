// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_riscv_zhoutao_top.h for the primary calling header

#ifndef VERILATED_VSOC_RISCV_ZHOUTAO_TOP___024ROOT_H_
#define VERILATED_VSOC_RISCV_ZHOUTAO_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vsoc_riscv_zhoutao_top__Syms;
class Vsoc_riscv_zhoutao_top_VerilatedVcd;


//----------

VL_MODULE(Vsoc_riscv_zhoutao_top___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(in,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(out,0,0);

    // LOCAL SIGNALS
    CData/*3:0*/ soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_din;
    CData/*3:0*/ soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout;
    CData/*0:0*/ soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out;
    CData/*0:0*/ soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit;
    CData/*3:0*/ soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out;
    CData/*0:0*/ soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit;
    VlUnpacked<CData/*4:0*/, 9> soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 9> soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 9> soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*7:0*/, 9> soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 9> soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list;
    VlUnpacked<CData/*3:0*/, 9> soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<3>/*71:0*/ soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT____Vcellinp__stateMux__lut;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vsoc_riscv_zhoutao_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsoc_riscv_zhoutao_top___024root);  ///< Copying not allowed
  public:
    Vsoc_riscv_zhoutao_top___024root(const char* name);
    ~Vsoc_riscv_zhoutao_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vsoc_riscv_zhoutao_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
