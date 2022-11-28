// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__9(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__9\n"); );
    // Variables
    CData/*1:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_182;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_197;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_247;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_314;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_329;
    VlWide<3>/*95:0*/ __Vtemp1332;
    // Body
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_217 
        = ((0x2004033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 0U : ((0x2005033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 1U : ((0x200503bU == (0xfe00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 2U : ((0x200403bU == 
                                       (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 3U : ((0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 4U
                                                : (
                                                   (0x2001033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 5U
                                                    : 
                                                   ((0x2002033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 6U
                                                     : 
                                                    ((0x2003033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 7U
                                                      : 
                                                     ((0x200003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 8U
                                                       : 
                                                      ((0x2006033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 9U
                                                        : 
                                                       ((0x2007033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 0xaU
                                                         : 
                                                        ((0x200703bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 0xbU
                                                          : 
                                                         ((0x200603bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 0xcU
                                                           : 
                                                          ((0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 0x38U
                                                            : 
                                                           ((0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 0x3aU
                                                             : 0U)))))))))))))));
    if ((1U & ((IData)((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst)))) {
        ++(vlSymsp->__Vcoverage[4291]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | (IData)((IData)((1U & (IData)((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)))))));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4292]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4293]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4294]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4295]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4296]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4297]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4298]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4299]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4300]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4301]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4302]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4303]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4304]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4305]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4306]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4307]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4308]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4309]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4310]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4311]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4312]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4313]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4314]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4315]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4316]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4317]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4318]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4319]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4320]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4321]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4322]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4323]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4324]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4325]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4326]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4327]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4328]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4329]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4330]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4331]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4332]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4333]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4334]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4335]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4336]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4337]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4338]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4339]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4340]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4341]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4342]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4343]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4344]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4345]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4346]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4347]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4348]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4349]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4350]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4351]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4352]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4353]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4354]);
        vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__difftest_inst) 
               | ((QData)((IData)((1U & (IData)(((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)) 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_152 
        = ((0x4033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 0U : ((0x4013U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 0U : ((0x2004033U == (0xfe00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 3U : ((0x2005033U == 
                                       (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 3U : ((0x200503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 3U
                                                : (
                                                   (0x200403bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 3U
                                                    : 
                                                   ((0x2000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 3U
                                                     : 
                                                    ((0x2001033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 3U
                                                      : 
                                                     ((0x2002033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 3U
                                                       : 
                                                      ((0x2003033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 3U
                                                        : 
                                                       ((0x200003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 3U
                                                         : 
                                                        ((0x2006033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 3U
                                                          : 
                                                         ((0x2007033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 3U
                                                           : 
                                                          ((0x200703bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 3U
                                                            : 
                                                           ((0x200603bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 3U
                                                             : 0U)))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_284 
        = ((0x2004033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 6U : ((0x2005033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 6U : ((0x200503bU == (0xfe00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 6U : ((0x200403bU == 
                                       (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 6U : ((0x2000033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 6U
                                                : (
                                                   (0x2001033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 6U
                                                    : 
                                                   ((0x2002033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 6U
                                                     : 
                                                    ((0x2003033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 6U
                                                      : 
                                                     ((0x200003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 6U
                                                       : 
                                                      ((0x2006033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 6U
                                                        : 
                                                       ((0x2007033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 6U
                                                         : 
                                                        ((0x200703bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 6U
                                                          : 
                                                         ((0x200603bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 6U
                                                           : 
                                                          ((0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 2U
                                                            : 
                                                           ((0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 0U
                                                             : 0xcU)))))))))))))));
    vlSelf->io_difftest_inst = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst;
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
        = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                   >> 0xfU))];
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
        = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
        [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                   >> 0x14U))];
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__w_rs_en)))) {
        ++(vlSymsp->__Vcoverage[5029]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__w_rs_en 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4964]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4965]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4966]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4967]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4968]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4969]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4970]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4971]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4972]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4973]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4974]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4975]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4976]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4977]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4978]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4979]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4980]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4981]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4982]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4983]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4984]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4985]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4986]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4987]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4988]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4989]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4990]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4991]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4992]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4993]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[4994]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[4995]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[4996]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[4997]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[4998]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[4999]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5000]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5001]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5002]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5003]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5004]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5005]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5006]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5007]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5008]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5009]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5010]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5011]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5012]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5013]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5014]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5015]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5016]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5017]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5018]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5019]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5020]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5021]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5022]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5023]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5024]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5025]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[5026]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5027]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[2U]))) {
        ++(vlSymsp->__Vcoverage[5028]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_232 
        = ((0x40005033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 0x1cU : ((0x40005013U == (0xfc00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                        ? 0x1dU : ((0x4000501bU == 
                                    (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                    ? 0x1fU : ((0x4000503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 0x1eU
                                                : (
                                                   (0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 0x20U
                                                    : 
                                                   ((0x5013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 0x21U
                                                     : 
                                                    ((0x501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 0x23U
                                                      : 
                                                     ((0x503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 0x22U
                                                       : 
                                                      ((0x40000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 0x14U
                                                        : 
                                                       ((0x4000003bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 0x16U
                                                         : 
                                                        ((0x2023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 0xbU
                                                          : 
                                                         ((0x6033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 0x24U
                                                           : 
                                                          ((0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 0x25U
                                                            : 
                                                           ((0x4033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 0x28U
                                                             : 
                                                            ((0x4013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                              ? 0x29U
                                                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_217))))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_167 
        = ((0x3013U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 0U : ((0x3033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 0U : ((0x40005033U == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 0U : ((0x40005013U 
                                       == (0xfc00707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 0U : ((0x4000501bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 0U
                                                : (
                                                   (0x4000503bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 0U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 0U
                                                     : 
                                                    ((0x5013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 0U
                                                      : 
                                                     ((0x501bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 0U
                                                       : 
                                                      ((0x503bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 0U
                                                        : 
                                                       ((0x40000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 0U
                                                         : 
                                                        ((0x4000003bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 0U
                                                          : 
                                                         ((0x2023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 1U
                                                           : 
                                                          ((0x6033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 0U
                                                            : 
                                                           ((0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 0U
                                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_152))))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_299 
        = ((0x40005033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 6U : ((0x40005013U == (0xfc00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 4U : ((0x4000501bU == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 4U : ((0x4000503bU 
                                       == (0xfe00707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 6U : ((0x5033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 6U
                                                : (
                                                   (0x5013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 4U
                                                    : 
                                                   ((0x501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 4U
                                                     : 
                                                    ((0x503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 6U
                                                      : 
                                                     ((0x40000033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 6U
                                                       : 
                                                      ((0x4000003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 6U
                                                        : 
                                                       ((0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 3U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 6U
                                                          : 
                                                         ((0x6013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 0U
                                                           : 
                                                          ((0x4033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 6U
                                                            : 
                                                           ((0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 0U
                                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_284))))))))))))))));
    if ((1U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2114]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (1U & vlSelf->io_difftest_inst));
    }
    if ((2U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2115]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (2U & vlSelf->io_difftest_inst));
    }
    if ((4U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2116]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (4U & vlSelf->io_difftest_inst));
    }
    if ((8U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2117]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (8U & vlSelf->io_difftest_inst));
    }
    if ((0x10U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2118]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x10U & vlSelf->io_difftest_inst));
    }
    if ((0x20U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2119]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x20U & vlSelf->io_difftest_inst));
    }
    if ((0x40U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2120]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x40U & vlSelf->io_difftest_inst));
    }
    if ((0x80U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2121]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x80U & vlSelf->io_difftest_inst));
    }
    if ((0x100U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2122]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x100U & vlSelf->io_difftest_inst));
    }
    if ((0x200U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2123]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x200U & vlSelf->io_difftest_inst));
    }
    if ((0x400U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2124]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x400U & vlSelf->io_difftest_inst));
    }
    if ((0x800U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2125]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x800U & vlSelf->io_difftest_inst));
    }
    if ((0x1000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2126]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x1000U & vlSelf->io_difftest_inst));
    }
    if ((0x2000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2127]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x2000U & vlSelf->io_difftest_inst));
    }
    if ((0x4000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2128]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x4000U & vlSelf->io_difftest_inst));
    }
    if ((0x8000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x8000U & vlSelf->io_difftest_inst));
    }
    if ((0x10000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2130]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x10000U & vlSelf->io_difftest_inst));
    }
    if ((0x20000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2131]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x20000U & vlSelf->io_difftest_inst));
    }
    if ((0x40000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2132]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x40000U & vlSelf->io_difftest_inst));
    }
    if ((0x80000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2133]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x80000U & vlSelf->io_difftest_inst));
    }
    if ((0x100000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2134]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x100000U & vlSelf->io_difftest_inst));
    }
    if ((0x200000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2135]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x200000U & vlSelf->io_difftest_inst));
    }
    if ((0x400000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2136]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x400000U & vlSelf->io_difftest_inst));
    }
    if ((0x800000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2137]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x800000U & vlSelf->io_difftest_inst));
    }
    if ((0x1000000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2138]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x1000000U & vlSelf->io_difftest_inst));
    }
    if ((0x2000000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2139]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x2000000U & vlSelf->io_difftest_inst));
    }
    if ((0x4000000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2140]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x4000000U & vlSelf->io_difftest_inst));
    }
    if ((0x8000000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2141]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x8000000U & vlSelf->io_difftest_inst));
    }
    if ((0x10000000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2142]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x10000000U & vlSelf->io_difftest_inst));
    }
    if ((0x20000000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2143]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x20000000U & vlSelf->io_difftest_inst));
    }
    if ((0x40000000U & (vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2144]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x40000000U & vlSelf->io_difftest_inst));
    }
    if (((vlSelf->io_difftest_inst ^ vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2145]);
        vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT____Vtogcov__io_difftest_inst) 
               | (0x80000000U & vlSelf->io_difftest_inst));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data)))) {
        ++(vlSymsp->__Vcoverage[5492]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5493]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5494]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5495]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5496]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5497]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5498]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5499]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5500]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5501]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5502]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5503]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5504]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5505]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5506]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5507]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5508]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5509]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5510]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5511]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5512]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5513]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5514]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5515]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5516]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5517]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5518]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5519]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5520]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5521]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5522]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5523]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5524]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5525]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5526]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5527]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5528]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5529]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5530]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5531]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5532]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5533]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5534]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5535]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5536]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5537]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5538]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5539]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5540]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5541]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5542]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5543]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5544]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5545]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5546]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5547]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5548]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5549]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5550]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5551]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5552]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5553]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5554]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5555]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs1_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data)))) {
        ++(vlSymsp->__Vcoverage[5556]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5557]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5558]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5559]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5560]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5561]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5562]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5563]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5564]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5565]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5566]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5567]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5568]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5569]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5570]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5571]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5572]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5573]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5574]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5575]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5576]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5577]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5578]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5579]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5580]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5581]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5582]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5583]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5584]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5585]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5586]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5587]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5588]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5589]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5590]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5591]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5592]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5593]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5594]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5595]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5596]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5597]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5598]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5599]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5600]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5601]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5602]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5603]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5604]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5605]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5606]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5607]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5608]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5609]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5610]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5611]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5612]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5613]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5614]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5615]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5616]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5617]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5618]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5619]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__regfile_rs2_data_MPORT_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    riscv_soc__DOT__core__DOT__decode__DOT___T_247 
        = ((0x5003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 4U : ((0x37U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 5U : ((0x2003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 6U : ((0x6003U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 7U : ((0x3023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 8U
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 9U
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 0xaU
                                                     : 
                                                    ((0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 0x18U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 0x19U
                                                       : 
                                                      ((0x101bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 0x1bU
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 0x1aU
                                                         : 
                                                        ((0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 0xcU
                                                          : 
                                                         ((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 0xdU
                                                           : 
                                                          ((0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 0x11U
                                                            : 
                                                           ((0x3033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 0x10U
                                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_232))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_182 
        = ((0x4003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 1U : ((0x1003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 1U : ((0x5003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 1U : ((0x37U == (0x7fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 1U : ((0x2003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 1U
                                                : (
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 1U
                                                    : 
                                                   ((0x3023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 1U
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 1U
                                                      : 
                                                     ((0x1023U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 1U
                                                       : 
                                                      ((0x1033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 0U
                                                        : 
                                                       ((0x1013U 
                                                         == 
                                                         (0xfc00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 0U
                                                         : 
                                                        ((0x101bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 0U
                                                          : 
                                                         ((0x103bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 0U
                                                           : 
                                                          ((0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 0U
                                                            : 
                                                           ((0x2013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 0U
                                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_167))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_314 
        = ((0x5003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 0U : ((0x37U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 1U : ((0x2003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 0U : ((0x6003U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 0U : ((0x3023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 3U
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 3U
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 3U
                                                     : 
                                                    ((0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 6U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 4U
                                                       : 
                                                      ((0x101bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 4U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 6U
                                                         : 
                                                        ((0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 6U
                                                          : 
                                                         ((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 0U
                                                           : 
                                                          ((0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 0U
                                                            : 
                                                           ((0x3033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 6U
                                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_299))))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_262 
        = ((0x5063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 0x30U : ((0x7063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                        ? 0x32U : ((0x4063U == (0x707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                    ? 0x34U : ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 0x36U
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 0x2eU
                                                    : 
                                                   ((0x3073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 0U
                                                     : 
                                                    ((0x7073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 1U
                                                      : 
                                                     ((0x2073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 2U
                                                       : 
                                                      ((0x6073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 3U
                                                        : 
                                                       ((0x1073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 4U
                                                         : 
                                                        ((0x5073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 5U
                                                          : 
                                                         ((0x3003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 0U
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 1U
                                                            : 
                                                           ((0x4003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 2U
                                                             : 
                                                            ((0x1003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                              ? 3U
                                                              : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_247))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_197 
        = ((0x17U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 0U : ((0x63U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 0U : ((0x5063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 0U : ((0x7063U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 0U : ((0x4063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 0U
                                                : (
                                                   (0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 0U
                                                    : 
                                                   ((0x1063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 0U
                                                     : 
                                                    ((0x3073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 2U
                                                      : 
                                                     ((0x7073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 2U
                                                       : 
                                                      ((0x2073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 2U
                                                        : 
                                                       ((0x6073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 2U
                                                         : 
                                                        ((0x1073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 2U
                                                          : 
                                                         ((0x5073U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 2U
                                                           : 
                                                          ((0x3003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 1U
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 1U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_182))))))))))))))));
    riscv_soc__DOT__core__DOT__decode__DOT___T_329 
        = ((0x5063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
            ? 7U : ((0x7063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                     ? 7U : ((0x4063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                              ? 7U : ((0x6063U == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                       ? 7U : ((0x1063U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                ? 7U
                                                : (
                                                   (0x3073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 5U
                                                    : 
                                                   ((0x7073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 5U
                                                     : 
                                                    ((0x2073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 5U
                                                      : 
                                                     ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                       ? 5U
                                                       : 
                                                      ((0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                        ? 5U
                                                        : 
                                                       ((0x5073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                         ? 5U
                                                         : 
                                                        ((0x3003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                          ? 0U
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                           ? 0U
                                                           : 
                                                          ((0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                            ? 0U
                                                            : 
                                                           ((0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                             ? 0U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_314))))))))))))))));
    if ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__opType = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType = 6U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__opType 
            = ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                ? 0U : ((0x1bU == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                         ? 0U : ((0x3bU == (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                  ? 0U : ((0x7033U 
                                           == (0xfe00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                           ? 0U : (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 0U
                                                    : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_197))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType 
            = ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                ? 0U : ((0x1bU == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                         ? 0U : ((0x3bU == (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                  ? 6U : ((0x7033U 
                                           == (0xfe00707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                           ? 6U : (
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                    ? 0U
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                     ? 1U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))
                                                      ? 7U
                                                      : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_329))))))));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__opType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__opType)))) {
        ++(vlSymsp->__Vcoverage[5738]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__opType 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__opType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__opType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__opType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__opType)))) {
        ++(vlSymsp->__Vcoverage[5739]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__opType 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__opType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__opType)));
    }
    VL_EXTEND_WQ(66,64, __Vtemp1332, ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                                       ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                             >> 0x1fU)
                                             ? 0xfffffffffffffULL
                                             : 0ULL) 
                                           << 0xcU) 
                                          | (QData)((IData)(
                                                            ((0xfe0U 
                                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                                 >> 0x14U)) 
                                                             | (0x1fU 
                                                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                                   >> 7U))))))
                                       : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                                           ? (((QData)((IData)(
                                                               ((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                                 >> 0x1fU)
                                                                 ? 0xffffffffU
                                                                 : 0U))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (0xfffff000U 
                                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst))))
                                           : ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                                               ? ((
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                     >> 0x1fU)
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                                     >> 0x19U))))
                                               : 0ULL))));
    if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___reg_imm_T_51[0U] 
            = (((IData)(((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                          >> 0x1fU) ? 0x3fffffffffffffULL
                          : 0ULL)) << 0xcU) | ((0x800U 
                                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                        >> 7U)))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___reg_imm_T_51[1U] 
            = (((IData)(((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                          >> 0x1fU) ? 0x3fffffffffffffULL
                          : 0ULL)) >> 0x14U) | ((IData)(
                                                        (((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                           >> 0x1fU)
                                                           ? 0x3fffffffffffffULL
                                                           : 0ULL) 
                                                         >> 0x20U)) 
                                                << 0xcU));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___reg_imm_T_51[2U] 
            = ((IData)((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                          >> 0x1fU) ? 0x3fffffffffffffULL
                          : 0ULL) >> 0x20U)) >> 0x14U);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___reg_imm_T_51[0U] 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                ? (((IData)(((0x80000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)
                              ? 0xfffffffffffULL : 0ULL)) 
                    << 0x16U) | ((0x3fc000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                               << 2U)) 
                                 | ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                >> 7U)) 
                                    | (0x1ffeU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst 
                                                  >> 0x12U)))))
                : __Vtemp1332[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___reg_imm_T_51[1U] 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                ? (((IData)(((0x80000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)
                              ? 0xfffffffffffULL : 0ULL)) 
                    >> 0xaU) | ((IData)((((0x80000U 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)
                                           ? 0xfffffffffffULL
                                           : 0ULL) 
                                         >> 0x20U)) 
                                << 0x16U)) : __Vtemp1332[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___reg_imm_T_51[2U] 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                ? ((IData)((((0x80000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regInst)
                              ? 0xfffffffffffULL : 0ULL) 
                            >> 0x20U)) >> 0xaU) : __Vtemp1332[2U]);
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[5740]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((0xeU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[5741]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((0xdU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[5742]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((0xbU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[5743]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
}

void Vriscv_soc___024root___combo__TOP__5(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__6(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__7(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__8(Vriscv_soc___024root* vlSelf);

void Vriscv_soc___024root___eval(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval\n"); );
    // Body
    Vriscv_soc___024root___combo__TOP__5(vlSelf);
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vriscv_soc___024root___sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vriscv_soc___024root___sequent__TOP__7(vlSelf);
        Vriscv_soc___024root___sequent__TOP__8(vlSelf);
        Vriscv_soc___024root___sequent__TOP__9(vlSelf);
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
}
#endif  // VL_DEBUG
