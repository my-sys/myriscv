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
    VlWide<4>/*127:0*/ __Vtemp4099;
    VlWide<4>/*127:0*/ __Vtemp4107;
    // Body
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[11100]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[11101]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[11102]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[11103]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[11104]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[11105]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[11106]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[11107]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[11108]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[11109]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[11110]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[11111]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[11112]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[11113]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[11114]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[11115]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[11116]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[11117]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[11118]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
               ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[11119]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[11120]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[11121]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[11122]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[11123]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[11124]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[11125]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[11126]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[11127]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[11128]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[11129]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[11130]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[11131]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[11132]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[11133]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[11134]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[11135]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[11136]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[11137]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[11138]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[11139]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[11140]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[11141]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[11142]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[11143]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[11144]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[11145]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[11146]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[11147]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[11148]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[11149]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[11150]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                   >> 0x1fU))) << 0x3fU));
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
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType 
        = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
            ? 6U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                     ? 0xcU : ((0x1bU == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                ? 0xcU : ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                           ? 6U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 6U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 0xcU
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 1U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 7U
                                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_329)))))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN_13));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc)))) {
        ++(vlSymsp->__Vcoverage[5446]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5447]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5448]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5449]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5450]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5451]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5452]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5453]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5454]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5455]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5456]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5457]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5458]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5459]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5460]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5461]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5462]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5463]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5464]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5465]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5466]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5467]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5468]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5469]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5470]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5471]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5472]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5473]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5474]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5475]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5476]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5477]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5478]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5479]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5480]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5481]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5482]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5483]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5484]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5485]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5486]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5487]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5488]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5489]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5490]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5491]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5492]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5493]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5494]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5495]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5496]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5497]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5498]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5499]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5500]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5501]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5502]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5503]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5504]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5505]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5506]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5507]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5508]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5509]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_next_pc_valid)))) {
        ++(vlSymsp->__Vcoverage[11215]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_next_pc_valid 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[2U]))) {
        ++(vlSymsp->__Vcoverage[11995]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc)))) {
        ++(vlSymsp->__Vcoverage[11151]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | (IData)((IData)((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]))));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 1U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[11152]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 2U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[11153]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 3U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[11154]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 4U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[11155]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 5U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[11156]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 6U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[11157]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 7U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[11158]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 8U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[11159]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 9U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[11160]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[11161]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[11162]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[11163]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[11164]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[11165]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[11166]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[11167]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[11168]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[11169]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[11170]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[11171]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[11172]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[11173]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[11174]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[11175]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[11176]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[11177]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[11178]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[11179]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[11180]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[11181]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[11182]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
               ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[11183]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[11184]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[11185]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[11186]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[11187]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[11188]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[11189]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[11190]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[11191]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[11192]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[11193]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[11194]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[11195]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[11196]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[11197]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[11198]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[11199]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[11200]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[11201]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[11202]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[11203]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[11204]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[11205]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[11206]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[11207]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[11208]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[11209]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[11210]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[11211]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[11212]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[11213]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[11214]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__decode_io_in_stall))) {
        ++(vlSymsp->__Vcoverage[6296]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__decode_io_in_stall 
            = vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_rs_en 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_mem_en 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)
            ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_io_bus2_ready))) {
        ++(vlSymsp->__Vcoverage[5309]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_io_bus2_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready;
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_8 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_ready 
        = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                          >> 0x1fU))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_io_bus1_ready))) {
        ++(vlSymsp->__Vcoverage[5307]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_io_bus1_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready;
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_ready 
        = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                          >> 0x1fU))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready)
            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid) 
         ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_valid))) {
        ++(vlSymsp->__Vcoverage[2290]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid;
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1 = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready) 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cache_bus_r_ready))) {
        ++(vlSymsp->__Vcoverage[4902]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cache_bus_r_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready;
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T_206 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__d_cache_io_cache_bus_r_ready))) {
        ++(vlSymsp->__Vcoverage[5305]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__d_cache_io_cache_bus_r_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready;
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T_206 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cache_bus_r_bits_rlast))) {
        ++(vlSymsp->__Vcoverage[4901]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cache_bus_r_bits_rlast 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast;
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_380 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__d_cache_io_cache_bus_r_bits_rlast))) {
        ++(vlSymsp->__Vcoverage[5304]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__d_cache_io_cache_bus_r_bits_rlast 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast;
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_380 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2355]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0xfeU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2356]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0xfdU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2357]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0xfbU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2358]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0xf7U & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2359]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0xefU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2360]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0xdfU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)));
    }
    if ((0x40U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2361]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0xbfU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (0x40U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)));
    }
    if ((0x80U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59) 
                  ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)))) {
        ++(vlSymsp->__Vcoverage[2362]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen 
            = ((0x7fU & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_arlen)) 
               | (0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr)))) {
        ++(vlSymsp->__Vcoverage[2291]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2292]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2293]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2294]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2295]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2296]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2297]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2298]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2299]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2300]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2301]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2302]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2303]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2304]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2305]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2306]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2307]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2308]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2309]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2310]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2311]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2312]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2313]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2314]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2315]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2316]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2317]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2318]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2319]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2320]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2321]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2322]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2323]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2324]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2325]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2326]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2327]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2328]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2329]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2330]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2331]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2332]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2333]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2334]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2335]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2336]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2337]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2338]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2339]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2340]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2341]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2342]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2343]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2344]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2345]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2346]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2347]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2348]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2349]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2350]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2351]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2352]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2353]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2354]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_ar_bits_araddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
        = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
            ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
            : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr);
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__w_rs_en)))) {
        ++(vlSymsp->__Vcoverage[11551]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__w_rs_en 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11486]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11487]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11488]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11489]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11490]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11491]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11492]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11493]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11494]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11495]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11496]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11497]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11498]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11499]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11500]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11501]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11502]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11503]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11504]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11505]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11506]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11507]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11508]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11509]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11510]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11511]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11512]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11513]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11514]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11515]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[11516]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11517]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11518]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11519]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11520]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11521]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11522]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11523]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11524]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11525]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11526]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11527]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11528]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11529]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11530]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11531]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11532]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11533]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11534]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11535]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11536]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11537]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11538]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11539]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11540]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11541]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11542]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11543]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11544]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11545]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11546]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11547]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[11548]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[11549]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[2U]))) {
        ++(vlSymsp->__Vcoverage[11550]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_51 
        = ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
            ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                  >> 0x1fU) ? 0xfffffffffffffULL : 0ULL) 
                << 0xcU) | (QData)((IData)(((0x800U 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                     >> 7U)))))))
            : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                      >> 0x1fU) ? 0xfffffffffffULL : 0ULL) 
                    << 0x14U) | (QData)((IData)(((0xff000U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                          >> 0x14U)))))))
                : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                    ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                          >> 0x1fU) ? 0xfffffffffffffULL
                          : 0ULL) << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                                    >> 7U))))))
                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                        ? (((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                              >> 0x1fU)
                                              ? 0xffffffffU
                                              : 0U))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))))
                        : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                            ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                  >> 0x1fU) ? 0xfffffffffffffULL
                                  : 0ULL) << 0xcU) 
                               | (QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                  >> 0x14U))))
                            : 0ULL)))));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[13449]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((0xeU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[13450]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((0xdU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[13451]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((0xbU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[13452]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_rs_en) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_w_rs_en))) {
        ++(vlSymsp->__Vcoverage[6058]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_w_rs_en 
            = vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_rs_en;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_mem_en) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_w_mem_en))) {
        ++(vlSymsp->__Vcoverage[6295]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_w_mem_en 
            = vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_mem_en;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__stall))) {
        ++(vlSymsp->__Vcoverage[13448]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__stall 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_mem_avalid))) {
        ++(vlSymsp->__Vcoverage[6294]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_mem_avalid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid;
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_1 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall));
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_6 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType)))) {
        ++(vlSymsp->__Vcoverage[6059]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType 
            = ((0x3eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType)))) {
        ++(vlSymsp->__Vcoverage[6060]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType 
            = ((0x3dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType)))) {
        ++(vlSymsp->__Vcoverage[6061]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType 
            = ((0x3bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType)))) {
        ++(vlSymsp->__Vcoverage[6062]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType 
            = ((0x37U & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType)))) {
        ++(vlSymsp->__Vcoverage[6063]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType 
            = ((0x2fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType)))) {
        ++(vlSymsp->__Vcoverage[6064]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType 
            = ((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_out_exuType)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType)));
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
        = ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
            ? (QData)((IData)((0x7ffU & ((IData)(0xfU) 
                                         << (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_addr))))))
            : ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
                ? (QData)((IData)((0x1ffU & ((IData)(3U) 
                                             << (7U 
                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_addr))))))
                : ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
                    ? (QData)((IData)((0x7fffU & ((IData)(0xffU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_addr))))))
                    : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))
                        ? (QData)((IData)((0xffU & 
                                           ((IData)(1U) 
                                            << (7U 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_addr))))))
                        : 0ULL))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_24 
        = (3U & (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready)))
                  ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                     - (IData)(1U)) : ((((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_8)) 
                                        & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w)))
                                        ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                                           - (IData)(1U))
                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_ready) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_wb_ready))) {
        ++(vlSymsp->__Vcoverage[5442]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_wb_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_ready;
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_ready));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_ready) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_ready))) {
        ++(vlSymsp->__Vcoverage[5376]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_ready;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_ready));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_1 = 
        ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1) 
         | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_2 = 
        ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1) 
         | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_20 = 
        ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)
          ? ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)
              ? ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                  ? ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)) 
                     | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready))
                  : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready))
              : (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready))
          : ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1)) 
             & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready)));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T_206) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_383 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_384 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? 0xffffU : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_387 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                    ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata
                    : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))
                        ? vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U])))))
                : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_383 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_384 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_387 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata;
    }
    VL_EXTEND_WQ(128,64, __Vtemp4099, vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T_206) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[0U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[0U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[0U])
                : __Vtemp4099[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[1U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[1U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[1U])
                : __Vtemp4099[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[2U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[2U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[2U])
                : __Vtemp4099[2U]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata[3U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[3U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_cache_wdata_T_2[3U])
                : __Vtemp4099[3U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_386[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U];
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T_206) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_383 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_384 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? 0xffffU : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_387 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata
                    : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                        ? vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U])))))
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_383 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_384 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_387 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata;
    }
    VL_EXTEND_WQ(128,64, __Vtemp4107, vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T_206) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[0U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U])
                : __Vtemp4107[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U])
                : __Vtemp4107[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U])
                : __Vtemp4107[2U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                    ? ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U] 
                        & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
                       | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U] 
                          & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])))
                    : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U])
                : __Vtemp4107[3U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_386[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_401 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_380) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_402 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_380) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish))
            ? 3U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_403 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_380) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_460 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish)
            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)) 
                   & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                        & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                           >> 1U)) | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                      & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                         >> 1U))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish)))
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T_206)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_380)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish))
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_401 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_380) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_399)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_402 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_380) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_399))
            ? 3U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_403 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_380) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_399)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_460 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish)
            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)) 
                   & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                        & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                           >> 1U)) | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                      & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                         >> 1U))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish)))
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T_206)
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_380)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish))
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish))));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr) 
               ^ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr)))) {
        ++(vlSymsp->__Vcoverage[14144]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[14145]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[14146]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[14147]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[14148]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[14149]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[14150]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[14151]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[14152]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[14153]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[14154]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[14155]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[14156]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[14157]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[14158]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[14159]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[14160]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[14161]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[14162]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[14163]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[14164]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[14165]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[14166]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[14167]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[14168]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[14169]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[14170]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[14171]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[14172]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[14173]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[14174]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[14175]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[14176]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[14177]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[14178]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[14179]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[14180]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[14181]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[14182]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[14183]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[14184]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[14185]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[14186]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[14187]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[14188]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[14189]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[14190]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[14191]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[14192]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[14193]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[14194]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[14195]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[14196]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[14197]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[14198]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[14199]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[14200]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[14201]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[14202]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[14203]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[14204]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[14205]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[14206]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[14207]);
        vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__axi_ram__DOT____Vtogcov__mem_raddr) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_flush))) {
        ++(vlSymsp->__Vcoverage[11472]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_flush 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN_13 
        = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)
                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)
                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN_7 
        = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)
                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid)
                     : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                        >> 1U))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN_8 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)
               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en)
               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_w_mem_en)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN_11 
        = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)
                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en)
                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U])));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb)))) {
        ++(vlSymsp->__Vcoverage[13723]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[13724]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[13725]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[13726]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[13727]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[13728]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[13729]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[13730]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[13731]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[13732]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[13733]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[13734]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[13735]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[13736]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[13737]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[13738]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[13739]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[13740]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[13741]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[13742]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[13743]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[13744]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[13745]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[13746]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[13747]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[13748]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[13749]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[13750]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[13751]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[13752]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[13753]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[13754]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[13755]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[13756]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[13757]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[13758]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[13759]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[13760]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[13761]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[13762]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[13763]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[13764]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[13765]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[13766]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[13767]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[13768]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[13769]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[13770]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[13771]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[13772]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[13773]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[13774]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[13775]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[13776]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[13777]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[13778]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[13779]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[13780]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[13781]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[13782]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[13783]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[13784]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[13785]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[13786]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__mem_wstrb) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_14 
        = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)
                  ? ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid))
                  : ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid))));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_flush))) {
        ++(vlSymsp->__Vcoverage[5510]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_flush 
            = vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___GEN_0 
        = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)
               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall)
               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_stall)));
}

