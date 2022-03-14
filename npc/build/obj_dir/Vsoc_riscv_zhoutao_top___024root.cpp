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
    // Body
    vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__data_temp 
        = vlSelf->soc_riscv_zhoutao_top__DOT__data_temp;
    vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__cnt 
        = vlSelf->soc_riscv_zhoutao_top__DOT__cnt;
    vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__count 
        = vlSelf->soc_riscv_zhoutao_top__DOT__count;
    vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count 
        = vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count;
    vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__overflow 
        = vlSelf->soc_riscv_zhoutao_top__DOT__overflow;
    vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr 
        = vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr;
    vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ready 
        = vlSelf->soc_riscv_zhoutao_top__DOT__ready;
    vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr 
        = vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr;
    vlSelf->__Vdlyvset__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0 = 0U;
    if (vlSelf->soc_riscv_zhoutao_top__DOT__clrn) {
        if (vlSelf->soc_riscv_zhoutao_top__DOT__ready) {
            if ((1U & (~ (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__nextdata_n)))) {
                vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr)));
                if (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr))))) {
                    vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count))) {
                if ((((~ (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__buffer)) 
                      & (IData)(vlSelf->ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__buffer) 
                                               >> 1U))))) {
                    vlSelf->__Vdlyvval__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__buffer) 
                                    >> 1U));
                    vlSelf->__Vdlyvset__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0 = 1U;
                    vlSelf->__Vdlyvdim0__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0 
                        = vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr;
                    vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ready = 1U;
                    vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr)));
                    vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__overflow 
                        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__overflow) 
                           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr) 
                              == (7U & ((IData)(1U) 
                                        + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr)))));
                }
                vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count = 0U;
            } else {
                vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT____Vlvbound1 
                    = vlSelf->ps2_data;
                if ((9U >= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count))) {
                    vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count))) 
                            & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT____Vlvbound1) 
                                        << (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count))));
                }
                vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count)));
            }
        }
    } else {
        vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count = 0U;
        vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr = 0U;
        vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr = 0U;
        vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__overflow = 0U;
        vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ready = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->soc_riscv_zhoutao_top__DOT__clrn = 0U;
        vlSelf->soc_riscv_zhoutao_top__DOT__select = 0xffU;
        vlSelf->soc_riscv_zhoutao_top__DOT__nextdata_n = 1U;
        vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__count = 0U;
        vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__cnt = 0U;
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_data = 0U;
        vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__data_temp = 0U;
    } else if (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ready) 
                & (~ (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__overflow)))) {
        if (vlSelf->soc_riscv_zhoutao_top__DOT__cnt) {
            vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                = ((0xfff000ffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_data) 
                   | (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                       << 0x10U) | (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                     << 0xcU) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                 << 8U))));
            if ((0xf0U == (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__data_temp))) {
                vlSelf->soc_riscv_zhoutao_top__DOT__clrn = 0U;
                vlSelf->soc_riscv_zhoutao_top__DOT__select = 0U;
                vlSelf->soc_riscv_zhoutao_top__DOT__nextdata_n = 1U;
                vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__cnt = 0U;
            }
            vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__data_temp 
                = vlSelf->soc_riscv_zhoutao_top__DOT__data;
        } else {
            vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__count 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count)));
            vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                = ((0xffffff00U & vlSelf->soc_riscv_zhoutao_top__DOT__digital_data) 
                   | (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__data));
            vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__cnt = 1U;
            vlSelf->soc_riscv_zhoutao_top__DOT__nextdata_n = 0U;
            vlSelf->soc_riscv_zhoutao_top__DOT__select = 0x1fU;
        }
    } else {
        vlSelf->soc_riscv_zhoutao_top__DOT__clrn = 
            (1U & (~ (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__overflow)));
    }
}

VL_INLINE_OPT void Vsoc_riscv_zhoutao_top___024root___sequent__TOP__3(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg0 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg0_line;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg1 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg1_line;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg2 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg2_line;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg3 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg3_line;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg4 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg4_line;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg5 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg5_line;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg6 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg6_line;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg7 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg7_line;
    vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count 
        = vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count;
    vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr 
        = vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr;
    vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr 
        = vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr;
    if (vlSelf->__Vdlyvset__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo[vlSelf->__Vdlyvdim0__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0] 
            = vlSelf->__Vdlyvval__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0;
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__overflow = vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__overflow;
    vlSelf->soc_riscv_zhoutao_top__DOT__ready = vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__ready;
    vlSelf->soc_riscv_zhoutao_top__DOT__data_temp = vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__data_temp;
    vlSelf->soc_riscv_zhoutao_top__DOT__cnt = vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__cnt;
    vlSelf->soc_riscv_zhoutao_top__DOT__data = vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo
        [vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr];
    vlSelf->seg0_o = ((1U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg0)
                       : 0U);
    vlSelf->seg1_o = ((2U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg1)
                       : 0U);
    vlSelf->seg2_o = ((4U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg2)
                       : 0U);
    vlSelf->seg3_o = ((8U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg3)
                       : 0U);
    vlSelf->seg4_o = ((0x10U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg4)
                       : 0U);
    vlSelf->seg5_o = ((0x20U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg5)
                       : 0U);
    vlSelf->seg6_o = ((0x40U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg6)
                       : 0U);
    vlSelf->seg7_o = ((0x80U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__select))
                       ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg7)
                       : 0U);
}

