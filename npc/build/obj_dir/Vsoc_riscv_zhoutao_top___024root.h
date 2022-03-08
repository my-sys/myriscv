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
    VL_IN8(reset,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(seg0_o,7,0);
    VL_OUT8(seg1_o,7,0);
    VL_OUT8(seg2_o,7,0);
    VL_OUT8(seg3_o,7,0);
    VL_OUT8(seg4_o,7,0);
    VL_OUT8(seg5_o,7,0);
    VL_OUT8(seg6_o,7,0);
    VL_OUT8(seg7_o,7,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ soc_riscv_zhoutao_top__DOT__clrn;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__select;
        CData/*0:0*/ soc_riscv_zhoutao_top__DOT__nextdata_n;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__data;
        CData/*0:0*/ soc_riscv_zhoutao_top__DOT__ready;
        CData/*0:0*/ soc_riscv_zhoutao_top__DOT__overflow;
        CData/*6:0*/ soc_riscv_zhoutao_top__DOT__count;
        CData/*0:0*/ soc_riscv_zhoutao_top__DOT__cnt;
        CData/*3:0*/ soc_riscv_zhoutao_top__DOT__A;
        CData/*3:0*/ soc_riscv_zhoutao_top__DOT__B;
        CData/*3:0*/ soc_riscv_zhoutao_top__DOT__C;
        CData/*2:0*/ soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr;
        CData/*2:0*/ soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr;
        CData/*3:0*/ soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count;
        CData/*2:0*/ soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__ps2_clk_sync;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg0_line;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg1_line;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg2_line;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg3_line;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg4_line;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg5_line;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg6_line;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg7_line;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg0;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg1;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg2;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg3;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg4;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg5;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg6;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg7;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out;
        CData/*0:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out;
        CData/*0:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out;
        CData/*0:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out;
        CData/*0:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out;
        CData/*0:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out;
        CData/*0:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit;
        CData/*7:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out;
        CData/*0:0*/ soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit;
        SData/*9:0*/ soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__buffer;
        IData/*31:0*/ soc_riscv_zhoutao_top__DOT__digital_data;
        VlUnpacked<CData/*7:0*/, 8> soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo;
        VlUnpacked<SData/*11:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list;
    };
    struct {
        VlUnpacked<CData/*7:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 16> soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT____Vlvbound1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

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
