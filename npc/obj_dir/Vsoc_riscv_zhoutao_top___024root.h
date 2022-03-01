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
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(f,0,0);

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
