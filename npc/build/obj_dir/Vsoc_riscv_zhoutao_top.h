// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSOC_RISCV_ZHOUTAO_TOP_H_
#define VERILATED_VSOC_RISCV_ZHOUTAO_TOP_H_  // guard

#include "verilated_heavy.h"

class Vsoc_riscv_zhoutao_top__Syms;
class Vsoc_riscv_zhoutao_top___024root;
class VerilatedVcdC;
class Vsoc_riscv_zhoutao_top_VerilatedVcd;


// This class is the main interface to the Verilated model
class Vsoc_riscv_zhoutao_top VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vsoc_riscv_zhoutao_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&ps2_clk,0,0);
    VL_IN8(&ps2_data,0,0);
    VL_OUT8(&seg0_o,7,0);
    VL_OUT8(&seg1_o,7,0);
    VL_OUT8(&seg2_o,7,0);
    VL_OUT8(&seg3_o,7,0);
    VL_OUT8(&seg4_o,7,0);
    VL_OUT8(&seg5_o,7,0);
    VL_OUT8(&seg6_o,7,0);
    VL_OUT8(&seg7_o,7,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vsoc_riscv_zhoutao_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vsoc_riscv_zhoutao_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vsoc_riscv_zhoutao_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vsoc_riscv_zhoutao_top();
  private:
    VL_UNCOPYABLE(Vsoc_riscv_zhoutao_top);  ///< Copying not allowed

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
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
