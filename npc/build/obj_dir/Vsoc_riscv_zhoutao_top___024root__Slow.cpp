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

void Vsoc_riscv_zhoutao_top___024root___eval_initial(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___eval_initial\n"); );
}

void Vsoc_riscv_zhoutao_top___024root___combo__TOP__1(Vsoc_riscv_zhoutao_top___024root* vlSelf);

void Vsoc_riscv_zhoutao_top___024root___eval_settle(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___eval_settle\n"); );
    // Body
    Vsoc_riscv_zhoutao_top___024root___combo__TOP__1(vlSelf);
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
    vlSelf->a = 0;
    vlSelf->b = 0;
    vlSelf->s = 0;
    vlSelf->y = 0;
}
