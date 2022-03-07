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

void Vsoc_riscv_zhoutao_top___024root___settle__TOP__1(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___settle__TOP__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    // Body
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[0U] = 0x11U;
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[1U] = 0xeU;
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[2U] = 0xcU;
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[3U] = 0xaU;
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[4U] = 9U;
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[5U] = 6U;
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[6U] = 4U;
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[7U] = 2U;
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[8U] = 0U;
    __Vtemp1[0U] = (0x80U | (((IData)((((QData)((IData)(
                                                        (0x102030U 
                                                         | ((((IData)(vlSelf->in)
                                                               ? 5U
                                                               : 1U) 
                                                             << 0x18U) 
                                                            | ((((IData)(vlSelf->in)
                                                                  ? 5U
                                                                  : 2U) 
                                                                << 0x10U) 
                                                               | ((((IData)(vlSelf->in)
                                                                     ? 5U
                                                                     : 3U) 
                                                                   << 8U) 
                                                                  | ((IData)(vlSelf->in)
                                                                      ? 5U
                                                                      : 4U))))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0x40506070U 
                                                                     | ((((IData)(vlSelf->in)
                                                                           ? 5U
                                                                           : 4U) 
                                                                         << 0x18U) 
                                                                        | ((((IData)(vlSelf->in)
                                                                              ? 6U
                                                                              : 1U) 
                                                                            << 0x10U) 
                                                                           | ((((IData)(vlSelf->in)
                                                                                 ? 7U
                                                                                 : 1U) 
                                                                               << 8U) 
                                                                              | ((IData)(vlSelf->in)
                                                                                 ? 8U
                                                                                 : 1U))))))))) 
                              << 8U) | ((IData)(vlSelf->in)
                                         ? 8U : 1U)));
    __Vtemp1[1U] = (((IData)((((QData)((IData)((0x102030U 
                                                | ((((IData)(vlSelf->in)
                                                      ? 5U
                                                      : 1U) 
                                                    << 0x18U) 
                                                   | ((((IData)(vlSelf->in)
                                                         ? 5U
                                                         : 2U) 
                                                       << 0x10U) 
                                                      | ((((IData)(vlSelf->in)
                                                            ? 5U
                                                            : 3U) 
                                                          << 8U) 
                                                         | ((IData)(vlSelf->in)
                                                             ? 5U
                                                             : 4U))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (0x40506070U 
                                                            | ((((IData)(vlSelf->in)
                                                                  ? 5U
                                                                  : 4U) 
                                                                << 0x18U) 
                                                               | ((((IData)(vlSelf->in)
                                                                     ? 6U
                                                                     : 1U) 
                                                                   << 0x10U) 
                                                                  | ((((IData)(vlSelf->in)
                                                                        ? 7U
                                                                        : 1U) 
                                                                      << 8U) 
                                                                     | ((IData)(vlSelf->in)
                                                                         ? 8U
                                                                         : 1U))))))))) 
                     >> 0x18U) | ((IData)(((((QData)((IData)(
                                                             (0x102030U 
                                                              | ((((IData)(vlSelf->in)
                                                                    ? 5U
                                                                    : 1U) 
                                                                  << 0x18U) 
                                                                 | ((((IData)(vlSelf->in)
                                                                       ? 5U
                                                                       : 2U) 
                                                                     << 0x10U) 
                                                                    | ((((IData)(vlSelf->in)
                                                                          ? 5U
                                                                          : 3U) 
                                                                        << 8U) 
                                                                       | ((IData)(vlSelf->in)
                                                                           ? 5U
                                                                           : 4U))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (0x40506070U 
                                                               | ((((IData)(vlSelf->in)
                                                                     ? 5U
                                                                     : 4U) 
                                                                   << 0x18U) 
                                                                  | ((((IData)(vlSelf->in)
                                                                        ? 6U
                                                                        : 1U) 
                                                                      << 0x10U) 
                                                                     | ((((IData)(vlSelf->in)
                                                                           ? 7U
                                                                           : 1U) 
                                                                         << 8U) 
                                                                        | ((IData)(vlSelf->in)
                                                                            ? 8U
                                                                            : 1U)))))))) 
                                           >> 0x20U)) 
                                  << 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT____Vcellinp__stateMux__lut[0U] 
        = __Vtemp1[0U];
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT____Vcellinp__stateMux__lut[1U] 
        = __Vtemp1[1U];
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT____Vcellinp__stateMux__lut[2U] 
        = ((IData)(((((QData)((IData)((0x102030U | 
                                       ((((IData)(vlSelf->in)
                                           ? 5U : 1U) 
                                         << 0x18U) 
                                        | ((((IData)(vlSelf->in)
                                              ? 5U : 2U) 
                                            << 0x10U) 
                                           | ((((IData)(vlSelf->in)
                                                 ? 5U
                                                 : 3U) 
                                               << 8U) 
                                              | ((IData)(vlSelf->in)
                                                  ? 5U
                                                  : 4U))))))) 
                      << 0x20U) | (QData)((IData)((0x40506070U 
                                                   | ((((IData)(vlSelf->in)
                                                         ? 5U
                                                         : 4U) 
                                                       << 0x18U) 
                                                      | ((((IData)(vlSelf->in)
                                                            ? 6U
                                                            : 1U) 
                                                          << 0x10U) 
                                                         | ((((IData)(vlSelf->in)
                                                               ? 7U
                                                               : 1U) 
                                                             << 8U) 
                                                            | ((IData)(vlSelf->in)
                                                                ? 8U
                                                                : 1U)))))))) 
                    >> 0x20U)) >> 0x18U);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [0U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[1U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [1U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[2U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [2U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[3U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [3U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[4U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [4U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[5U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [5U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[6U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [6U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[7U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [7U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[8U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [8U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [0U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[1U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [1U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[2U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [2U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[3U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [3U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[4U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [4U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[5U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [5U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[6U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [6U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[7U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [7U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[8U] 
        = (1U & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list
                   [8U] >> 1U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[0U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT____Vcellinp__stateMux__lut[0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[1U] 
        = (0xffU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT____Vcellinp__stateMux__lut[0U] 
                    >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[2U] 
        = (0xffU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT____Vcellinp__stateMux__lut[0U] 
                    >> 0x10U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[3U] 
        = (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT____Vcellinp__stateMux__lut[0U] 
           >> 0x18U);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[4U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT____Vcellinp__stateMux__lut[1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[5U] 
        = (0xffU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT____Vcellinp__stateMux__lut[1U] 
                    >> 8U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[6U] 
        = (0xffU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT____Vcellinp__stateMux__lut[1U] 
                    >> 0x10U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[7U] 
        = (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT____Vcellinp__stateMux__lut[1U] 
           >> 0x18U);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[8U] 
        = (0xffU & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT____Vcellinp__stateMux__lut[2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
            == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
            [0U]) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
           == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
               == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
               [1U]) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
               == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
               [2U]) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
               == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
               [3U]) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
               == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
               [4U]) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
               == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
               [5U]) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
               == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
               [6U]) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
               == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
               [7U]) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
               == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
               [8U]) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->out = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit) 
                   & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[0U] 
        = (0xfU & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[0U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
                   [0U] >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[1U] 
        = (0xfU & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[1U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
                   [1U] >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[2U] 
        = (0xfU & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[2U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
                   [2U] >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[3U] 
        = (0xfU & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[3U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
                   [3U] >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[4U] 
        = (0xfU & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[4U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
                   [4U] >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[5U] 
        = (0xfU & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[5U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
                   [5U] >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[6U] 
        = (0xfU & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
           [6U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[6U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
                   [6U] >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[7U] 
        = (0xfU & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
           [7U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[7U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
                   [7U] >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[8U] 
        = (0xfU & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
           [8U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[8U] 
        = (0xfU & (vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list
                   [8U] >> 4U));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
                       == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
           == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
                          == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout) 
              == vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_din 
        = ((IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit)
            ? (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out)
            : 0U);
}

void Vsoc_riscv_zhoutao_top___024root___eval_initial(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vsoc_riscv_zhoutao_top___024root___eval_settle(Vsoc_riscv_zhoutao_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_riscv_zhoutao_top___024root___eval_settle\n"); );
    // Body
    Vsoc_riscv_zhoutao_top___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
    vlSelf->in = 0;
    vlSelf->reset = 0;
    vlSelf->out = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_din = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__state_dout = 0;
    VL_ZERO_RESET_W(72, vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT____Vcellinp__stateMux__lut);
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__lut_out = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__outMux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<9; ++__Vi0) {
        vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__lut_out = 0;
    vlSelf->soc_riscv_zhoutao_top__DOT__FSM_bin_1__DOT__stateMux__DOT__i0__DOT__hit = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
