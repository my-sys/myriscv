// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_riscv_zhoutao_top__Syms.h"


void Vsoc_riscv_zhoutao_top___024root__traceInitSub0(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsoc_riscv_zhoutao_top___024root__traceInitTop(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsoc_riscv_zhoutao_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vsoc_riscv_zhoutao_top___024root__traceInitSub0(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"rst", false,-1);
        tracep->declBus(c+3,"led", false,-1, 15,0);
        tracep->declBit(c+1,"soc_riscv_zhoutao_top clk", false,-1);
        tracep->declBit(c+2,"soc_riscv_zhoutao_top rst", false,-1);
        tracep->declBus(c+3,"soc_riscv_zhoutao_top led", false,-1, 15,0);
        tracep->declBit(c+1,"soc_riscv_zhoutao_top light1 clk", false,-1);
        tracep->declBit(c+2,"soc_riscv_zhoutao_top light1 rst", false,-1);
        tracep->declBus(c+3,"soc_riscv_zhoutao_top light1 led", false,-1, 15,0);
        tracep->declBus(c+4,"soc_riscv_zhoutao_top light1 count", false,-1, 31,0);
    }
}

void Vsoc_riscv_zhoutao_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vsoc_riscv_zhoutao_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vsoc_riscv_zhoutao_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vsoc_riscv_zhoutao_top___024root__traceRegister(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vsoc_riscv_zhoutao_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vsoc_riscv_zhoutao_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vsoc_riscv_zhoutao_top___024root__traceCleanup, vlSelf);
    }
}

void Vsoc_riscv_zhoutao_top___024root__traceFullSub0(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsoc_riscv_zhoutao_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsoc_riscv_zhoutao_top___024root* const __restrict vlSelf = static_cast<Vsoc_riscv_zhoutao_top___024root*>(voidSelf);
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsoc_riscv_zhoutao_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vsoc_riscv_zhoutao_top___024root__traceFullSub0(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->rst));
        tracep->fullSData(oldp+3,(vlSelf->led),16);
        tracep->fullIData(oldp+4,(vlSelf->soc_riscv_zhoutao_top__DOT__light1__DOT__count),32);
    }
}
