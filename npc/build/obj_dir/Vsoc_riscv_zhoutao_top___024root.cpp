// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_riscv_zhoutao_top.h for the primary calling header

#include "Vsoc_riscv_zhoutao_top___024root.h"
#include "Vsoc_riscv_zhoutao_top__Syms.h"

//==========

VL_INLINE_OPT void Vsoc_riscv_zhoutao_top___024root___combo__TOP__1(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT____Vcellinp__i0____pinNumber4 
        = (0xa6U | ((0x200U & ((IData)(vlSelf->a) << 9U)) 
                    | ((0x40U & ((IData)(vlSelf->a) 
                                 << 5U)) | ((8U & ((IData)(vlSelf->a) 
                                                   << 1U)) 
                                            | (1U & 
                                               ((IData)(vlSelf->a) 
                                                >> 3U))))));
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (7U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT____Vcellinp__i0____pinNumber4));
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (7U & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT____Vcellinp__i0____pinNumber4) 
                 >> 3U));
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (7U & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT____Vcellinp__i0____pinNumber4) 
                 >> 6U));
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (7U & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT____Vcellinp__i0____pinNumber4) 
                 >> 9U));
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (3U & (vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (3U & (vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (3U & (vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__pair_list
                 [2U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (3U & (vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__pair_list
                 [3U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->s) == vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__key_list
            [0U]) & vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->s) == vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->s) == vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__key_list
               [1U]) & vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->s) == vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->s) == vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__key_list
               [2U]) & vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->s) == vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->s) == vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__key_list
               [3U]) & vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->s) == vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->y = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__hit) 
                 & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__m_mux41b_1__DOT__i0__DOT__i0__DOT__lut_out));
}

void Vsoc_riscv_zhoutao_top___024root___eval(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___eval\n"); );
    // Body
    Vsoc_riscv_zhoutao_top___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
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
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->s & 0xfcU))) {
        Verilated::overWidthError("s");}
}
#endif  // VL_DEBUG
