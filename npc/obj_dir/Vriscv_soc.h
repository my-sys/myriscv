// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VRISCV_SOC_H_
#define VERILATED_VRISCV_SOC_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vriscv_soc__Syms;
class Vriscv_soc___024root;
class Vriscv_soc___024unit;


// This class is the main interface to the Verilated model
class Vriscv_soc VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vriscv_soc__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&io_difftest_commit,0,0);
    VL_OUT8(&io_difftest_irq,0,0);
    VL_OUT8(&io_difftest_peripheral,0,0);
    VL_OUT(&io_difftest_inst,31,0);
    VL_OUT64(&io_difftest_reg_0,63,0);
    VL_OUT64(&io_difftest_reg_1,63,0);
    VL_OUT64(&io_difftest_reg_2,63,0);
    VL_OUT64(&io_difftest_reg_3,63,0);
    VL_OUT64(&io_difftest_reg_4,63,0);
    VL_OUT64(&io_difftest_reg_5,63,0);
    VL_OUT64(&io_difftest_reg_6,63,0);
    VL_OUT64(&io_difftest_reg_7,63,0);
    VL_OUT64(&io_difftest_reg_8,63,0);
    VL_OUT64(&io_difftest_reg_9,63,0);
    VL_OUT64(&io_difftest_reg_10,63,0);
    VL_OUT64(&io_difftest_reg_11,63,0);
    VL_OUT64(&io_difftest_reg_12,63,0);
    VL_OUT64(&io_difftest_reg_13,63,0);
    VL_OUT64(&io_difftest_reg_14,63,0);
    VL_OUT64(&io_difftest_reg_15,63,0);
    VL_OUT64(&io_difftest_reg_16,63,0);
    VL_OUT64(&io_difftest_reg_17,63,0);
    VL_OUT64(&io_difftest_reg_18,63,0);
    VL_OUT64(&io_difftest_reg_19,63,0);
    VL_OUT64(&io_difftest_reg_20,63,0);
    VL_OUT64(&io_difftest_reg_21,63,0);
    VL_OUT64(&io_difftest_reg_22,63,0);
    VL_OUT64(&io_difftest_reg_23,63,0);
    VL_OUT64(&io_difftest_reg_24,63,0);
    VL_OUT64(&io_difftest_reg_25,63,0);
    VL_OUT64(&io_difftest_reg_26,63,0);
    VL_OUT64(&io_difftest_reg_27,63,0);
    VL_OUT64(&io_difftest_reg_28,63,0);
    VL_OUT64(&io_difftest_reg_29,63,0);
    VL_OUT64(&io_difftest_reg_30,63,0);
    VL_OUT64(&io_difftest_reg_31,63,0);
    VL_OUT64(&io_difftest_pc,63,0);
    VL_OUT64(&io_inst_counter,63,0);
    VL_OUT64(&io_difftest_mstatus,63,0);
    VL_OUT64(&io_difftest_mcause,63,0);
    VL_OUT64(&io_difftest_mepc,63,0);
    VL_OUT64(&io_difftest_mtvec,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vriscv_soc___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vriscv_soc___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vriscv_soc(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vriscv_soc(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vriscv_soc();
  private:
    VL_UNCOPYABLE(Vriscv_soc);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