VL_INLINE_OPT void Vriscv_soc___024root___combo__TOP__20(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___combo__TOP__20\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp4114;
    VlWide<3>/*95:0*/ __Vtemp4115;
    VlWide<3>/*95:0*/ __Vtemp4116;
    VlWide<3>/*95:0*/ __Vtemp4120;
    VlWide<3>/*95:0*/ __Vtemp4121;
    VlWide<3>/*95:0*/ __Vtemp4126;
    VlWide<3>/*95:0*/ __Vtemp4127;
    VlWide<5>/*159:0*/ __Vtemp4137;
    VlWide<5>/*159:0*/ __Vtemp4138;
    VlWide<5>/*159:0*/ __Vtemp4139;
    VlWide<5>/*159:0*/ __Vtemp4140;
    VlWide<5>/*159:0*/ __Vtemp4141;
    VlWide<3>/*95:0*/ __Vtemp4149;
    VlWide<3>/*95:0*/ __Vtemp4150;
    VlWide<3>/*95:0*/ __Vtemp4151;
    VlWide<3>/*95:0*/ __Vtemp4154;
    VlWide<3>/*95:0*/ __Vtemp4157;
    VlWide<3>/*95:0*/ __Vtemp4164;
    VlWide<3>/*95:0*/ __Vtemp4165;
    VlWide<3>/*95:0*/ __Vtemp4166;
    VlWide<3>/*95:0*/ __Vtemp4167;
    VlWide<3>/*95:0*/ __Vtemp4170;
    VlWide<3>/*95:0*/ __Vtemp4174;
    VlWide<3>/*95:0*/ __Vtemp4181;
    VlWide<3>/*95:0*/ __Vtemp4182;
    VlWide<3>/*95:0*/ __Vtemp4183;
    VlWide<3>/*95:0*/ __Vtemp4186;
    VlWide<3>/*95:0*/ __Vtemp4189;
    VlWide<3>/*95:0*/ __Vtemp4196;
    VlWide<3>/*95:0*/ __Vtemp4197;
    VlWide<3>/*95:0*/ __Vtemp4198;
    VlWide<3>/*95:0*/ __Vtemp4199;
    VlWide<3>/*95:0*/ __Vtemp4202;
    VlWide<3>/*95:0*/ __Vtemp4206;
    VlWide<3>/*95:0*/ __Vtemp4215;
    VlWide<3>/*95:0*/ __Vtemp4216;
    VlWide<3>/*95:0*/ __Vtemp4217;
    VlWide<3>/*95:0*/ __Vtemp4218;
    VlWide<3>/*95:0*/ __Vtemp4219;
    VlWide<3>/*95:0*/ __Vtemp4222;
    VlWide<3>/*95:0*/ __Vtemp4223;
    VlWide<3>/*95:0*/ __Vtemp4224;
    VlWide<3>/*95:0*/ __Vtemp4225;
    VlWide<3>/*95:0*/ __Vtemp4226;
    VlWide<3>/*95:0*/ __Vtemp4227;
    VlWide<3>/*95:0*/ __Vtemp4229;
    VlWide<3>/*95:0*/ __Vtemp4230;
    VlWide<3>/*95:0*/ __Vtemp4231;
    VlWide<3>/*95:0*/ __Vtemp4232;
    VlWide<3>/*95:0*/ __Vtemp4233;
    VlWide<3>/*95:0*/ __Vtemp4234;
    VlWide<3>/*95:0*/ __Vtemp4238;
    VlWide<3>/*95:0*/ __Vtemp4239;
    VlWide<3>/*95:0*/ __Vtemp4240;
    VlWide<3>/*95:0*/ __Vtemp4241;
    VlWide<3>/*95:0*/ __Vtemp4242;
    VlWide<3>/*95:0*/ __Vtemp4249;
    VlWide<3>/*95:0*/ __Vtemp4250;
    VlWide<3>/*95:0*/ __Vtemp4258;
    VlWide<3>/*95:0*/ __Vtemp4259;
    VlWide<3>/*95:0*/ __Vtemp4260;
    VlWide<3>/*95:0*/ __Vtemp4261;
    VlWide<4>/*127:0*/ __Vtemp4268;
    VlWide<4>/*127:0*/ __Vtemp4269;
    // Body
    __Vtemp4114[0U] = 1U;
    __Vtemp4114[1U] = 0U;
    __Vtemp4114[2U] = 0U;
    __Vtemp4115[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       << 1U);
    __Vtemp4115[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                     << 1U));
    __Vtemp4115[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                     << 1U));
    VL_ADD_W(3, __Vtemp4116, __Vtemp4114, __Vtemp4115);
    __Vtemp4120[0U] = 1U;
    __Vtemp4120[1U] = 0U;
    __Vtemp4120[2U] = 0U;
    VL_ADD_W(3, __Vtemp4121, __Vtemp4120, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q);
    if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vtemp4126[0U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                            ? __Vtemp4121[0U] : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]);
        __Vtemp4126[1U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                            ? __Vtemp4121[1U] : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]);
        __Vtemp4126[2U] = (1U & ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                  ? __Vtemp4121[2U]
                                  : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]));
    } else {
        __Vtemp4126[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
        __Vtemp4126[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
        __Vtemp4126[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]);
    }
    VL_EXTEND_WW(66,65, __Vtemp4127, __Vtemp4126);
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
                                << 1U) : __Vtemp4116[0U])
                         : __Vtemp4127[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                         ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                             ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                 >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                              << 1U))
                             : __Vtemp4116[1U]) : __Vtemp4127[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? 0U : (3U & ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                               ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                   ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                       >> 0x1fU) | 
                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                       << 1U)) : __Vtemp4116[2U])
                               : __Vtemp4127[2U])));
    }
    __Vtemp4137[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                       << 2U);
    __Vtemp4137[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                                     << 2U));
    __Vtemp4137[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                                     << 2U));
    __Vtemp4137[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                                     << 2U));
    __Vtemp4137[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] 
                                     << 2U));
    VL_EXTEND_WW(133,132, __Vtemp4138, __Vtemp4137);
    VL_EXTEND_WW(133,66, __Vtemp4139, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__pp);
    VL_ADD_W(5, __Vtemp4140, __Vtemp4138, __Vtemp4139);
    VL_EXTEND_WW(133,130, __Vtemp4141, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
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
                         ? __Vtemp4140[0U] : __Vtemp4141[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? __Vtemp4140[1U] : __Vtemp4141[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? __Vtemp4140[2U] : __Vtemp4141[2U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[3U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                         ? __Vtemp4140[3U] : __Vtemp4141[3U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[4U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? 0U : (0x1fU & ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                  ? __Vtemp4140[4U]
                                  : __Vtemp4141[4U])));
    }
    VL_EXTEND_WQ(67,64, __Vtemp4149, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4150, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4151, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4154, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4157, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4149[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4150[0U]
                                              : __Vtemp4151[0U])
                                          : __Vtemp4154[0U])
                                      : __Vtemp4157[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4149[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4150[1U]
                                              : __Vtemp4151[1U])
                                          : __Vtemp4154[1U])
                                      : __Vtemp4157[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4149[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4150[2U]
                                              : __Vtemp4151[2U])
                                          : __Vtemp4154[2U])
                                      : __Vtemp4157[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp4164, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4165, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4166, ((((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_340))
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
    VL_EXTEND_WQ(67,64, __Vtemp4167, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4170, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4174, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4164[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? __Vtemp4165[0U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_340) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_340) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4166[0U]
                                                  : 
                                                 __Vtemp4167[0U])
                                              : __Vtemp4170[0U]))
                                      : __Vtemp4174[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4164[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? __Vtemp4165[1U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_340) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_340) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4166[1U]
                                                  : 
                                                 __Vtemp4167[1U])
                                              : __Vtemp4170[1U]))
                                      : __Vtemp4174[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                ? __Vtemp4164[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))
                                          ? __Vtemp4165[2U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_340) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_340) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4166[2U]
                                                  : 
                                                 __Vtemp4167[2U])
                                              : __Vtemp4170[2U]))
                                      : __Vtemp4174[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp4181, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4182, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    VL_EXTEND_WQ(67,64, __Vtemp4183, (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4186, (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
                                      << 4U));
    VL_EXTEND_WQ(67,64, __Vtemp4189, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4181[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4182[0U]
                                              : __Vtemp4183[0U])
                                          : __Vtemp4186[0U])
                                      : __Vtemp4189[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4181[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4182[1U]
                                              : __Vtemp4183[1U])
                                          : __Vtemp4186[1U])
                                      : __Vtemp4189[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4181[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                               & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                  >> 1U)) 
                                              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                    >> 1U)))
                                              ? __Vtemp4182[2U]
                                              : __Vtemp4183[2U])
                                          : __Vtemp4186[2U])
                                      : __Vtemp4189[2U]));
    }
    VL_EXTEND_WQ(67,64, __Vtemp4196, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4197, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4198, ((((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_340))
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
    VL_EXTEND_WQ(67,64, __Vtemp4199, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4202, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    VL_EXTEND_WQ(67,64, __Vtemp4206, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4196[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? __Vtemp4197[0U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_340) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_340) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4198[0U]
                                                  : 
                                                 __Vtemp4199[0U])
                                              : __Vtemp4202[0U]))
                                      : __Vtemp4206[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4196[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? __Vtemp4197[1U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_340) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_340) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4198[1U]
                                                  : 
                                                 __Vtemp4199[1U])
                                              : __Vtemp4202[1U]))
                                      : __Vtemp4206[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? __Vtemp4196[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                      ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                          ? __Vtemp4197[2U]
                                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T_2)
                                              ? ((1U 
                                                  & ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                                      & (~ 
                                                         ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_340) 
                                                          >> 1U))) 
                                                     | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_340) 
                                                           >> 1U))))
                                                  ? 
                                                 __Vtemp4198[2U]
                                                  : 
                                                 __Vtemp4199[2U])
                                              : __Vtemp4202[2U]))
                                      : __Vtemp4206[2U]));
    }
    VL_ADD_W(3, __Vtemp4215, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend);
    __Vtemp4216[0U] = 1U;
    __Vtemp4216[1U] = 0U;
    __Vtemp4216[2U] = 0U;
    __Vtemp4217[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp4217[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp4217[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp4218, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend, __Vtemp4217);
    VL_ADD_W(3, __Vtemp4219, __Vtemp4216, __Vtemp4218);
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))) {
        __Vtemp4222[0U] = __Vtemp4215[0U];
        __Vtemp4222[1U] = __Vtemp4215[1U];
        __Vtemp4222[2U] = (1U & __Vtemp4215[2U]);
    } else {
        __Vtemp4222[0U] = __Vtemp4219[0U];
        __Vtemp4222[1U] = __Vtemp4219[1U];
        __Vtemp4222[2U] = (1U & __Vtemp4219[2U]);
    }
    VL_EXTEND_WW(66,65, __Vtemp4223, __Vtemp4222);
    __Vtemp4224[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       << 1U);
    __Vtemp4224[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                     << 1U));
    __Vtemp4224[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                     << 1U));
    VL_EXTEND_WW(66,65, __Vtemp4225, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    VL_ADD_W(3, __Vtemp4226, __Vtemp4224, __Vtemp4225);
    __Vtemp4227[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       << 1U);
    __Vtemp4227[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                     << 1U));
    __Vtemp4227[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                     << 1U));
    __Vtemp4229[0U] = 1U;
    __Vtemp4229[1U] = 0U;
    __Vtemp4229[2U] = 0U;
    __Vtemp4230[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp4230[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp4230[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp4231, __Vtemp4229, __Vtemp4230);
    __Vtemp4232[0U] = __Vtemp4231[0U];
    __Vtemp4232[1U] = __Vtemp4231[1U];
    __Vtemp4232[2U] = (1U & __Vtemp4231[2U]);
    VL_EXTEND_WW(66,65, __Vtemp4233, __Vtemp4232);
    VL_ADD_W(3, __Vtemp4234, __Vtemp4227, __Vtemp4233);
    __Vtemp4238[0U] = 1U;
    __Vtemp4238[1U] = 0U;
    __Vtemp4238[2U] = 0U;
    __Vtemp4239[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp4239[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp4239[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp4240, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp4239);
    VL_ADD_W(3, __Vtemp4241, __Vtemp4238, __Vtemp4240);
    VL_ADD_W(3, __Vtemp4242, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vtemp4249[0U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))
                            ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                ? __Vtemp4241[0U] : 
                               __Vtemp4242[0U]) : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]);
        __Vtemp4249[1U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))
                            ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                ? __Vtemp4241[1U] : 
                               __Vtemp4242[1U]) : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]);
        __Vtemp4249[2U] = (1U & ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))
                                  ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                            ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                      ? __Vtemp4241[2U]
                                      : __Vtemp4242[2U])
                                  : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]));
    } else {
        __Vtemp4249[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
        __Vtemp4249[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
        __Vtemp4249[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
    }
    VL_EXTEND_WW(66,65, __Vtemp4250, __Vtemp4249);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? __Vtemp4223[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                      ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                          ? __Vtemp4226[0U]
                                          : __Vtemp4234[0U])
                                      : __Vtemp4250[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? __Vtemp4223[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                      ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                          ? __Vtemp4226[1U]
                                          : __Vtemp4234[1U])
                                      : __Vtemp4250[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[2U] 
            = (3U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                      ? __Vtemp4223[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                            ? ((1U 
                                                & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                   ^ 
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                                ? __Vtemp4226[2U]
                                                : __Vtemp4234[2U])
                                            : __Vtemp4250[2U])));
    }
    VL_EXTEND_WW(70,67, __Vtemp4258, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2);
    __Vtemp4259[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                       << 2U);
    __Vtemp4259[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                                     << 2U));
    __Vtemp4259[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                                     << 2U));
    VL_EXTEND_WW(70,69, __Vtemp4260, __Vtemp4259);
    VL_EXTEND_WW(70,67, __Vtemp4261, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4258[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4260[0U]
                                      : __Vtemp4261[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4258[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4260[1U]
                                      : __Vtemp4261[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp4258[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp4260[2U]
                                      : __Vtemp4261[2U]));
    }
    VL_EXTEND_WQ(127,64, __Vtemp4268, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata);
    VL_EXTEND_WQ(127,64, __Vtemp4269, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_37[3U] = 0U;
        vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_39 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_38 = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_37[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp4268[0U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_w_data[0U]
                                      : __Vtemp4269[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_37[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp4268[1U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_w_data[1U]
                                      : __Vtemp4269[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_37[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp4268[2U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_w_data[2U]
                                      : __Vtemp4269[2U]));
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_37[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? __Vtemp4268[3U] : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                                      ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_w_data[3U]
                                      : __Vtemp4269[3U]));
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
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_38 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)
                ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb))
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)
                    ? vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb
                    : (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb))));
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
