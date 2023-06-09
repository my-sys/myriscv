// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISCV_SOC__SYMS_H_
#define VERILATED_VRISCV_SOC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vriscv_soc.h"

// INCLUDE MODULE CLASSES
#include "Vriscv_soc___024root.h"
#include "Vriscv_soc___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vriscv_soc__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vriscv_soc* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vriscv_soc___024root           TOP;
    Vriscv_soc___024unit           TOP____024unit;

    // CONSTRUCTORS
    Vriscv_soc__Syms(VerilatedContext* contextp, const char* namep, Vriscv_soc* modelp);
    ~Vriscv_soc__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
