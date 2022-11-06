// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

//==========

VL_INLINE_OPT void Vriscv_soc___024root___combo__TOP__1(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___combo__TOP__1\n"); );
    // Body
    if (((IData)(vlSelf->clock) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__clock))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->riscv_soc__DOT____Vtogcov__clock = vlSelf->clock;
    }
    if (((IData)(vlSelf->reset) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->riscv_soc__DOT____Vtogcov__reset = vlSelf->reset;
    }
    if (((IData)(vlSelf->io_loadingValues) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_loadingValues))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_loadingValues 
            = vlSelf->io_loadingValues;
    }
    if ((1U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0xfffeU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (1U & (IData)(vlSelf->io_value1)));
    }
    if ((2U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0xfffdU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (2U & (IData)(vlSelf->io_value1)));
    }
    if ((4U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0xfffbU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (4U & (IData)(vlSelf->io_value1)));
    }
    if ((8U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0xfff7U & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (8U & (IData)(vlSelf->io_value1)));
    }
    if ((0x10U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0xffefU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (0x10U & (IData)(vlSelf->io_value1)));
    }
    if ((0x20U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0xffdfU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (0x20U & (IData)(vlSelf->io_value1)));
    }
    if ((0x40U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0xffbfU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (0x40U & (IData)(vlSelf->io_value1)));
    }
    if ((0x80U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0xff7fU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (0x80U & (IData)(vlSelf->io_value1)));
    }
    if ((0x100U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0xfeffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (0x100U & (IData)(vlSelf->io_value1)));
    }
    if ((0x200U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0xfdffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (0x200U & (IData)(vlSelf->io_value1)));
    }
    if ((0x400U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0xfbffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (0x400U & (IData)(vlSelf->io_value1)));
    }
    if ((0x800U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0xf7ffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (0x800U & (IData)(vlSelf->io_value1)));
    }
    if ((0x1000U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0xefffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (0x1000U & (IData)(vlSelf->io_value1)));
    }
    if ((0x2000U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0xdfffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (0x2000U & (IData)(vlSelf->io_value1)));
    }
    if ((0x4000U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0xbfffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (0x4000U & (IData)(vlSelf->io_value1)));
    }
    if ((0x8000U & ((IData)(vlSelf->io_value1) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value1 
            = ((0x7fffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value1)) 
               | (0x8000U & (IData)(vlSelf->io_value1)));
    }
    if ((1U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0xfffeU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (1U & (IData)(vlSelf->io_value2)));
    }
    if ((2U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0xfffdU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (2U & (IData)(vlSelf->io_value2)));
    }
    if ((4U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0xfffbU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (4U & (IData)(vlSelf->io_value2)));
    }
    if ((8U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0xfff7U & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (8U & (IData)(vlSelf->io_value2)));
    }
    if ((0x10U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0xffefU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (0x10U & (IData)(vlSelf->io_value2)));
    }
    if ((0x20U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0xffdfU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (0x20U & (IData)(vlSelf->io_value2)));
    }
    if ((0x40U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0xffbfU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (0x40U & (IData)(vlSelf->io_value2)));
    }
    if ((0x80U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0xff7fU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (0x80U & (IData)(vlSelf->io_value2)));
    }
    if ((0x100U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0xfeffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (0x100U & (IData)(vlSelf->io_value2)));
    }
    if ((0x200U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0xfdffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (0x200U & (IData)(vlSelf->io_value2)));
    }
    if ((0x400U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0xfbffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (0x400U & (IData)(vlSelf->io_value2)));
    }
    if ((0x800U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0xf7ffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (0x800U & (IData)(vlSelf->io_value2)));
    }
    if ((0x1000U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0xefffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (0x1000U & (IData)(vlSelf->io_value2)));
    }
    if ((0x2000U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0xdfffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (0x2000U & (IData)(vlSelf->io_value2)));
    }
    if ((0x4000U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0xbfffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (0x4000U & (IData)(vlSelf->io_value2)));
    }
    if ((0x8000U & ((IData)(vlSelf->io_value2) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_value2 
            = ((0x7fffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_value2)) 
               | (0x8000U & (IData)(vlSelf->io_value2)));
    }
}

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__3(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__3\n"); );
    // Variables
    SData/*15:0*/ __Vdly__riscv_soc__DOT__x;
    SData/*15:0*/ __Vdly__riscv_soc__DOT__y;
    // Body
    __Vdly__riscv_soc__DOT__y = vlSelf->riscv_soc__DOT__y;
    __Vdly__riscv_soc__DOT__x = vlSelf->riscv_soc__DOT__x;
    ++(vlSymsp->__Vcoverage[87]);
    if (vlSelf->io_loadingValues) {
        ++(vlSymsp->__Vcoverage[86]);
    }
    if ((1U & (~ (IData)(vlSelf->io_loadingValues)))) {
        if (((IData)(vlSelf->riscv_soc__DOT__x) > (IData)(vlSelf->riscv_soc__DOT__y))) {
            ++(vlSymsp->__Vcoverage[84]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->io_loadingValues)))) {
        if (((IData)(vlSelf->riscv_soc__DOT__x) <= (IData)(vlSelf->riscv_soc__DOT__y))) {
            ++(vlSymsp->__Vcoverage[85]);
        }
    }
    if (vlSelf->io_loadingValues) {
        __Vdly__riscv_soc__DOT__x = vlSelf->io_value1;
        __Vdly__riscv_soc__DOT__y = vlSelf->io_value2;
    } else if (((IData)(vlSelf->riscv_soc__DOT__x) 
                > (IData)(vlSelf->riscv_soc__DOT__y))) {
        __Vdly__riscv_soc__DOT__x = (0xffffU & ((IData)(vlSelf->riscv_soc__DOT__x) 
                                                - (IData)(vlSelf->riscv_soc__DOT__y)));
    } else {
        __Vdly__riscv_soc__DOT__y = (0xffffU & ((IData)(vlSelf->riscv_soc__DOT__y) 
                                                - (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    vlSelf->riscv_soc__DOT__y = __Vdly__riscv_soc__DOT__y;
    vlSelf->riscv_soc__DOT__x = __Vdly__riscv_soc__DOT__x;
    vlSelf->io_outputValid = (0U == (IData)(vlSelf->riscv_soc__DOT__y));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__y) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0xfffeU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (1U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__y) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0xfffdU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (2U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__y) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0xfffbU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (4U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__y) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0xfff7U 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (8U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__y) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0xffefU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (0x10U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__y) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0xffdfU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (0x20U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((0x40U & ((IData)(vlSelf->riscv_soc__DOT__y) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0xffbfU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (0x40U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((0x80U & ((IData)(vlSelf->riscv_soc__DOT__y) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0xff7fU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (0x80U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((0x100U & ((IData)(vlSelf->riscv_soc__DOT__y) 
                   ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0xfeffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (0x100U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((0x200U & ((IData)(vlSelf->riscv_soc__DOT__y) 
                   ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0xfdffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (0x200U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((0x400U & ((IData)(vlSelf->riscv_soc__DOT__y) 
                   ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0xfbffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (0x400U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((0x800U & ((IData)(vlSelf->riscv_soc__DOT__y) 
                   ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0xf7ffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (0x800U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((0x1000U & ((IData)(vlSelf->riscv_soc__DOT__y) 
                    ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0xefffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (0x1000U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((0x2000U & ((IData)(vlSelf->riscv_soc__DOT__y) 
                    ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0xdfffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (0x2000U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((0x4000U & ((IData)(vlSelf->riscv_soc__DOT__y) 
                    ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0xbfffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (0x4000U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((0x8000U & ((IData)(vlSelf->riscv_soc__DOT__y) 
                    ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->riscv_soc__DOT____Vtogcov__y = ((0x7fffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__y)) 
                                                | (0x8000U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__y)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__x) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0xfffeU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (1U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__x) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0xfffdU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (2U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__x) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0xfffbU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (4U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__x) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0xfff7U 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (8U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__x) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0xffefU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (0x10U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__x) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0xffdfU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (0x20U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    if ((0x40U & ((IData)(vlSelf->riscv_soc__DOT__x) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0xffbfU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (0x40U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    if ((0x80U & ((IData)(vlSelf->riscv_soc__DOT__x) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0xff7fU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (0x80U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    if ((0x100U & ((IData)(vlSelf->riscv_soc__DOT__x) 
                   ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0xfeffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (0x100U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    if ((0x200U & ((IData)(vlSelf->riscv_soc__DOT__x) 
                   ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0xfdffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (0x200U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    if ((0x400U & ((IData)(vlSelf->riscv_soc__DOT__x) 
                   ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0xfbffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (0x400U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    if ((0x800U & ((IData)(vlSelf->riscv_soc__DOT__x) 
                   ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0xf7ffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (0x800U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    if ((0x1000U & ((IData)(vlSelf->riscv_soc__DOT__x) 
                    ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0xefffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (0x1000U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    if ((0x2000U & ((IData)(vlSelf->riscv_soc__DOT__x) 
                    ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0xdfffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (0x2000U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    if ((0x4000U & ((IData)(vlSelf->riscv_soc__DOT__x) 
                    ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0xbfffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (0x4000U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    if ((0x8000U & ((IData)(vlSelf->riscv_soc__DOT__x) 
                    ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->riscv_soc__DOT____Vtogcov__x = ((0x7fffU 
                                                 & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__x)) 
                                                | (0x8000U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__x)));
    }
    vlSelf->io_outputGCD = vlSelf->riscv_soc__DOT__x;
    if (((IData)(vlSelf->io_outputValid) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputValid))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputValid 
            = vlSelf->io_outputValid;
    }
    if ((1U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0xfffeU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (1U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((2U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0xfffdU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (2U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((4U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0xfffbU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (4U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((8U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0xfff7U & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (8U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x10U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0xffefU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (0x10U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x20U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0xffdfU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (0x20U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x40U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0xffbfU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (0x40U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x80U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0xff7fU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (0x80U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x100U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0xfeffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (0x100U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x200U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0xfdffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (0x200U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x400U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0xfbffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (0x400U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x800U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0xf7ffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (0x800U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x1000U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0xefffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (0x1000U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x2000U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0xdfffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (0x2000U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x4000U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0xbfffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (0x4000U & (IData)(vlSelf->io_outputGCD)));
    }
    if ((0x8000U & ((IData)(vlSelf->io_outputGCD) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD 
            = ((0x7fffU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD)) 
               | (0x8000U & (IData)(vlSelf->io_outputGCD)));
    }
}

void Vriscv_soc___024root___eval(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval\n"); );
    // Body
    Vriscv_soc___024root___combo__TOP__1(vlSelf);
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vriscv_soc___024root___sequent__TOP__3(vlSelf);
    }
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
    if (VL_UNLIKELY((vlSelf->io_loadingValues & 0xfeU))) {
        Verilated::overWidthError("io_loadingValues");}
}
#endif  // VL_DEBUG
