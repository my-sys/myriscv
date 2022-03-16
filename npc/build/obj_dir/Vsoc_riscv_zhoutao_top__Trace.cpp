// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_riscv_zhoutao_top__Syms.h"


void Vsoc_riscv_zhoutao_top___024root__traceChgSub0(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep);

void Vsoc_riscv_zhoutao_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsoc_riscv_zhoutao_top___024root* const __restrict vlSelf = static_cast<Vsoc_riscv_zhoutao_top___024root*>(voidSelf);
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vsoc_riscv_zhoutao_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vsoc_riscv_zhoutao_top___024root__traceChgSub0(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__h_valid)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt) 
                                           - (IData)(0x91U)))
                                       : 0U)),10);
            tracep->chgSData(oldp+1,(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt) 
                                           - (IData)(0x24U)))
                                       : 0U)),10);
            tracep->chgIData(oldp+2,(vlSelf->soc_riscv_zhoutao_top__DOT__vga_data),24);
            tracep->chgIData(oldp+3,(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__h_valid)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt) 
                                           - (IData)(0x91U)))
                                       : 0U)),19);
            tracep->chgIData(oldp+4,(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt) 
                                           - (IData)(0x24U)))
                                       : 0U)),19);
            tracep->chgSData(oldp+5,(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt),10);
            tracep->chgSData(oldp+6,(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt),10);
            tracep->chgBit(oldp+7,(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__h_valid));
            tracep->chgBit(oldp+8,(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid));
        }
        tracep->chgBit(oldp+9,(vlSelf->clk));
        tracep->chgBit(oldp+10,(vlSelf->reset));
        tracep->chgBit(oldp+11,(vlSelf->hsync));
        tracep->chgBit(oldp+12,(vlSelf->vsync));
        tracep->chgBit(oldp+13,(vlSelf->valid));
        tracep->chgCData(oldp+14,(vlSelf->vga_r),8);
        tracep->chgCData(oldp+15,(vlSelf->vga_g),8);
        tracep->chgCData(oldp+16,(vlSelf->vga_b),8);
    }
}

void Vsoc_riscv_zhoutao_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vsoc_riscv_zhoutao_top___024root* const __restrict vlSelf = static_cast<Vsoc_riscv_zhoutao_top___024root*>(voidSelf);
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
