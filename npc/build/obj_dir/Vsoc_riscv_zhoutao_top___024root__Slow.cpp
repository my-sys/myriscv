// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_riscv_zhoutao_top.h for the primary calling header

#include "Vsoc_riscv_zhoutao_top___024root.h"
#include "Vsoc_riscv_zhoutao_top__Syms.h"

//==========


void Vsoc_riscv_zhoutao_top___024root___ctor_var_reset(Vsoc_riscv_zhoutao_top___024root* vlSelf);

Vsoc_riscv_zhoutao_top___024root::Vsoc_riscv_zhoutao_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsoc_riscv_zhoutao_top___024root___ctor_var_reset(this);
}

void Vsoc_riscv_zhoutao_top___024root::__Vconfigure(Vsoc_riscv_zhoutao_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsoc_riscv_zhoutao_top___024root::~Vsoc_riscv_zhoutao_top___024root() {
}

void Vsoc_riscv_zhoutao_top___024root___initial__TOP__1(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp1;
    // Body
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x74757265U;
    __Vtemp1[2U] = 0x2f706963U;
    __Vtemp1[3U] = 0x2eU;
    VL_READMEM_N(true, 24, 400001, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 ,  &(vlSelf->soc_riscv_zhoutao_top__DOT__vga_mem1__DOT__vga_mem)
                 , 0, ~0ULL);
}

void Vsoc_riscv_zhoutao_top___024root___settle__TOP__3(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->hsync = (0x60U < (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt));
    vlSelf->vsync = (2U < (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt));
    vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__h_valid 
        = ((0x90U < (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt)) 
           & (0x310U >= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt)));
    vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid 
        = ((0x23U < (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt)) 
           & (0x203U >= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt)));
    vlSelf->valid = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__h_valid) 
                     & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid));
    vlSelf->soc_riscv_zhoutao_top__DOT__vga_data = 
        ((0x61a80U >= (0x7ffffU & ((((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__h_valid)
                                      ? (0x3ffU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt) 
                                                   - (IData)(0x91U)))
                                      : 0U) << 9U) 
                                   + ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt) 
                                           - (IData)(0x24U)))
                                       : 0U)))) ? vlSelf->soc_riscv_zhoutao_top__DOT__vga_mem1__DOT__vga_mem
         [(0x7ffffU & ((((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__h_valid)
                          ? (0x3ffU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt) 
                                       - (IData)(0x91U)))
                          : 0U) << 9U) + ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid)
                                           ? (0x3ffU 
                                              & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt) 
                                                 - (IData)(0x24U)))
                                           : 0U)))]
          : 0U);
    vlSelf->vga_r = (0xffU & (vlSelf->soc_riscv_zhoutao_top__DOT__vga_data 
                              >> 0x10U));
    vlSelf->vga_g = (0xffU & (vlSelf->soc_riscv_zhoutao_top__DOT__vga_data 
                              >> 8U));
    vlSelf->vga_b = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__vga_data);
}

void Vsoc_riscv_zhoutao_top___024root___eval_initial(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___eval_initial\n"); );
    // Body
    Vsoc_riscv_zhoutao_top___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vsoc_riscv_zhoutao_top___024root___eval_settle(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___eval_settle\n"); );
    // Body
    Vsoc_riscv_zhoutao_top___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vsoc_riscv_zhoutao_top___024root___final(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___final\n"); );
}

void Vsoc_riscv_zhoutao_top___024root___ctor_var_reset(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->hsync = 0;
    vlSelf->vsync = 0;
    vlSelf->valid = 0;
    vlSelf->vga_r = 0;
    vlSelf->vga_g = 0;
    vlSelf->vga_b = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__vga_data = 0;
    for (int __Vi0=0; __Vi0<400001; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__vga_mem1__DOT__vga_mem[__Vi0] = 0;
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__h_valid = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
