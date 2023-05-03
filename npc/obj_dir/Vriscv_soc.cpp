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
    , io_difftest_commit{vlSymsp->TOP.io_difftest_commit}
    , io_difftest_irq{vlSymsp->TOP.io_difftest_irq}
    , io_difftest_peripheral{vlSymsp->TOP.io_difftest_peripheral}
    , io_difftest_inst{vlSymsp->TOP.io_difftest_inst}
    , io_difftest_reg_0{vlSymsp->TOP.io_difftest_reg_0}
    , io_difftest_reg_1{vlSymsp->TOP.io_difftest_reg_1}
    , io_difftest_reg_2{vlSymsp->TOP.io_difftest_reg_2}
    , io_difftest_reg_3{vlSymsp->TOP.io_difftest_reg_3}
    , io_difftest_reg_4{vlSymsp->TOP.io_difftest_reg_4}
    , io_difftest_reg_5{vlSymsp->TOP.io_difftest_reg_5}
    , io_difftest_reg_6{vlSymsp->TOP.io_difftest_reg_6}
    , io_difftest_reg_7{vlSymsp->TOP.io_difftest_reg_7}
    , io_difftest_reg_8{vlSymsp->TOP.io_difftest_reg_8}
    , io_difftest_reg_9{vlSymsp->TOP.io_difftest_reg_9}
    , io_difftest_reg_10{vlSymsp->TOP.io_difftest_reg_10}
    , io_difftest_reg_11{vlSymsp->TOP.io_difftest_reg_11}
    , io_difftest_reg_12{vlSymsp->TOP.io_difftest_reg_12}
    , io_difftest_reg_13{vlSymsp->TOP.io_difftest_reg_13}
    , io_difftest_reg_14{vlSymsp->TOP.io_difftest_reg_14}
    , io_difftest_reg_15{vlSymsp->TOP.io_difftest_reg_15}
    , io_difftest_reg_16{vlSymsp->TOP.io_difftest_reg_16}
    , io_difftest_reg_17{vlSymsp->TOP.io_difftest_reg_17}
    , io_difftest_reg_18{vlSymsp->TOP.io_difftest_reg_18}
    , io_difftest_reg_19{vlSymsp->TOP.io_difftest_reg_19}
    , io_difftest_reg_20{vlSymsp->TOP.io_difftest_reg_20}
    , io_difftest_reg_21{vlSymsp->TOP.io_difftest_reg_21}
    , io_difftest_reg_22{vlSymsp->TOP.io_difftest_reg_22}
    , io_difftest_reg_23{vlSymsp->TOP.io_difftest_reg_23}
    , io_difftest_reg_24{vlSymsp->TOP.io_difftest_reg_24}
    , io_difftest_reg_25{vlSymsp->TOP.io_difftest_reg_25}
    , io_difftest_reg_26{vlSymsp->TOP.io_difftest_reg_26}
    , io_difftest_reg_27{vlSymsp->TOP.io_difftest_reg_27}
    , io_difftest_reg_28{vlSymsp->TOP.io_difftest_reg_28}
    , io_difftest_reg_29{vlSymsp->TOP.io_difftest_reg_29}
    , io_difftest_reg_30{vlSymsp->TOP.io_difftest_reg_30}
    , io_difftest_reg_31{vlSymsp->TOP.io_difftest_reg_31}
    , io_difftest_pc{vlSymsp->TOP.io_difftest_pc}
    , io_inst_counter{vlSymsp->TOP.io_inst_counter}
    , io_difftest_mstatus{vlSymsp->TOP.io_difftest_mstatus}
    , io_difftest_mcause{vlSymsp->TOP.io_difftest_mcause}
    , io_difftest_mepc{vlSymsp->TOP.io_difftest_mepc}
    , io_difftest_mtvec{vlSymsp->TOP.io_difftest_mtvec}
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
