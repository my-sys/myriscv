// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VRISCV_SOC__DPI_H_
#define VERILATED_VRISCV_SOC__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/xingk/ysyx-workbench/npc/verilog/test/vsrc/ram.v:1:30
    extern void ramCtrl(long long raddr, long long* rdata, svBit rflag, long long waddr, long long wdata, long long wmask, svBit wen);
    // DPI import at /home/xingk/ysyx-workbench/npc/verilog/src/core/commit.v:166:30
    extern void set_difftest_commit_ptr(const svOpenArrayHandle a);
    // DPI import at /home/xingk/ysyx-workbench/npc/verilog/src/core/commit.v:163:30
    extern void set_difftest_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/xingk/ysyx-workbench/npc/verilog/src/core/commit.v:167:30
    extern void set_difftest_inst_counter_ptr(const svOpenArrayHandle a);
    // DPI import at /home/xingk/ysyx-workbench/npc/verilog/src/core/commit.v:164:30
    extern void set_difftest_inst_ptr(const svOpenArrayHandle a);
    // DPI import at /home/xingk/ysyx-workbench/npc/verilog/src/core/commit.v:168:30
    extern void set_difftest_irq(const svOpenArrayHandle a);
    // DPI import at /home/xingk/ysyx-workbench/npc/verilog/src/core/csr_reg.v:126:30
    extern void set_difftest_mcause_ptr(const svOpenArrayHandle a);
    // DPI import at /home/xingk/ysyx-workbench/npc/verilog/src/core/csr_reg.v:128:30
    extern void set_difftest_mepc_ptr(const svOpenArrayHandle a);
    // DPI import at /home/xingk/ysyx-workbench/npc/verilog/src/core/csr_reg.v:125:30
    extern void set_difftest_mstatus_ptr(const svOpenArrayHandle a);
    // DPI import at /home/xingk/ysyx-workbench/npc/verilog/src/core/csr_reg.v:127:30
    extern void set_difftest_mtvec_ptr(const svOpenArrayHandle a);
    // DPI import at /home/xingk/ysyx-workbench/npc/verilog/src/core/commit.v:165:30
    extern void set_difftest_pc_ptr(const svOpenArrayHandle a);
    // DPI import at /home/xingk/ysyx-workbench/npc/verilog/src/core/commit.v:169:30
    extern void set_difftest_peripheral(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard
