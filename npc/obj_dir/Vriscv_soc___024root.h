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


//----------

VL_MODULE(Vriscv_soc___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_loadingValues,0,0);
    VL_OUT8(io_outputValid,0,0);
    VL_IN16(io_value1,15,0);
    VL_IN16(io_value2,15,0);
    VL_OUT16(io_outputGCD,15,0);

    // LOCAL SIGNALS
    SData/*15:0*/ riscv_soc__DOT__x;
    SData/*15:0*/ riscv_soc__DOT__y;

    // LOCAL VARIABLES
    CData/*0:0*/ riscv_soc__DOT____Vtogcov__clock;
    CData/*0:0*/ riscv_soc__DOT____Vtogcov__reset;
    CData/*0:0*/ riscv_soc__DOT____Vtogcov__io_loadingValues;
    CData/*0:0*/ riscv_soc__DOT____Vtogcov__io_outputValid;
    CData/*0:0*/ __Vclklast__TOP__clock;
    SData/*15:0*/ riscv_soc__DOT____Vtogcov__io_value1;
    SData/*15:0*/ riscv_soc__DOT____Vtogcov__io_value2;
    SData/*15:0*/ riscv_soc__DOT____Vtogcov__io_outputGCD;
    SData/*15:0*/ riscv_soc__DOT____Vtogcov__x;
    SData/*15:0*/ riscv_soc__DOT____Vtogcov__y;

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
