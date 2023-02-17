// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__19(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__19\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp4033;
    VlWide<4>/*127:0*/ __Vtemp4034;
    VlWide<3>/*95:0*/ __Vtemp4035;
    VlWide<4>/*127:0*/ __Vtemp4036;
    VlWide<3>/*95:0*/ __Vtemp4037;
    VlWide<4>/*127:0*/ __Vtemp4038;
    VlWide<3>/*95:0*/ __Vtemp4039;
    VlWide<4>/*127:0*/ __Vtemp4040;
    VlWide<3>/*95:0*/ __Vtemp4041;
    VlWide<4>/*127:0*/ __Vtemp4042;
    VlWide<4>/*127:0*/ __Vtemp4044;
    VlWide<4>/*127:0*/ __Vtemp4045;
    VlWide<4>/*127:0*/ __Vtemp4048;
    VlWide<3>/*95:0*/ __Vtemp4061;
    VlWide<4>/*127:0*/ __Vtemp4062;
    VlWide<3>/*95:0*/ __Vtemp4063;
    VlWide<4>/*127:0*/ __Vtemp4064;
    VlWide<3>/*95:0*/ __Vtemp4065;
    VlWide<4>/*127:0*/ __Vtemp4066;
    VlWide<3>/*95:0*/ __Vtemp4067;
    VlWide<4>/*127:0*/ __Vtemp4068;
    // Body
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[11891]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[11892]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[11893]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[11894]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11895]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp)))) {
        ++(vlSymsp->__Vcoverage[11769]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[11770]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[11771]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[11772]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[11773]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[11774]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[11775]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[11776]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[11777]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[11778]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[11779]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[11780]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[11781]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[11782]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[11783]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[11784]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[11785]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[11786]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[11787]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[11788]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[11789]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[11790]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[11791]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[11792]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[11793]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[11794]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[11795]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[11796]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[11797]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[11798]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[11799]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[11800]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[11801]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[11802]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[11803]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[11804]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[11805]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[11806]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[11807]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[11808]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[11809]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[11810]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[11811]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[11812]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[11813]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[11814]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[11815]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[11816]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[11817]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[11818]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[11819]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[11820]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[11821]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[11822]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[11823]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[11824]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7f7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[11825]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7effffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[11826]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7dffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[11827]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7bffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[11828]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x77ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[11829]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x6fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[11830]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x5fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[11831]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x3fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    __Vtemp4033[0U] = (IData)((((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp))));
    __Vtemp4033[1U] = (IData)(((((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                                                   >> 0x1fU)
                                                   ? 0xffffffffU
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp))) 
                               >> 0x20U));
    __Vtemp4033[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp4034, __Vtemp4033);
    __Vtemp4035[0U] = (IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1, 
                                             (0x3fU 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))));
    __Vtemp4035[1U] = (IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1, 
                                              (0x3fU 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))) 
                               >> 0x20U));
    __Vtemp4035[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp4036, __Vtemp4035);
    __Vtemp4037[0U] = (IData)((((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp))));
    __Vtemp4037[1U] = (IData)(((((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                                                   >> 0x1fU)
                                                   ? 0xffffffffU
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp))) 
                               >> 0x20U));
    __Vtemp4037[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp4038, __Vtemp4037);
    __Vtemp4039[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                               >> (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))));
    __Vtemp4039[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                >> (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))) 
                               >> 0x20U));
    __Vtemp4039[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp4040, __Vtemp4039);
    __Vtemp4041[0U] = (IData)((((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                             >> 0x1fU)))
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp))));
    __Vtemp4041[1U] = (IData)(((((QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                              >> 0x1fU)))
                                                   ? 0xffffffffU
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp))) 
                               >> 0x20U));
    __Vtemp4041[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp4042, __Vtemp4041);
    VL_EXTEND_WQ(127,64, __Vtemp4044, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp4045, __Vtemp4044, 
                  (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    VL_EXTEND_WW(128,66, __Vtemp4048, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_72);
    if ((7U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                        >> 2U)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[0U] 
            = __Vtemp4034[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[1U] 
            = __Vtemp4034[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[2U] 
            = __Vtemp4034[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[3U] 
            = __Vtemp4034[3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[0U] 
            = ((7U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                               >> 2U))) ? __Vtemp4036[0U]
                : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp4038[0U]
                    : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 2U))) ? __Vtemp4040[0U]
                        : ((6U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 2U)))
                            ? __Vtemp4042[0U] : ((6U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 __Vtemp4045[0U]
                                                  : 
                                                 __Vtemp4048[0U])))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[1U] 
            = ((7U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                               >> 2U))) ? __Vtemp4036[1U]
                : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp4038[1U]
                    : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 2U))) ? __Vtemp4040[1U]
                        : ((6U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 2U)))
                            ? __Vtemp4042[1U] : ((6U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 __Vtemp4045[1U]
                                                  : 
                                                 __Vtemp4048[1U])))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[2U] 
            = ((7U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                               >> 2U))) ? __Vtemp4036[2U]
                : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp4038[2U]
                    : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 2U))) ? __Vtemp4040[2U]
                        : ((6U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 2U)))
                            ? __Vtemp4042[2U] : ((6U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 __Vtemp4045[2U]
                                                  : 
                                                 __Vtemp4048[2U])))));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[3U] 
            = ((7U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                               >> 2U))) ? __Vtemp4036[3U]
                : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp4038[3U]
                    : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 2U))) ? __Vtemp4040[3U]
                        : ((6U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 2U)))
                            ? __Vtemp4042[3U] : ((6U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 (0x80000000U 
                                                  | (0x7fffffffU 
                                                     & __Vtemp4045[3U]))
                                                  : 
                                                 __Vtemp4048[3U])))));
    }
    __Vtemp4061[0U] = (IData)((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    __Vtemp4061[1U] = (IData)(((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                               >> 0x20U));
    __Vtemp4061[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp4062, __Vtemp4061);
    __Vtemp4063[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm);
    __Vtemp4063[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                               >> 0x20U));
    __Vtemp4063[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp4064, __Vtemp4063);
    __Vtemp4065[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                               | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp4065[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                               >> 0x20U));
    __Vtemp4065[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp4066, __Vtemp4065);
    __Vtemp4067[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp4067[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                               >> 0x20U));
    __Vtemp4067[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp4068, __Vtemp4067);
    if ((0xfU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 2U)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
            = __Vtemp4062[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
            = __Vtemp4062[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
            = __Vtemp4062[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
            = __Vtemp4062[3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
            = ((0xcU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                 >> 2U))) ? __Vtemp4064[0U]
                : ((9U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp4066[0U]
                    : ((0xaU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                         >> 2U))) ? 
                       __Vtemp4068[0U] : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
            = ((0xcU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                 >> 2U))) ? __Vtemp4064[1U]
                : ((9U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp4066[1U]
                    : ((0xaU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                         >> 2U))) ? 
                       __Vtemp4068[1U] : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
            = ((0xcU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                 >> 2U))) ? __Vtemp4064[2U]
                : ((9U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp4066[2U]
                    : ((0xaU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                         >> 2U))) ? 
                       __Vtemp4068[2U] : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[2U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
            = ((0xcU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                 >> 2U))) ? __Vtemp4064[3U]
                : ((9U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp4066[3U]
                    : ((0xaU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                         >> 2U))) ? 
                       __Vtemp4068[3U] : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[3U])));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_w_rs_en)))) {
        ++(vlSymsp->__Vcoverage[11248]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_w_rs_en 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data)))) {
        ++(vlSymsp->__Vcoverage[11119]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | (IData)((IData)((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]))));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 1U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[11120]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 2U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[11121]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 3U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[11122]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 4U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[11123]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 5U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[11124]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 6U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[11125]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 7U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[11126]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 8U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[11127]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 9U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[11128]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[11129]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[11130]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[11131]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[11132]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[11133]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[11134]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[11135]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[11136]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[11137]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[11138]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[11139]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[11140]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[11141]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[11142]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[11143]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[11144]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[11145]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[11146]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[11147]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[11148]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[11149]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[11150]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
               ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[11151]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[11152]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[11153]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[11154]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[11155]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[11156]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[11157]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[11158]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[11159]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[11160]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[11161]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[11162]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[11163]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[11164]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[11165]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[11166]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[11167]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[11168]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[11169]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[11170]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[11171]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[11172]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[11173]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[11174]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[11175]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[11176]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[11177]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[11178]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[11179]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[11180]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[11181]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[11182]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11896]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11897]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11898]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11899]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11900]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11901]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11902]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11903]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11904]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11905]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11906]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11907]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11908]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11909]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11910]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11911]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11912]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11913]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11914]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11915]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11916]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11917]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11918]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11919]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11920]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11921]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11922]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11923]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11924]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11925]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11926]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11927]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11928]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11929]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11930]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11931]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11932]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11933]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11934]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11935]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11936]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11937]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11938]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11939]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11940]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11941]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11942]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11943]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11944]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11945]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11946]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11947]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11948]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11949]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11950]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11951]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11952]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11953]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11954]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11955]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11956]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11957]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[11958]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11959]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                ? 0U : ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                         ? 0U : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                                  ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_result_data)
                                  : 0U)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                ? 0U : ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                         ? 0U : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                                  ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_result_data 
                                             >> 0x20U))
                                  : 0U)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
            = (1U & ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                      ? 0U : ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                               ? 0U : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_out_valid)
                                        : 0U))));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__w_rs_en)))) {
        ++(vlSymsp->__Vcoverage[11583]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__w_rs_en 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN_11 
        = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)
                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en)
                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U])));
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11518]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11519]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11520]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11521]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11522]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11523]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11524]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11525]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11526]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11527]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11528]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11529]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11530]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11531]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11532]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11533]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11534]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11535]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11536]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11537]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11538]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11539]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11540]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11541]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11542]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11543]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11544]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11545]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11546]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11547]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11548]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11549]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11550]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11551]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11552]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11553]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11554]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11555]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11556]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11557]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11558]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11559]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11560]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11561]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11562]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11563]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11564]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11565]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11566]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11567]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11568]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11569]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11570]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11571]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11572]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11573]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11574]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11575]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11576]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11577]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11578]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11579]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11580]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11581]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11582]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U]);
    }
}

