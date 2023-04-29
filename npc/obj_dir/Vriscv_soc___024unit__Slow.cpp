// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc___024unit.h"

void Vriscv_soc___024unit___ctor_var_reset(Vriscv_soc___024unit* vlSelf);

Vriscv_soc___024unit::Vriscv_soc___024unit(Vriscv_soc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vriscv_soc___024unit___ctor_var_reset(this);
}

void Vriscv_soc___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vriscv_soc___024unit::~Vriscv_soc___024unit() {
}
