// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_riscv_zhoutao_top.h for the primary calling header

#include "Vsoc_riscv_zhoutao_top___024root.h"
#include "Vsoc_riscv_zhoutao_top__Syms.h"

//==========

VL_INLINE_OPT void Vsoc_riscv_zhoutao_top___024root___sequent__TOP__2(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___sequent__TOP__2\n"); );
    // Variables
    SData/*9:0*/ __Vdly__soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt;
    SData/*9:0*/ __Vdly__soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt;
    // Body
    __Vdly__soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt 
        = vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt;
    __Vdly__soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt 
        = vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt;
    __Vdly__soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt 
        = ((IData)(vlSelf->reset) ? 1U : ((0x320U == (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt))
                                           ? 1U : (0x3ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt)))));
    if (vlSelf->reset) {
        __Vdly__soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt = 1U;
    } else if (((0x20dU == (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt)) 
                & (0x320U == (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt)))) {
        __Vdly__soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt = 1U;
    } else if ((0x320U == (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt))) {
        __Vdly__soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt)));
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt 
        = __Vdly__soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt;
    vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt 
        = __Vdly__soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt;
    vlSelf->vsync = (2U < (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt));
    vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid 
        = ((0x23U < (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt)) 
           & (0x203U >= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt)));
    vlSelf->hsync = (0x60U < (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt));
    vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__h_valid 
        = ((0x90U < (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt)) 
           & (0x310U >= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt)));
    vlSelf->valid = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__h_valid) 
                     & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid));
    vlSelf->soc_riscv_zhoutao_top__DOT__vga_data = 
        ((0x61a80U >= (0x7ffffU & (((((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt) 
                                           - (IData)(0x24U)))
                                       : 0U) << 7U) 
                                    + (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid)
                                         ? (0x3ffU 
                                            & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt) 
                                               - (IData)(0x24U)))
                                         : 0U) << 9U)) 
                                   + ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__h_valid)
                                       ? (0x3ffU & 
                                          ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt) 
                                           - (IData)(0x91U)))
                                       : 0U)))) ? vlSelf->soc_riscv_zhoutao_top__DOT__vga_mem1__DOT__vga_mem
         [(0x7ffffU & (((((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid)
                           ? (0x3ffU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt) 
                                        - (IData)(0x24U)))
                           : 0U) << 7U) + (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__v_valid)
                                             ? (0x3ffU 
                                                & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__y_cnt) 
                                                   - (IData)(0x24U)))
                                             : 0U) 
                                           << 9U)) 
                       + ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__h_valid)
                           ? (0x3ffU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__vga_ctrl1__DOT__x_cnt) 
                                        - (IData)(0x91U)))
                           : 0U)))] : 0U);
    vlSelf->vga_r = (0xffU & (vlSelf->soc_riscv_zhoutao_top__DOT__vga_data 
                              >> 0x10U));
    vlSelf->vga_g = (0xffU & (vlSelf->soc_riscv_zhoutao_top__DOT__vga_data 
                              >> 8U));
    vlSelf->vga_b = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__vga_data);
}

void Vsoc_riscv_zhoutao_top___024root___eval(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsoc_riscv_zhoutao_top___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vsoc_riscv_zhoutao_top___024root___change_request_1(Vsoc_riscv_zhoutao_top___024root* vlSelf);

VL_INLINE_OPT QData Vsoc_riscv_zhoutao_top___024root___change_request(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___change_request\n"); );
    // Body
    return (Vsoc_riscv_zhoutao_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vsoc_riscv_zhoutao_top___024root___change_request_1(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsoc_riscv_zhoutao_top___024root___eval_debug_assertions(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
