// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vriscv_soc.h"
#include "Vriscv_soc__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vriscv_soc::Vriscv_soc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vriscv_soc__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vriscv_soc::Vriscv_soc(const char* _vcname__)
    : Vriscv_soc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vriscv_soc::~Vriscv_soc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vriscv_soc___024root___eval_debug_assertions(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG
void Vriscv_soc___024root___eval_static(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___eval_initial(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___eval_settle(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___eval(Vriscv_soc___024root* vlSelf);

void Vriscv_soc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_soc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vriscv_soc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vriscv_soc___024root___eval_static(&(vlSymsp->TOP));
        Vriscv_soc___024root___eval_initial(&(vlSymsp->TOP));
        Vriscv_soc___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vriscv_soc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vriscv_soc::eventsPending() { return false; }

uint64_t Vriscv_soc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vriscv_soc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vriscv_soc___024root___eval_final(Vriscv_soc___024root* vlSelf);

VL_ATTR_COLD void Vriscv_soc::final() {
    Vriscv_soc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vriscv_soc::hierName() const { return vlSymsp->name(); }
const char* Vriscv_soc::modelName() const { return "Vriscv_soc"; }
unsigned Vriscv_soc::threads() const { return 1; }