VL_INLINE_OPT void Vsoc_riscv_zhoutao_top___024root___sequent__TOP__4(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*3:0*/ soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    CData/*7:0*/ soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2;
    // Body
    vlSelf->soc_riscv_zhoutao_top__DOT__count = vlSelf->__Vdly__soc_riscv_zhoutao_top__DOT__count;
    vlSelf->soc_riscv_zhoutao_top__DOT__A = 0U;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = 0U;
    vlSelf->soc_riscv_zhoutao_top__DOT__C = 0U;
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                                                   >> 7U)));
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)));
    }
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1 
        = (0xfU & ((0xfffffeU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                                 << 1U)) | (0xffffffU 
                                            & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                                >> 3U) 
                                               | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                  >> 7U)))));
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2 
        = (0xffU & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                     << 5U) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                               << 1U)));
    vlSelf->soc_riscv_zhoutao_top__DOT__A = soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU & 
                                             ((IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2) 
                                              >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU & (IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                                                   >> 6U)));
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__A = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)));
    }
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1 
        = (0xfU & ((0xfffffeU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                                 << 1U)) | (0xffffffU 
                                            & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                                >> 3U) 
                                               | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                  >> 7U)))));
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2 
        = (0xffU & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                     << 5U) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                               << 1U)));
    vlSelf->soc_riscv_zhoutao_top__DOT__A = soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU & 
                                             ((IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2) 
                                              >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU & (IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                                                   >> 5U)));
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__A = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)));
    }
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1 
        = (0xfU & ((0xfffffeU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                                 << 1U)) | (0xffffffU 
                                            & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                                >> 3U) 
                                               | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                  >> 7U)))));
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2 
        = (0xffU & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                     << 5U) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                               << 1U)));
    vlSelf->soc_riscv_zhoutao_top__DOT__A = soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU & 
                                             ((IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2) 
                                              >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU & (IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                                                   >> 4U)));
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__A = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)));
    }
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1 
        = (0xfU & ((0xfffffeU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                                 << 1U)) | (0xffffffU 
                                            & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                                >> 3U) 
                                               | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                  >> 7U)))));
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2 
        = (0xffU & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                     << 5U) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                               << 1U)));
    vlSelf->soc_riscv_zhoutao_top__DOT__A = soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU & 
                                             ((IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2) 
                                              >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU & (IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                                                   >> 3U)));
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__A = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)));
    }
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1 
        = (0xfU & ((0xfffffeU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                                 << 1U)) | (0xffffffU 
                                            & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                                >> 3U) 
                                               | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                  >> 7U)))));
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2 
        = (0xffU & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                     << 5U) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                               << 1U)));
    vlSelf->soc_riscv_zhoutao_top__DOT__A = soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU & 
                                             ((IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2) 
                                              >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU & (IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                                                   >> 2U)));
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__A = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)));
    }
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1 
        = (0xfU & ((0xfffffeU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                                 << 1U)) | (0xffffffU 
                                            & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                                >> 3U) 
                                               | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                  >> 7U)))));
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2 
        = (0xffU & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                     << 5U) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                               << 1U)));
    vlSelf->soc_riscv_zhoutao_top__DOT__A = soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU & 
                                             ((IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2) 
                                              >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU & (IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                                                   >> 1U)));
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__A = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B)));
    }
    if ((5U <= (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C))) {
        vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)));
    }
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1 
        = (0xfU & ((0xfffffeU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                                 << 1U)) | (0xffffffU 
                                            & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                                >> 3U) 
                                               | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                  >> 7U)))));
    soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2 
        = (0xffU & (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                     << 5U) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                               << 1U)));
    vlSelf->soc_riscv_zhoutao_top__DOT__A = soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    vlSelf->soc_riscv_zhoutao_top__DOT__B = (0xfU & 
                                             ((IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2) 
                                              >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = (0xfU & (IData)(soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2));
    vlSelf->soc_riscv_zhoutao_top__DOT__C = ((0xeU 
                                              & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C)) 
                                             | (1U 
                                                & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count)));
}

VL_INLINE_OPT void Vsoc_riscv_zhoutao_top___024root___sequent__TOP__5(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___sequent__TOP__5\n"); );
    // Body
    vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
        = ((0xf0000U & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                        << 0x10U)) | (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                       << 0xcU) | (
                                                   ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->soc_riscv_zhoutao_top__DOT__digital_data))));
}

