// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/xingk/ysyx-workbench/npc/playground/test/vsrc/ram.v:1:30
    extern void ramCtrl(long long raddr, long long* rdata, svBit rflag, long long waddr, long long wdata, long long wmask, svBit wen);

#ifdef __cplusplus
}
#endif
