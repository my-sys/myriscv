// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_soc.h for the primary calling header

#ifndef VERILATED_VRISCV_SOC___024UNIT_H_
#define VERILATED_VRISCV_SOC___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vriscv_soc__Syms;
class Vriscv_soc_VerilatedVcd;


//----------

VL_MODULE(Vriscv_soc___024unit) {
  public:

    // INTERNAL VARIABLES
    Vriscv_soc__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_soc___024unit);  ///< Copying not allowed
  public:
    Vriscv_soc___024unit(const char* name);
    ~Vriscv_soc___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vriscv_soc__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
