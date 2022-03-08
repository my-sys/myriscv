// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_riscv_zhoutao_top.h for the primary calling header

#include "Vsoc_riscv_zhoutao_top___024root.h"
#include "Vsoc_riscv_zhoutao_top__Syms.h"

//==========


void Vsoc_riscv_zhoutao_top___024root___ctor_var_reset(Vsoc_riscv_zhoutao_top___024root* vlSelf);

Vsoc_riscv_zhoutao_top___024root::Vsoc_riscv_zhoutao_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsoc_riscv_zhoutao_top___024root___ctor_var_reset(this);
}

void Vsoc_riscv_zhoutao_top___024root::__Vconfigure(Vsoc_riscv_zhoutao_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsoc_riscv_zhoutao_top___024root::~Vsoc_riscv_zhoutao_top___024root() {
}

void Vsoc_riscv_zhoutao_top___024root___settle__TOP__1(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___settle__TOP__1\n"); );
    // Variables
    CData/*3:0*/ soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    CData/*7:0*/ soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2;
    // Body
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[0U] = 0xf71U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[1U] = 0xe79U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[2U] = 0xd5eU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[3U] = 0xc39U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[4U] = 0xb7cU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[5U] = 0xaf7U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[6U] = 0x96fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[7U] = 0x83fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[8U] = 0x707U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[9U] = 0x67dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[0xaU] = 0x56dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[0xbU] = 0x466U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[0xcU] = 0x34fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[0xdU] = 0x25bU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[0xeU] = 0x106U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[0xfU] = 0x3fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[0U] = 0xf71U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[1U] = 0xe79U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[2U] = 0xd5eU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[3U] = 0xc39U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[4U] = 0xb7cU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[5U] = 0xaf7U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[6U] = 0x96fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[7U] = 0x83fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[8U] = 0x707U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[9U] = 0x67dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[0xaU] = 0x56dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[0xbU] = 0x466U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[0xcU] = 0x34fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[0xdU] = 0x25bU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[0xeU] = 0x106U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[0xfU] = 0x3fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[0U] = 0xf71U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[1U] = 0xe79U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[2U] = 0xd5eU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[3U] = 0xc39U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[4U] = 0xb7cU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[5U] = 0xaf7U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[6U] = 0x96fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[7U] = 0x83fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[8U] = 0x707U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[9U] = 0x67dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[0xaU] = 0x56dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[0xbU] = 0x466U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[0xcU] = 0x34fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[0xdU] = 0x25bU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[0xeU] = 0x106U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[0xfU] = 0x3fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[0U] = 0xf71U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[1U] = 0xe79U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[2U] = 0xd5eU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[3U] = 0xc39U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[4U] = 0xb7cU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[5U] = 0xaf7U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[6U] = 0x96fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[7U] = 0x83fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[8U] = 0x707U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[9U] = 0x67dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[0xaU] = 0x56dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[0xbU] = 0x466U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[0xcU] = 0x34fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[0xdU] = 0x25bU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[0xeU] = 0x106U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[0xfU] = 0x3fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[0U] = 0xf71U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[1U] = 0xe79U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[2U] = 0xd5eU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[3U] = 0xc39U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[4U] = 0xb7cU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[5U] = 0xaf7U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[6U] = 0x96fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[7U] = 0x83fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[8U] = 0x707U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[9U] = 0x67dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[0xaU] = 0x56dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[0xbU] = 0x466U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[0xcU] = 0x34fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[0xdU] = 0x25bU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[0xeU] = 0x106U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[0xfU] = 0x3fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[0U] = 0xf71U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[1U] = 0xe79U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[2U] = 0xd5eU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[3U] = 0xc39U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[4U] = 0xb7cU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[5U] = 0xaf7U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[6U] = 0x96fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[7U] = 0x83fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[8U] = 0x707U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[9U] = 0x67dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[0xaU] = 0x56dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[0xbU] = 0x466U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[0xcU] = 0x34fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[0xdU] = 0x25bU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[0xeU] = 0x106U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[0xfU] = 0x3fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[0U] = 0xf71U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[1U] = 0xe79U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[2U] = 0xd5eU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[3U] = 0xc39U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[4U] = 0xb7cU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[5U] = 0xaf7U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[6U] = 0x96fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[7U] = 0x83fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[8U] = 0x707U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[9U] = 0x67dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[0xaU] = 0x56dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[0xbU] = 0x466U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[0xcU] = 0x34fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[0xdU] = 0x25bU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[0xeU] = 0x106U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[0xfU] = 0x3fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[0U] = 0xf71U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[1U] = 0xe79U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[2U] = 0xd5eU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[3U] = 0xc39U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[4U] = 0xb7cU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[5U] = 0xaf7U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[6U] = 0x96fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[7U] = 0x83fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[8U] = 0x707U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[9U] = 0x67dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[0xaU] = 0x56dU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[0xbU] = 0x466U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[0xcU] = 0x34fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[0xdU] = 0x25bU;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[0xeU] = 0x106U;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[0xfU] = 0x3fU;
    vlSelf->soc_riscv_zhoutao_top__DOT__data = vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo
        [vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr];
    vlSelf->seg0_o = ((1U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg0)
                       : 0U);
    vlSelf->seg1_o = ((2U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg1)
                       : 0U);
    vlSelf->seg2_o = ((4U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg2)
                       : 0U);
    vlSelf->seg3_o = ((8U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg3)
                       : 0U);
    vlSelf->seg4_o = ((0x10U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg4)
                       : 0U);
    vlSelf->seg5_o = ((0x20U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg5)
                       : 0U);
    vlSelf->seg6_o = ((0x40U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg6)
                       : 0U);
    vlSelf->seg7_o = ((0x80U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg7)
                       : 0U);
    vlSelf->soc_riscv_zhoutao_top__DOT__A = 0U;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = 0U;
    vlSelf->soc_riscv_zhoutao_top__DOT__C = 0U;
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                                                   >> 7U)));
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)));
    }
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1 
        = (0xfU & ((0xfffffeU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                                 << 1U)) | (0xffffffU 
                                            & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                                >> 3U) 
                                               | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                  >> 7U)))));
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2 
        = (0xffU & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                     << 5U) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                               << 1U)));
    vlSelf->soc_riscv_zhoutao_top__DOT__A = soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU & 
                                             ((IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2) 
                                              >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU & (IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                                                   >> 6U)));
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__A = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)));
    }
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1 
        = (0xfU & ((0xfffffeU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                                 << 1U)) | (0xffffffU 
                                            & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                                >> 3U) 
                                               | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                  >> 7U)))));
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2 
        = (0xffU & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                     << 5U) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                               << 1U)));
    vlSelf->soc_riscv_zhoutao_top__DOT__A = soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU & 
                                             ((IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2) 
                                              >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU & (IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                                                   >> 5U)));
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__A = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)));
    }
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1 
        = (0xfU & ((0xfffffeU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                                 << 1U)) | (0xffffffU 
                                            & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                                >> 3U) 
                                               | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                  >> 7U)))));
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2 
        = (0xffU & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                     << 5U) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                               << 1U)));
    vlSelf->soc_riscv_zhoutao_top__DOT__A = soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU & 
                                             ((IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2) 
                                              >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU & (IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                                                   >> 4U)));
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__A = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)));
    }
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1 
        = (0xfU & ((0xfffffeU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                                 << 1U)) | (0xffffffU 
                                            & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                                >> 3U) 
                                               | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                  >> 7U)))));
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2 
        = (0xffU & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                     << 5U) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                               << 1U)));
    vlSelf->soc_riscv_zhoutao_top__DOT__A = soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU & 
                                             ((IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2) 
                                              >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU & (IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                                                   >> 3U)));
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__A = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)));
    }
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1 
        = (0xfU & ((0xfffffeU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                                 << 1U)) | (0xffffffU 
                                            & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                                >> 3U) 
                                               | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                  >> 7U)))));
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2 
        = (0xffU & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                     << 5U) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                               << 1U)));
    vlSelf->soc_riscv_zhoutao_top__DOT__A = soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU & 
                                             ((IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2) 
                                              >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU & (IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                                                   >> 2U)));
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__A = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)));
    }
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1 
        = (0xfU & ((0xfffffeU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                                 << 1U)) | (0xffffffU 
                                            & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                                >> 3U) 
                                               | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                  >> 7U)))));
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2 
        = (0xffU & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                     << 5U) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                               << 1U)));
    vlSelf->soc_riscv_zhoutao_top__DOT__A = soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU & 
                                             ((IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2) 
                                              >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU & (IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                                                   >> 1U)));
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__A = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)));
    }
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1 
        = (0xfU & ((0xfffffeU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                                 << 1U)) | (0xffffffU 
                                            & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                                >> 3U) 
                                               | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                  >> 7U)))));
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2 
        = (0xffU & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                     << 5U) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                               << 1U)));
    vlSelf->soc_riscv_zhoutao_top__DOT__A = soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU & 
                                             ((IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2) 
                                              >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU & (IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count)));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[1U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[2U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[3U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[5U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[6U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[7U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[9U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [9U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[0xaU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [0xaU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[0xbU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [0xbU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[0xcU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [0xcU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[0xdU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [0xdU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[0xeU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [0xeU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[0xfU] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
           [0xfU]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [0U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [1U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [2U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [3U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [4U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [5U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [6U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [7U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [8U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[9U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [9U] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[0xaU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [0xaU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[0xbU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [0xbU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[0xcU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [0xcU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[0xdU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [0xdU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[0xeU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [0xeU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[0xfU] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list
                   [0xfU] >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | (5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)((5U == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg0_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                    >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg1_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                    >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg2_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                    >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg3_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                    >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg4_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                    >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg5_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                    >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg6_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
            >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                        >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg7_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out;
}

void Vsoc_riscv_zhoutao_top___024root___eval_initial(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vsoc_riscv_zhoutao_top___024root___eval_settle(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___eval_settle\n"); );
    // Body
    Vsoc_riscv_zhoutao_top___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vsoc_riscv_zhoutao_top___024root___final(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___final\n"); );
}

void Vsoc_riscv_zhoutao_top___024root___ctor_var_reset(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->seg0_o = 0;
    vlSelf->seg1_o = 0;
    vlSelf->seg2_o = 0;
    vlSelf->seg3_o = 0;
    vlSelf->seg4_o = 0;
    vlSelf->seg5_o = 0;
    vlSelf->seg6_o = 0;
    vlSelf->seg7_o = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__clrn = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__select = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__nextdata_n = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_data = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__data = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__ready = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__overflow = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__count = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__cnt = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__A = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__C = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__buffer = 0;
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__ps2_clk_sync = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT____Vlvbound1 = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg0_line = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg1_line = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg2_line = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg3_line = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg4_line = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg5_line = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg6_line = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg7_line = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg0 = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg1 = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg2 = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg3 = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg4 = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg5 = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg6 = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg7 = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
