// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__10(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__10\n"); );
    // Body
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 8U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5741]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 9U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5742]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5743]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5744]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5745]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5746]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5747]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5748]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5749]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5750]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5751]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5752]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5753]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5754]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5755]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5756]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5757]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5758]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5759]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5760]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5761]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5762]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5763]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5764]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
               ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5765]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5766]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5767]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5768]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5769]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5770]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5771]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5772]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5773]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5774]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5775]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5776]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5777]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5778]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5779]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5780]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5781]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5782]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5783]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5784]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5785]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5786]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5787]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5788]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5789]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5790]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5791]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5792]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5793]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5794]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5795]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5796]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6380]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6381]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6382]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6383]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6384]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6385]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6386]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6387]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6388]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6389]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6390]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6391]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6392]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6393]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6394]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6395]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6396]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6397]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6398]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6399]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6400]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6401]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6402]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6403]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6404]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6405]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6406]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6407]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6408]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6409]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6410]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6411]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6412]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6413]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6414]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6415]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6416]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6417]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6418]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6419]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6420]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6421]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6422]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6423]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6424]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6425]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6426]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6427]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6428]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6429]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6430]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6431]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6432]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6433]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6434]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6435]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6436]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6437]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6438]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6439]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6440]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6441]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6442]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6443]);
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
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] = 0U;
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__w_rs_en)))) {
        ++(vlSymsp->__Vcoverage[6067]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__w_rs_en 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN_11 
        = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)
                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en)
                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U])));
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6002]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6003]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6004]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6005]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6006]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6007]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6008]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6009]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6010]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6011]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6012]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6013]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6014]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6015]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6016]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6017]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6018]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6019]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6020]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6021]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6022]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6023]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6024]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6025]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6026]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6027]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6028]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6029]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6030]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6031]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6032]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6033]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6034]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6035]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6036]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6037]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6038]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6039]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6040]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6041]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6042]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6043]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6044]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6045]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6046]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6047]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6048]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6049]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6050]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6051]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6052]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6053]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6054]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6055]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6056]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6057]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6058]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6059]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6060]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6061]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6062]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6063]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6064]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6065]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6066]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U]);
    }
}

VL_INLINE_OPT void Vriscv_soc___024root___combo__TOP__11(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___combo__TOP__11\n"); );
    // Body
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_35 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                                             ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wstrb))
                                             : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb
                                                 : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wstrb)))));
}

void Vriscv_soc___024root___combo__TOP__5(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__6(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__7(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__8(Vriscv_soc___024root* vlSelf);
void Vriscv_soc___024root___sequent__TOP__9(Vriscv_soc___024root* vlSelf);

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
        Vriscv_soc___024root___sequent__TOP__10(vlSelf);
    }
    Vriscv_soc___024root___combo__TOP__11(vlSelf);
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
