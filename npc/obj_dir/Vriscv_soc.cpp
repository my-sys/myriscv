// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vriscv_soc.h"
#include "Vriscv_soc__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vriscv_soc::Vriscv_soc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vriscv_soc__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
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
    , io_difftest_inst{vlSymsp->TOP.io_difftest_inst}
    , io_difftest_commit{vlSymsp->TOP.io_difftest_commit}
    , io_inst_counter{vlSymsp->TOP.io_inst_counter}
    , io_difftest_irq{vlSymsp->TOP.io_difftest_irq}
    , io_difftest_mstatus{vlSymsp->TOP.io_difftest_mstatus}
    , io_difftest_mcause{vlSymsp->TOP.io_difftest_mcause}
    , io_difftest_mepc{vlSymsp->TOP.io_difftest_mepc}
    , io_difftest_mtvec{vlSymsp->TOP.io_difftest_mtvec}
    , io_difftest_peripheral{vlSymsp->TOP.io_difftest_peripheral}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
}

Vriscv_soc::Vriscv_soc(const char* _vcname__)
    : Vriscv_soc(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vriscv_soc::~Vriscv_soc() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vriscv_soc___024root___eval_initial(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___eval_settle(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___eval(Vriscv_soc___024root* vlSelf);
QData Vriscv_soc___024root___change_request(Vriscv_soc___024root* vlSelf);
#ifdef VL_DEBUG
void Vriscv_soc___024root___eval_debug_assertions(Vriscv_soc___024root* vlSelf);
#endif  // VL_DEBUG
void Vriscv_soc___024root___final(Vriscv_soc___024root* vlSelf);

static void _eval_initial_loop(Vriscv_soc__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vriscv_soc___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vriscv_soc___024root___eval_settle(&(vlSymsp->TOP));
        Vriscv_soc___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vriscv_soc___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 5810, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vriscv_soc___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vriscv_soc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_soc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vriscv_soc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vriscv_soc___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vriscv_soc___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 5810, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vriscv_soc___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vriscv_soc::final() {
    Vriscv_soc___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vriscv_soc::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vriscv_soc::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vriscv_soc___024root__traceInitTop(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv_soc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vriscv_soc___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vriscv_soc___024root__traceRegister(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);

void Vriscv_soc::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vriscv_soc___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
