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
        tracep->declBit(c+10,"clk", false,-1);
        tracep->declBit(c+11,"reset", false,-1);
        tracep->declBit(c+12,"hsync", false,-1);
        tracep->declBit(c+13,"vsync", false,-1);
        tracep->declBit(c+14,"valid", false,-1);
        tracep->declBus(c+15,"vga_r", false,-1, 7,0);
        tracep->declBus(c+16,"vga_g", false,-1, 7,0);
        tracep->declBus(c+17,"vga_b", false,-1, 7,0);
        tracep->declBit(c+10,"soc_riscv_zhoutao_top clk", false,-1);
        tracep->declBit(c+11,"soc_riscv_zhoutao_top reset", false,-1);
        tracep->declBit(c+12,"soc_riscv_zhoutao_top hsync", false,-1);
        tracep->declBit(c+13,"soc_riscv_zhoutao_top vsync", false,-1);
        tracep->declBit(c+14,"soc_riscv_zhoutao_top valid", false,-1);
        tracep->declBus(c+15,"soc_riscv_zhoutao_top vga_r", false,-1, 7,0);
        tracep->declBus(c+16,"soc_riscv_zhoutao_top vga_g", false,-1, 7,0);
        tracep->declBus(c+17,"soc_riscv_zhoutao_top vga_b", false,-1, 7,0);
        tracep->declBus(c+1,"soc_riscv_zhoutao_top h_addr", false,-1, 9,0);
        tracep->declBus(c+2,"soc_riscv_zhoutao_top v_addr", false,-1, 9,0);
        tracep->declBus(c+3,"soc_riscv_zhoutao_top vga_data", false,-1, 23,0);
        tracep->declBus(c+4,"soc_riscv_zhoutao_top vga_mem1 h_addr", false,-1, 18,0);
        tracep->declBus(c+5,"soc_riscv_zhoutao_top vga_mem1 v_addr", false,-1, 18,0);
        tracep->declBus(c+3,"soc_riscv_zhoutao_top vga_mem1 vga_data", false,-1, 23,0);
        tracep->declBit(c+10,"soc_riscv_zhoutao_top vga_ctrl1 pclk", false,-1);
        tracep->declBit(c+11,"soc_riscv_zhoutao_top vga_ctrl1 reset", false,-1);
        tracep->declBus(c+3,"soc_riscv_zhoutao_top vga_ctrl1 vga_data", false,-1, 23,0);
        tracep->declBus(c+1,"soc_riscv_zhoutao_top vga_ctrl1 h_addr", false,-1, 9,0);
        tracep->declBus(c+2,"soc_riscv_zhoutao_top vga_ctrl1 v_addr", false,-1, 9,0);
        tracep->declBit(c+12,"soc_riscv_zhoutao_top vga_ctrl1 hsync", false,-1);
        tracep->declBit(c+13,"soc_riscv_zhoutao_top vga_ctrl1 vsync", false,-1);
        tracep->declBit(c+14,"soc_riscv_zhoutao_top vga_ctrl1 valid", false,-1);
        tracep->declBus(c+15,"soc_riscv_zhoutao_top vga_ctrl1 vga_r", false,-1, 7,0);
        tracep->declBus(c+16,"soc_riscv_zhoutao_top vga_ctrl1 vga_g", false,-1, 7,0);
        tracep->declBus(c+17,"soc_riscv_zhoutao_top vga_ctrl1 vga_b", false,-1, 7,0);
        tracep->declBus(c+18,"soc_riscv_zhoutao_top vga_ctrl1 h_frontporch", false,-1, 31,0);
        tracep->declBus(c+19,"soc_riscv_zhoutao_top vga_ctrl1 h_active", false,-1, 31,0);
        tracep->declBus(c+20,"soc_riscv_zhoutao_top vga_ctrl1 h_backporch", false,-1, 31,0);
        tracep->declBus(c+21,"soc_riscv_zhoutao_top vga_ctrl1 h_total", false,-1, 31,0);
        tracep->declBus(c+22,"soc_riscv_zhoutao_top vga_ctrl1 v_frontporch", false,-1, 31,0);
        tracep->declBus(c+23,"soc_riscv_zhoutao_top vga_ctrl1 v_active", false,-1, 31,0);
        tracep->declBus(c+24,"soc_riscv_zhoutao_top vga_ctrl1 v_backporch", false,-1, 31,0);
        tracep->declBus(c+25,"soc_riscv_zhoutao_top vga_ctrl1 v_total", false,-1, 31,0);
        tracep->declBus(c+6,"soc_riscv_zhoutao_top vga_ctrl1 x_cnt", false,-1, 9,0);
        tracep->declBus(c+7,"soc_riscv_zhoutao_top vga_ctrl1 y_cnt", false,-1, 9,0);
        tracep->declBit(c+8,"soc_riscv_zhoutao_top vga_ctrl1 h_valid", false,-1);
        tracep->declBit(c+9,"soc_riscv_zhoutao_top vga_ctrl1 v_valid", false,-1);
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
        tracep->fullSData(oldp+1,(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__h_valid)
                                    ? (0x3ffU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt) 
                                                 - (IData)(0x91U)))
                                    : 0U)),10);
        tracep->fullSData(oldp+2,(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid)
                                    ? (0x3ffU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt) 
                                                 - (IData)(0x24U)))
                                    : 0U)),10);
        tracep->fullIData(oldp+3,(vlSelf->soc_riscv_zhoutao_top__DOT__vga_data),24);
        tracep->fullIData(oldp+4,(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__h_valid)
                                    ? (0x3ffU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt) 
                                                 - (IData)(0x91U)))
                                    : 0U)),19);
        tracep->fullIData(oldp+5,(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid)
                                    ? (0x3ffU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt) 
                                                 - (IData)(0x24U)))
                                    : 0U)),19);
        tracep->fullSData(oldp+6,(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt),10);
        tracep->fullSData(oldp+7,(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt),10);
        tracep->fullBit(oldp+8,(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__h_valid));
        tracep->fullBit(oldp+9,(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid));
        tracep->fullBit(oldp+10,(vlSelf->clk));
        tracep->fullBit(oldp+11,(vlSelf->reset));
        tracep->fullBit(oldp+12,(vlSelf->hsync));
        tracep->fullBit(oldp+13,(vlSelf->vsync));
        tracep->fullBit(oldp+14,(vlSelf->valid));
        tracep->fullCData(oldp+15,(vlSelf->vga_r),8);
        tracep->fullCData(oldp+16,(vlSelf->vga_g),8);
        tracep->fullCData(oldp+17,(vlSelf->vga_b),8);
        tracep->fullIData(oldp+18,(0x60U),32);
        tracep->fullIData(oldp+19,(0x90U),32);
        tracep->fullIData(oldp+20,(0x310U),32);
        tracep->fullIData(oldp+21,(0x320U),32);
        tracep->fullIData(oldp+22,(2U),32);
        tracep->fullIData(oldp+23,(0x23U),32);
        tracep->fullIData(oldp+24,(0x203U),32);
        tracep->fullIData(oldp+25,(0x20dU),32);
    }
}