VL_INLINE_OPT void Vsoc_riscv_zhoutao_top___024root___sequent__TOP__6(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___sequent__TOP__6\n"); );
    // Body
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
           == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit) 
           | ((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                    >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
              [0xfU]));
}

VL_INLINE_OPT void Vsoc_riscv_zhoutao_top___024root___sequent__TOP__7(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___sequent__TOP__7\n"); );
    // Body
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                    >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                    >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
              [0xfU]));
}

VL_INLINE_OPT void Vsoc_riscv_zhoutao_top___024root___sequent__TOP__8(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___sequent__TOP__8\n"); );
    // Body
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                    >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                    >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
              [0xfU]));
}

VL_INLINE_OPT void Vsoc_riscv_zhoutao_top___024root___sequent__TOP__9(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___sequent__TOP__9\n"); );
    // Body
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                    >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit) 
           | ((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                       >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
            >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit) 
           | ((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
               >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
              [0xfU]));
}

VL_INLINE_OPT void Vsoc_riscv_zhoutao_top___024root___sequent__TOP__10(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___sequent__TOP__10\n"); );
    // Body
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                       == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg0_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 4U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg1_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out;
}

VL_INLINE_OPT void Vsoc_riscv_zhoutao_top___024root___sequent__TOP__11(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___sequent__TOP__11\n"); );
    // Body
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 8U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg2_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0xcU)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg3_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out;
}

VL_INLINE_OPT void Vsoc_riscv_zhoutao_top___024root___sequent__TOP__12(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___sequent__TOP__12\n"); );
    // Body
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x10U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg4_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x14U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg5_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out;
}

VL_INLINE_OPT void Vsoc_riscv_zhoutao_top___024root___sequent__TOP__13(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___sequent__TOP__13\n"); );
    // Body
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                                   >> 0x18U)) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg6_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                        >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
                           >> 0x1cU) == vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg7_line 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out;
}

void Vsoc_riscv_zhoutao_top___024root____Vthread_0(void* voidSelf, bool even_cycle);
void Vsoc_riscv_zhoutao_top___024root____Vthread_1(void* voidSelf, bool even_cycle);

void Vsoc_riscv_zhoutao_top___024root___eval(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___eval\n"); );
    // Body
    vlSymsp->__Vm_even_cycle = !vlSymsp->__Vm_even_cycle;
    vlSymsp->__Vm_threadPoolp->workerp(0)->addTask(&Vsoc_riscv_zhoutao_top___024root____Vthread_0, vlSelf, vlSymsp->__Vm_even_cycle);
    Vsoc_riscv_zhoutao_top___024root____Vthread_1(vlSelf, vlSymsp->__Vm_even_cycle);
    Verilated::mtaskId(0);
    vlSelf->__Vm_mtaskstate_final.waitUntilUpstreamDone(vlSymsp->__Vm_even_cycle);
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
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG

void Vsoc_riscv_zhoutao_top___024root____Vthread_0(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root____Vthread_0\n"); );
    // Body
    Vsoc_riscv_zhoutao_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_riscv_zhoutao_top___024root*>(voidSelf);
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Verilated::mtaskId(1);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsoc_riscv_zhoutao_top___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_2.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(3);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsoc_riscv_zhoutao_top___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_4.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(4);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsoc_riscv_zhoutao_top___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_7.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_8.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_11.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_12.signalUpstreamDone(even_cycle);
    Verilated::mtaskId(10);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsoc_riscv_zhoutao_top___024root___sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(9);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsoc_riscv_zhoutao_top___024root___sequent__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(6);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsoc_riscv_zhoutao_top___024root___sequent__TOP__7(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::mtaskId(5);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsoc_riscv_zhoutao_top___024root___sequent__TOP__6(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final.signalUpstreamDone(even_cycle);
}

void Vsoc_riscv_zhoutao_top___024root____Vthread_1(void* voidSelf, bool even_cycle) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root____Vthread_1\n"); );
    // Body
    Vsoc_riscv_zhoutao_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsoc_riscv_zhoutao_top___024root*>(voidSelf);
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSelf->__Vm_mtaskstate_2.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(2);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsoc_riscv_zhoutao_top___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_4.signalUpstreamDone(even_cycle);
    vlSelf->__Vm_mtaskstate_11.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(11);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsoc_riscv_zhoutao_top___024root___sequent__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_12.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(12);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsoc_riscv_zhoutao_top___024root___sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_7.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(7);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsoc_riscv_zhoutao_top___024root___sequent__TOP__8(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_8.waitUntilUpstreamDone(even_cycle);
    Verilated::mtaskId(8);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsoc_riscv_zhoutao_top___024root___sequent__TOP__9(vlSelf);
    }
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    vlSelf->__Vm_mtaskstate_final.signalUpstreamDone(even_cycle);
}
