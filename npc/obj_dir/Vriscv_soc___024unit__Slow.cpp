// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024unit.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========


void Vriscv_soc___024unit___ctor_var_reset(Vriscv_soc___024unit* vlSelf);

Vriscv_soc___024unit::Vriscv_soc___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vriscv_soc___024unit___ctor_var_reset(this);
}

void Vriscv_soc___024unit::__Vconfigure(Vriscv_soc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vriscv_soc___024unit::~Vriscv_soc___024unit() {
}

void Vriscv_soc___024unit___ctor_var_reset(Vriscv_soc___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc___024unit___ctor_var_reset\n"); );
}
