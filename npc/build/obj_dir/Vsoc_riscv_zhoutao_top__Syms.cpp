// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsoc_riscv_zhoutao_top__Syms.h"
#include "Vsoc_riscv_zhoutao_top.h"
#include "Vsoc_riscv_zhoutao_top___024root.h"

// FUNCTIONS
Vsoc_riscv_zhoutao_top__Syms::~Vsoc_riscv_zhoutao_top__Syms()
{
    delete __Vm_threadPoolp;
}

Vsoc_riscv_zhoutao_top__Syms::Vsoc_riscv_zhoutao_top__Syms(VerilatedContext* contextp, const char* namep,Vsoc_riscv_zhoutao_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    , __Vm_threadPoolp(new VlThreadPool(_vm_contextp__, 1, 0))
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
