// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vriscv_soc__Syms.h"
#include "Vriscv_soc___024unit.h"

extern "C" void ramCtrl(long long raddr, long long* rdata, svBit rflag, long long waddr, long long wdata, long long wmask, svBit wen);

VL_INLINE_OPT void Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*0:0*/ rflag, QData/*63:0*/ waddr, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    svBit rflag__Vcvt;
    for (size_t rflag__Vidx = 0; rflag__Vidx < 1; ++rflag__Vidx) rflag__Vcvt = rflag;
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    long long wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    svBit wen__Vcvt;
    for (size_t wen__Vidx = 0; wen__Vidx < 1; ++wen__Vidx) wen__Vcvt = wen;
    ramCtrl(raddr__Vcvt, &rdata__Vcvt, rflag__Vcvt, waddr__Vcvt, wdata__Vcvt, wmask__Vcvt, wen__Vcvt);
    rdata = rdata__Vcvt;
}