VL_INLINE_OPT void Vriscv_soc___024root___combo__TOP__20(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___combo__TOP__20\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp4096;
    VlWide<3>/*95:0*/ __Vtemp4097;
    VlWide<3>/*95:0*/ __Vtemp4098;
    VlWide<3>/*95:0*/ __Vtemp4102;
    VlWide<3>/*95:0*/ __Vtemp4103;
    VlWide<3>/*95:0*/ __Vtemp4108;
    VlWide<3>/*95:0*/ __Vtemp4109;
    VlWide<5>/*159:0*/ __Vtemp4119;
    VlWide<5>/*159:0*/ __Vtemp4120;
    VlWide<5>/*159:0*/ __Vtemp4121;
    VlWide<5>/*159:0*/ __Vtemp4122;
    VlWide<5>/*159:0*/ __Vtemp4123;
    VlWide<3>/*95:0*/ __Vtemp4131;
    VlWide<3>/*95:0*/ __Vtemp4132;
    VlWide<3>/*95:0*/ __Vtemp4133;
    VlWide<3>/*95:0*/ __Vtemp4136;
    VlWide<3>/*95:0*/ __Vtemp4139;
    VlWide<3>/*95:0*/ __Vtemp4146;
    VlWide<3>/*95:0*/ __Vtemp4147;
    VlWide<3>/*95:0*/ __Vtemp4148;
    VlWide<3>/*95:0*/ __Vtemp4149;
    VlWide<3>/*95:0*/ __Vtemp4152;
    VlWide<3>/*95:0*/ __Vtemp4156;
    VlWide<3>/*95:0*/ __Vtemp4163;
    VlWide<3>/*95:0*/ __Vtemp4164;
    VlWide<3>/*95:0*/ __Vtemp4165;
    VlWide<3>/*95:0*/ __Vtemp4168;
    VlWide<3>/*95:0*/ __Vtemp4171;
    VlWide<3>/*95:0*/ __Vtemp4178;
    VlWide<3>/*95:0*/ __Vtemp4179;
    VlWide<3>/*95:0*/ __Vtemp4180;
    VlWide<3>/*95:0*/ __Vtemp4181;
    VlWide<3>/*95:0*/ __Vtemp4184;
    VlWide<3>/*95:0*/ __Vtemp4188;
    VlWide<3>/*95:0*/ __Vtemp4197;
    VlWide<3>/*95:0*/ __Vtemp4198;
    VlWide<3>/*95:0*/ __Vtemp4199;
    VlWide<3>/*95:0*/ __Vtemp4200;
    VlWide<3>/*95:0*/ __Vtemp4201;
    VlWide<3>/*95:0*/ __Vtemp4204;
    VlWide<3>/*95:0*/ __Vtemp4205;
    VlWide<3>/*95:0*/ __Vtemp4206;
    VlWide<3>/*95:0*/ __Vtemp4207;
    VlWide<3>/*95:0*/ __Vtemp4208;
    VlWide<3>/*95:0*/ __Vtemp4209;
    VlWide<3>/*95:0*/ __Vtemp4211;
    VlWide<3>/*95:0*/ __Vtemp4212;
    VlWide<3>/*95:0*/ __Vtemp4213;
    VlWide<3>/*95:0*/ __Vtemp4214;
    VlWide<3>/*95:0*/ __Vtemp4215;
    VlWide<3>/*95:0*/ __Vtemp4216;
    VlWide<3>/*95:0*/ __Vtemp4220;
    VlWide<3>/*95:0*/ __Vtemp4221;
    VlWide<3>/*95:0*/ __Vtemp4222;
    VlWide<3>/*95:0*/ __Vtemp4223;
    VlWide<3>/*95:0*/ __Vtemp4224;
    VlWide<3>/*95:0*/ __Vtemp4231;
    VlWide<3>/*95:0*/ __Vtemp4232;
    VlWide<3>/*95:0*/ __Vtemp4240;
    VlWide<3>/*95:0*/ __Vtemp4241;
    VlWide<3>/*95:0*/ __Vtemp4242;
    VlWide<3>/*95:0*/ __Vtemp4243;
    // Body
    __Vtemp4096[0U] = 1U;
    __Vtemp4096[1U] = 0U;
    __Vtemp4096[2U] = 0U;
    __Vtemp4097[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       << 1U);
    __Vtemp4097[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                     << 1U));
    __Vtemp4097[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                     << 1U));
    VL_ADD_W(3, __Vtemp4098, __Vtemp4096, __Vtemp4097);
    __Vtemp4102[0U] = 1U;
    __Vtemp4102[1U] = 0U;
    __Vtemp4102[2U] = 0U;
    VL_ADD_W(3, __Vtemp4103, __Vtemp4102, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q);
    if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vtemp4108[0U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                            ? __Vtemp4103[0U] : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]);
        __Vtemp4108[1U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                            ? __Vtemp4103[1U] : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]);
        __Vtemp4108[2U] = (1U & ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                  ? __Vtemp4103[2U]
                                  : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]));
    } else {
        __Vtemp4108[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
        __Vtemp4108[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
        __Vtemp4108[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]);
    }
    VL_EXTEND_WW(66,65, __Vtemp4109, __Vtemp4108);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                         ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                             ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                << 1U) : __Vtemp4098[0U])
                         : __Vtemp4109[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                         ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                             ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                 >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                              << 1U))
                             : __Vtemp4098[1U]) : __Vtemp4109[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? 0U : (3U & ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                               ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                   ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                       >> 0x1fU) | 
                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                       << 1U)) : __Vtemp4098[2U])
                               : __Vtemp4109[2U])));
    }
    __Vtemp4119[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                       << 2U);
    __Vtemp4119[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                                     << 2U));
    __Vtemp4119[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                                     << 2U));
    __Vtemp4119[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                                     << 2U));
    __Vtemp4119[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] 
                                     << 2U));
    VL_EXTEND_WW(133,132, __Vtemp4120, __Vtemp4119);
    VL_EXTEND_WW(133,66, __Vtemp4121, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__pp);
    VL_ADD_W(5, __Vtemp4122, __Vtemp4120, __Vtemp4121);
    VL_EXTEND_WW(133,130, __Vtemp4123, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[3U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[4U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? __Vtemp4122[0U] : __Vtemp4123[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? __Vtemp4122[1U] : __Vtemp4123[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? __Vtemp4122[2U] : __Vtemp4123[2U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[3U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? __Vtemp4122[3U] : __Vtemp4123[3U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[4U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : (0x1fU & ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                  ? __Vtemp4122[4U]
                                  : __Vtemp4123[4U])));
    }
    VL_EXTEND_WQ(67,64, __Vtemp4131, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4132, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4133, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4136, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4139, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_473[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_473[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_473[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_473[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4131[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4132[0U]
                                              : __Vtemp4133[0U])
                                          : __Vtemp4136[0U])
                                      : __Vtemp4139[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_473[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4131[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4132[1U]
                                              : __Vtemp4133[1U])
                                          : __Vtemp4136[1U])
                                      : __Vtemp4139[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_473[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4131[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4132[2U]
                                              : __Vtemp4133[2U])
                                          : __Vtemp4136[2U])
                                      : __Vtemp4139[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp4146, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4147, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4148, ((((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_342))
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U])) 
                                                  >> 2U)))
                                         : (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[1U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U])) 
                                                  >> 2U)))) 
                                       << 0xaU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index) 
                                                                   << 4U)))));
    VL_EXTEND_WQ(67,64, __Vtemp4149, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4152, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4156, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_474[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_474[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_474[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_474[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4146[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? __Vtemp4147[0U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_342) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_342) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4148[0U]
                                                  : 
                                                 __Vtemp4149[0U])
                                              : __Vtemp4152[0U]))
                                      : __Vtemp4156[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_474[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4146[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? __Vtemp4147[1U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_342) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_342) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4148[1U]
                                                  : 
                                                 __Vtemp4149[1U])
                                              : __Vtemp4152[1U]))
                                      : __Vtemp4156[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_474[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4146[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? __Vtemp4147[2U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_342) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_342) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4148[2U]
                                                  : 
                                                 __Vtemp4149[2U])
                                              : __Vtemp4152[2U]))
                                      : __Vtemp4156[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp4163, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4164, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4165, (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4168, (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4171, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_473[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_473[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_473[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_473[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4163[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4164[0U]
                                              : __Vtemp4165[0U])
                                          : __Vtemp4168[0U])
                                      : __Vtemp4171[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_473[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4163[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4164[1U]
                                              : __Vtemp4165[1U])
                                          : __Vtemp4168[1U])
                                      : __Vtemp4171[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_473[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4163[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4164[2U]
                                              : __Vtemp4165[2U])
                                          : __Vtemp4168[2U])
                                      : __Vtemp4171[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp4178, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4179, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4180, ((((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_342))
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U])) 
                                                  >> 2U)))
                                         : (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[1U])) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[1U])) 
                                                << 0x1eU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U])) 
                                                  >> 2U)))) 
                                       << 0xaU) | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index) 
                                                                   << 4U)))));
    VL_EXTEND_WQ(67,64, __Vtemp4181, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4184, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4188, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_474[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_474[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_474[2U] = 0U;
        vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_39 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_37 = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_474[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4178[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? __Vtemp4179[0U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_342) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_342) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4180[0U]
                                                  : 
                                                 __Vtemp4181[0U])
                                              : __Vtemp4184[0U]))
                                      : __Vtemp4188[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_474[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4178[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? __Vtemp4179[1U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_342) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_342) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4180[1U]
                                                  : 
                                                 __Vtemp4181[1U])
                                              : __Vtemp4184[1U]))
                                      : __Vtemp4188[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_474[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4178[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? __Vtemp4179[2U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_342) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_342) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4180[2U]
                                                  : 
                                                 __Vtemp4181[2U])
                                              : __Vtemp4184[2U]))
                                      : __Vtemp4188[2U]));
        vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_39 
            = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)
                ? (0xfU & ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)
                            ? ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                ? ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen))
                                    ? (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)
                                    : ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen) 
                                       - (IData)(1U)))
                                : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen))
                            : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)))
                : ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)
                    : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_37 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb))
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                    ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb
                    : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb))));
    }
    VL_ADD_W(3, __Vtemp4197, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend);
    __Vtemp4198[0U] = 1U;
    __Vtemp4198[1U] = 0U;
    __Vtemp4198[2U] = 0U;
    __Vtemp4199[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp4199[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp4199[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp4200, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend, __Vtemp4199);
    VL_ADD_W(3, __Vtemp4201, __Vtemp4198, __Vtemp4200);
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))) {
        __Vtemp4204[0U] = __Vtemp4197[0U];
        __Vtemp4204[1U] = __Vtemp4197[1U];
        __Vtemp4204[2U] = (1U & __Vtemp4197[2U]);
    } else {
        __Vtemp4204[0U] = __Vtemp4201[0U];
        __Vtemp4204[1U] = __Vtemp4201[1U];
        __Vtemp4204[2U] = (1U & __Vtemp4201[2U]);
    }
    VL_EXTEND_WW(66,65, __Vtemp4205, __Vtemp4204);
    __Vtemp4206[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       << 1U);
    __Vtemp4206[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                     << 1U));
    __Vtemp4206[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                     << 1U));
    VL_EXTEND_WW(66,65, __Vtemp4207, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    VL_ADD_W(3, __Vtemp4208, __Vtemp4206, __Vtemp4207);
    __Vtemp4209[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       << 1U);
    __Vtemp4209[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                     << 1U));
    __Vtemp4209[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                     << 1U));
    __Vtemp4211[0U] = 1U;
    __Vtemp4211[1U] = 0U;
    __Vtemp4211[2U] = 0U;
    __Vtemp4212[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp4212[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp4212[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp4213, __Vtemp4211, __Vtemp4212);
    __Vtemp4214[0U] = __Vtemp4213[0U];
    __Vtemp4214[1U] = __Vtemp4213[1U];
    __Vtemp4214[2U] = (1U & __Vtemp4213[2U]);
    VL_EXTEND_WW(66,65, __Vtemp4215, __Vtemp4214);
    VL_ADD_W(3, __Vtemp4216, __Vtemp4209, __Vtemp4215);
    __Vtemp4220[0U] = 1U;
    __Vtemp4220[1U] = 0U;
    __Vtemp4220[2U] = 0U;
    __Vtemp4221[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp4221[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp4221[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp4222, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp4221);
    VL_ADD_W(3, __Vtemp4223, __Vtemp4220, __Vtemp4222);
    VL_ADD_W(3, __Vtemp4224, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vtemp4231[0U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))
                            ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                ? __Vtemp4223[0U] : 
                               __Vtemp4224[0U]) : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]);
        __Vtemp4231[1U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))
                            ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                ? __Vtemp4223[1U] : 
                               __Vtemp4224[1U]) : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]);
        __Vtemp4231[2U] = (1U & ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))
                                  ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                            ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                      ? __Vtemp4223[2U]
                                      : __Vtemp4224[2U])
                                  : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]));
    } else {
        __Vtemp4231[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
        __Vtemp4231[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
        __Vtemp4231[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
    }
    VL_EXTEND_WW(66,65, __Vtemp4232, __Vtemp4231);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? __Vtemp4205[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                      ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                          ? __Vtemp4208[0U]
                                          : __Vtemp4216[0U])
                                      : __Vtemp4232[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? __Vtemp4205[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                      ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                          ? __Vtemp4208[1U]
                                          : __Vtemp4216[1U])
                                      : __Vtemp4232[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[2U] 
            = (3U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                      ? __Vtemp4205[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                            ? ((1U 
                                                & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                   ^ 
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                                ? __Vtemp4208[2U]
                                                : __Vtemp4216[2U])
                                            : __Vtemp4232[2U])));
    }
    VL_EXTEND_WW(70,67, __Vtemp4240, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2);
    __Vtemp4241[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                       << 2U);
    __Vtemp4241[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                                     << 2U));
    __Vtemp4241[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                                     << 2U));
    VL_EXTEND_WW(70,69, __Vtemp4242, __Vtemp4241);
    VL_EXTEND_WW(70,67, __Vtemp4243, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4240[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4242[0U]
                                      : __Vtemp4243[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4240[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4242[1U]
                                      : __Vtemp4243[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4240[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4242[2U]
                                      : __Vtemp4243[2U]));
    }
}

void Vriscv_soc___024root___combo__TOP__9(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__11(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__12(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__13(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__14(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__15(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__16(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__17(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__18(Vriscv_soc___024root* vlSelf);

void Vriscv_soc___024root___eval(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval\n"); );
    // Body
    Vriscv_soc___024root___combo__TOP__9(vlSelf);
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vriscv_soc___024root___sequent__TOP__11(vlSelf);
        Vriscv_soc___024root___sequent__TOP__12(vlSelf);
        Vriscv_soc___024root___sequent__TOP__13(vlSelf);
        Vriscv_soc___024root___sequent__TOP__14(vlSelf);
        Vriscv_soc___024root___sequent__TOP__15(vlSelf);
        Vriscv_soc___024root___sequent__TOP__16(vlSelf);
        Vriscv_soc___024root___sequent__TOP__17(vlSelf);
        Vriscv_soc___024root___sequent__TOP__18(vlSelf);
        Vriscv_soc___024root___sequent__TOP__19(vlSelf);
    }
    Vriscv_soc___024root___combo__TOP__20(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData Vriscv_soc___024root___change_request_1(Vriscv_soc___024root* vlSelf);

VL_INLINE_OPT QData Vriscv_soc___024root___change_request(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___change_request\n"); );
    // Body
    return (Vriscv_soc___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vriscv_soc___024root___change_request_1(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vriscv_soc___024root___eval_debug_assertions(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
