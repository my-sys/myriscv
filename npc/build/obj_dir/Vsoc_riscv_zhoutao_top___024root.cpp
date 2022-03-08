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
    CData/*3:0*/ soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap1;
    CData/*7:0*/ soc_riscv_zhoutao_top__DOT__BCD_1__DOT____Vconcswap2;
    CData/*6:0*/ __Vdly__soc_riscv_zhoutao_top__DOT__count;
    CData/*0:0*/ __Vdly__soc_riscv_zhoutao_top__DOT__cnt;
    CData/*2:0*/ __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__ps2_clk_sync;
    CData/*2:0*/ __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr;
    CData/*0:0*/ __Vdly__soc_riscv_zhoutao_top__DOT__ready;
    CData/*2:0*/ __Vdlyvdim0__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0;
    CData/*7:0*/ __Vdlyvval__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0;
    CData/*0:0*/ __Vdlyvset__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0;
    CData/*2:0*/ __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr;
    CData/*0:0*/ __Vdly__soc_riscv_zhoutao_top__DOT__overflow;
    CData/*3:0*/ __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count;
    // Body
    __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__ps2_clk_sync 
        = vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__ps2_clk_sync;
    __Vdly__soc_riscv_zhoutao_top__DOT__cnt = vlSelf->soc_riscv_zhoutao_top__DOT__cnt;
    __Vdly__soc_riscv_zhoutao_top__DOT__count = vlSelf->soc_riscv_zhoutao_top__DOT__count;
    __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count 
        = vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count;
    __Vdly__soc_riscv_zhoutao_top__DOT__overflow = vlSelf->soc_riscv_zhoutao_top__DOT__overflow;
    __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr 
        = vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr;
    __Vdly__soc_riscv_zhoutao_top__DOT__ready = vlSelf->soc_riscv_zhoutao_top__DOT__ready;
    __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr 
        = vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr;
    __Vdlyvset__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0 = 0U;
    __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg7 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg7_line;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg6 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg6_line;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg5 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg5_line;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg4 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg4_line;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg3 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg3_line;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg2 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg2_line;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg1 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg1_line;
    vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg0 
        = vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg0_line;
    if (vlSelf->soc_riscv_zhoutao_top__DOT__clrn) {
        if (vlSelf->soc_riscv_zhoutao_top__DOT__ready) {
            if ((1U & (~ (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__nextdata_n)))) {
                __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr)));
                if (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr))))) {
                    __Vdly__soc_riscv_zhoutao_top__DOT__ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count))) {
                if ((((~ (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__buffer)) 
                      & (IData)(vlSelf->ps2_data)) 
                     & VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__buffer) 
                                               >> 1U))))) {
                    __Vdlyvval__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0 
                        = vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr;
                    __Vdly__soc_riscv_zhoutao_top__DOT__ready = 1U;
                    __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr)));
                    __Vdly__soc_riscv_zhoutao_top__DOT__overflow 
                        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__overflow) 
                           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr) 
                              == (7U & ((IData)(1U) 
                                        + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr)))));
                }
                __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count = 0U;
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
                __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count)));
            }
        }
    } else {
        __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count = 0U;
        __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr = 0U;
        __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr = 0U;
        __Vdly__soc_riscv_zhoutao_top__DOT__overflow = 0U;
        __Vdly__soc_riscv_zhoutao_top__DOT__ready = 0U;
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__ps2_clk_sync 
        = __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__ps2_clk_sync;
    vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr 
        = __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr;
    vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count 
        = __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count;
    vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr 
        = __Vdly__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr;
    if (__Vdlyvset__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo[__Vdlyvdim0__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0] 
            = __Vdlyvval__soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo__v0;
    }
    if (vlSelf->reset) {
        vlSelf->soc_riscv_zhoutao_top__DOT__clrn = 0U;
        vlSelf->soc_riscv_zhoutao_top__DOT__select = 0xffU;
        vlSelf->soc_riscv_zhoutao_top__DOT__nextdata_n = 1U;
        __Vdly__soc_riscv_zhoutao_top__DOT__count = 0U;
        __Vdly__soc_riscv_zhoutao_top__DOT__cnt = 0U;
        vlSelf->soc_riscv_zhoutao_top__DOT__digital_data = 0U;
    } else if (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ready) 
                & (~ (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__overflow)))) {
        if (vlSelf->soc_riscv_zhoutao_top__DOT__cnt) {
            vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                = ((0xfff000ffU & vlSelf->soc_riscv_zhoutao_top__DOT__digital_data) 
                   | (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__A) 
                       << 0x10U) | (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                     << 0xcU) | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                 << 8U))));
            if ((0xf0U == (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__data))) {
                vlSelf->soc_riscv_zhoutao_top__DOT__clrn = 0U;
                vlSelf->soc_riscv_zhoutao_top__DOT__select = 0U;
                vlSelf->soc_riscv_zhoutao_top__DOT__nextdata_n = 1U;
                __Vdly__soc_riscv_zhoutao_top__DOT__cnt = 0U;
            }
        } else {
            __Vdly__soc_riscv_zhoutao_top__DOT__count 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count)));
            vlSelf->soc_riscv_zhoutao_top__DOT__digital_data 
                = ((0xffffff00U & vlSelf->soc_riscv_zhoutao_top__DOT__digital_data) 
                   | (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__data));
            __Vdly__soc_riscv_zhoutao_top__DOT__cnt = 1U;
            vlSelf->soc_riscv_zhoutao_top__DOT__nextdata_n = 0U;
            vlSelf->soc_riscv_zhoutao_top__DOT__select = 0x1fU;
        }
    } else {
        vlSelf->soc_riscv_zhoutao_top__DOT__clrn = 
            (1U & (~ (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__overflow)));
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__cnt = __Vdly__soc_riscv_zhoutao_top__DOT__cnt;
    vlSelf->soc_riscv_zhoutao_top__DOT__ready = __Vdly__soc_riscv_zhoutao_top__DOT__ready;
    vlSelf->soc_riscv_zhoutao_top__DOT__overflow = __Vdly__soc_riscv_zhoutao_top__DOT__overflow;
    vlSelf->soc_riscv_zhoutao_top__DOT__data = vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo
        [vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr];
    vlSelf->soc_riscv_zhoutao_top__DOT__count = __Vdly__soc_riscv_zhoutao_top__DOT__count;
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
    vlSelf->soc_riscv_zhoutao_top__DOT____Vcellinp__digital_led_1__data_in 
        = ((0xf0000U & ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__count) 
                        << 0x10U)) | (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__B) 
                                       << 0xcU) | (
                                                   ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__C) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->soc_riscv_zhoutao_top__DOT__digital_data))));
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
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
