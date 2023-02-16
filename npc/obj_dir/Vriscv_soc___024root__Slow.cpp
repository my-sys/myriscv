// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========


void Vriscv_soc___024root___ctor_var_reset(Vriscv_soc___024root* vlSelf);

Vriscv_soc___024root::Vriscv_soc___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vriscv_soc___024root___ctor_var_reset(this);
}

void Vriscv_soc___024root___configure_coverage(Vriscv_soc___024root* vlSelf, bool first);

void Vriscv_soc___024root::__Vconfigure(Vriscv_soc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vriscv_soc___024root___configure_coverage(this, first);
}

Vriscv_soc___024root::~Vriscv_soc___024root() {
}

// Coverage
void Vriscv_soc___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void Vriscv_soc___024root___settle__TOP__1(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___settle__TOP__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp17;
    VlWide<3>/*95:0*/ __Vtemp18;
    // Body
    if ((1U & (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_0))) {
        ++(vlSymsp->__Vcoverage[2526]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_0 
            = (0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_0);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_io_AXI_Bus_b_ready)))) {
        ++(vlSymsp->__Vcoverage[5310]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_io_AXI_Bus_b_ready = 1U;
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                >> 1U) ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__tag_valid_1)))) {
        ++(vlSymsp->__Vcoverage[7716]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__tag_valid_1 
            = (1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                     >> 1U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                >> 1U) ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__tag_valid_2)))) {
        ++(vlSymsp->__Vcoverage[7717]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__tag_valid_2 
            = (1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                     >> 1U));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__tag_dirty_1)))) {
        ++(vlSymsp->__Vcoverage[7718]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__tag_dirty_1 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__tag_dirty_2)))) {
        ++(vlSymsp->__Vcoverage[7719]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__tag_dirty_2 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]);
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                >> 1U) ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__tag_valid_1)))) {
        ++(vlSymsp->__Vcoverage[9933]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__tag_valid_1 
            = (1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                     >> 1U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                >> 1U) ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__tag_valid_2)))) {
        ++(vlSymsp->__Vcoverage[9934]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__tag_valid_2 
            = (1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                     >> 1U));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__tag_dirty_1)))) {
        ++(vlSymsp->__Vcoverage[9935]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__tag_dirty_1 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__tag_dirty_2)))) {
        ++(vlSymsp->__Vcoverage[9936]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__tag_dirty_2 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6297]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6298]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6299]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6300]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6301]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6302]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6303]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6304]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6305]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6306]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6307]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6308]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6309]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6310]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6311]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6312]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6313]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6314]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6315]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6316]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6317]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6318]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6319]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6320]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6321]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6322]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6323]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6324]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6325]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6326]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6327]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6328]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6329]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6330]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6331]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6332]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6333]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6334]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6335]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6336]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6337]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6338]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6339]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6340]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6341]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6342]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6343]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6344]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6345]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6346]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6347]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6348]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6349]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6350]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6351]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6352]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6353]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6354]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6355]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6356]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6357]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6358]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6359]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6360]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6361]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6362]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6363]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6364]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6365]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6366]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6367]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6368]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6369]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6370]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6371]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6372]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6373]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6374]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6375]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6376]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6377]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6378]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6379]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6380]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6381]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6382]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6383]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6384]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6385]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6386]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6387]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6388]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6389]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6390]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6391]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6392]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[2U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6393]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6394]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6395]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6396]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6397]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6398]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6399]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6400]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6401]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6402]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6403]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6404]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6405]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6406]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6407]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6408]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6409]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6410]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6411]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6412]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6413]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6414]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6415]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6416]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6417]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6418]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6419]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6420]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6421]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6422]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6423]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6424]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_Q[3U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6688]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6689]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6690]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6691]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6692]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6693]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6694]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6695]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6696]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6697]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6698]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6699]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6700]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6701]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6702]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6703]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6704]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6705]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6706]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6707]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6708]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6709]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6710]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6711]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6712]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6713]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6714]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6715]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6716]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6717]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6718]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6719]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6720]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6721]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6722]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6723]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6724]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6725]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6726]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6727]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6728]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6729]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6730]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6731]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6732]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6733]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6734]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6735]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6736]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6737]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6738]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6739]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6740]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6741]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6742]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6743]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6744]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6745]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6746]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6747]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6748]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6749]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6750]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6751]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6752]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6753]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6754]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6755]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6756]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6757]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6758]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6759]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6760]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6761]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6762]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6763]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6764]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6765]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6766]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6767]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6768]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6769]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6770]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6771]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6772]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6773]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6774]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6775]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6776]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6777]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6778]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6779]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6780]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6781]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[6782]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6783]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6784]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6785]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6786]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6787]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6788]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6789]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6790]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6791]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6792]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6793]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6794]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6795]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6796]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6797]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6798]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6799]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6800]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6801]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6802]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6803]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6804]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6805]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6806]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6807]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6808]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6809]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6810]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6811]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6812]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6813]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[6814]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6815]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6951]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6952]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6953]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6954]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6955]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6956]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6957]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6958]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6959]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6960]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6961]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6962]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6963]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6964]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6965]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6966]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6967]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6968]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6969]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6970]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6971]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6972]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6973]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6974]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6975]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6976]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6977]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6978]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6979]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6980]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[6981]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6982]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6983]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6984]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6985]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6986]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6987]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6988]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6989]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6990]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6991]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6992]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6993]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6994]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6995]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6996]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6997]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6998]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[6999]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7000]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7001]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7002]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7003]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7004]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7005]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7006]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7007]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7008]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7009]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7010]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7011]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7012]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7013]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7014]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7015]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7016]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7017]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7018]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7019]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7020]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7021]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7022]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7023]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7024]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7025]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7026]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7027]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7028]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7029]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7030]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7031]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7032]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7033]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7034]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7035]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7036]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7037]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7038]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7039]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7040]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7041]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7042]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7043]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7044]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7045]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7046]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[2U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7047]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7048]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7049]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7050]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7051]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7052]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7053]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7054]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7055]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7056]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7057]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7058]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7059]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7060]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7061]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7062]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7063]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7064]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7065]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7066]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7067]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7068]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7069]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7070]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7071]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7072]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7073]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7074]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7075]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7076]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7077]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7078]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_Q[3U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7086]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7087]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7088]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7089]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7090]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7091]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7092]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7093]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7094]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7095]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7096]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7097]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7098]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7099]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7100]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7101]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7102]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7103]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7104]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7105]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7106]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7107]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7108]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7109]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7110]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7111]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7112]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7113]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7114]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7115]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[7116]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7117]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7118]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7119]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7120]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7121]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7122]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7123]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7124]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7125]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7126]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7127]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7128]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7129]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7130]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7131]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7132]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7133]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7134]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7135]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7136]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7137]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7138]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7139]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7140]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7141]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7142]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7143]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7144]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7145]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7146]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7147]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[7148]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7149]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7150]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7151]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7152]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7153]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7154]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7155]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7156]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7157]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7158]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7159]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7160]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7161]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7162]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7163]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7164]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7165]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7166]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7167]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7168]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7169]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7170]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7171]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7172]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7173]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7174]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7175]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7176]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7177]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7178]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7179]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[7180]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7181]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7182]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7183]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7184]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7185]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7186]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7187]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7188]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7189]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7190]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7191]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7192]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7193]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7194]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7195]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7196]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7197]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7198]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7199]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7200]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7201]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7202]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7203]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7204]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7205]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7206]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7207]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7208]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7209]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7210]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7211]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[7212]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7213]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8514]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8515]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8516]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8517]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8518]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8519]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8520]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8521]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8522]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8523]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8524]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8525]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8526]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8527]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8528]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8529]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8530]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8531]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8532]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8533]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8534]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8535]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8536]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8537]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8538]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8539]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8540]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8541]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8542]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8543]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8544]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8545]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8546]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8547]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8548]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8549]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8550]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8551]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8552]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8553]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8554]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8555]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8556]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8557]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8558]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8559]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8560]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8561]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8562]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8563]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8564]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8565]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8566]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8567]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8568]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8569]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8570]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8571]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8572]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8573]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8574]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8575]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8576]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8577]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8578]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8579]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8580]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8581]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8582]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8583]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8584]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8585]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8586]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8587]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8588]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8589]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8590]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8591]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8592]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8593]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8594]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8595]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8596]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8597]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8598]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8599]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8600]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8601]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8602]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8603]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8604]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8605]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8606]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8607]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8608]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8609]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[2U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[2U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8610]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8611]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8612]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8613]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8614]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8615]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8616]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8617]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8618]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8619]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8620]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8621]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8622]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8623]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8624]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8625]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8626]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8627]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8628]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8629]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8630]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8631]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8632]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8633]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8634]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8635]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8636]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8637]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8638]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8639]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[8640]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8641]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_data_Q[3U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_Q[3U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8905]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8906]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8907]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8908]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8909]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8910]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8911]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8912]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8913]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8914]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8915]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8916]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8917]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8918]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8919]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8920]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8921]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8922]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8923]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8924]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8925]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8926]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8927]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8928]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8929]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8930]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8931]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8932]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8933]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8934]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[8935]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8936]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8937]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8938]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8939]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8940]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8941]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8942]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8943]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8944]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8945]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8946]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8947]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8948]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8949]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8950]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8951]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8952]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8953]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8954]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8955]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8956]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8957]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8958]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8959]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8960]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8961]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8962]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8963]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8964]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8965]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8966]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[8967]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[8968]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8969]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8970]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8971]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8972]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8973]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8974]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8975]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8976]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8977]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8978]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8979]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8980]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8981]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8982]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8983]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8984]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8985]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8986]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8987]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8988]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8989]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8990]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8991]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8992]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8993]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8994]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8995]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8996]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8997]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8998]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[8999]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9000]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[2U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[2U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9001]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9002]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9003]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9004]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9005]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9006]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9007]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9008]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9009]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9010]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9011]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9012]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9013]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9014]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9015]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9016]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9017]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9018]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9019]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9020]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9021]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9022]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9023]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9024]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9025]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9026]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9027]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9028]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9029]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9030]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9031]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9032]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram1_tag_Q[3U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[3U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9168]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9169]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9170]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9171]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9172]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9173]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9174]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9175]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9176]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9177]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9178]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9179]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9180]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9181]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9182]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9183]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9184]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9185]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9186]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9187]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9188]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9189]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9190]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9191]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9192]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9193]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9194]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9195]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9196]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9197]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9198]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9199]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9200]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9201]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9202]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9203]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9204]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9205]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9206]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9207]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9208]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9209]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9210]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9211]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9212]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9213]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9214]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9215]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9216]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9217]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9218]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9219]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9220]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9221]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9222]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9223]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9224]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9225]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9226]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9227]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9228]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9229]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9230]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9231]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9232]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9233]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9234]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9235]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9236]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9237]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9238]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9239]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9240]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9241]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9242]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9243]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9244]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9245]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9246]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9247]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9248]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9249]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9250]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9251]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9252]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9253]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9254]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9255]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9256]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9257]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9258]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9259]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9260]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9261]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9262]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9263]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[2U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[2U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9264]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9265]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9266]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9267]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9268]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9269]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9270]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9271]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9272]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9273]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9274]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9275]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9276]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9277]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9278]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9279]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9280]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9281]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9282]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9283]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9284]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9285]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9286]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9287]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9288]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9289]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9290]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9291]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9292]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9293]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9294]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9295]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_data_Q[3U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_Q[3U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9303]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9304]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9305]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9306]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9307]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9308]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9309]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9310]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9311]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9312]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9313]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9314]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9315]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9316]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9317]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9318]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9319]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9320]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9321]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9322]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9323]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9324]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9325]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9326]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9327]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9328]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9329]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9330]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9331]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9332]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]))) {
        ++(vlSymsp->__Vcoverage[9333]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9334]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9335]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9336]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9337]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9338]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9339]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9340]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9341]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9342]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9343]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9344]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9345]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9346]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9347]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9348]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9349]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9350]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9351]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9352]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9353]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9354]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9355]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9356]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9357]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9358]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9359]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9360]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9361]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9362]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9363]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9364]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]))) {
        ++(vlSymsp->__Vcoverage[9365]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9366]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9367]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9368]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9369]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9370]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9371]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9372]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9373]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9374]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9375]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9376]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9377]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9378]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9379]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9380]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9381]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9382]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9383]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9384]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9385]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9386]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9387]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9388]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9389]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9390]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9391]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9392]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9393]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9394]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9395]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9396]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]))) {
        ++(vlSymsp->__Vcoverage[9397]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9398]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[2U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[2U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9399]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9400]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9401]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9402]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9403]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9404]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9405]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9406]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9407]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9408]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9409]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9410]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9411]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9412]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9413]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9414]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9415]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9416]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9417]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9418]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9419]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9420]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9421]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9422]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9423]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9424]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9425]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9426]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9427]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9428]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]))) {
        ++(vlSymsp->__Vcoverage[9429]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[9430]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__sram2_tag_Q[3U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[3U]));
    }
    vlSelf->io_difftest_reg_0 = 0ULL;
    if (((IData)(vlSelf->clock) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__clock))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->riscv_soc__DOT____Vtogcov__clock = vlSelf->clock;
    }
    if (((IData)(vlSelf->reset) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->riscv_soc__DOT____Vtogcov__reset = vlSelf->reset;
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata)))) {
        ++(vlSymsp->__Vcoverage[2364]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2365]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2366]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2367]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2368]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2369]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2370]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2371]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2372]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2373]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2374]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2375]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2376]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2377]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2378]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2379]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2380]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2381]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2382]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2383]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2384]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2385]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2386]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2387]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2388]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2389]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2390]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2391]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2392]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2393]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2394]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2395]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2396]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2397]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2398]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2399]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2400]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2401]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2402]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2403]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2404]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2405]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2406]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2407]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2408]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2409]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2410]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2411]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2412]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2413]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2414]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2415]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2416]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2417]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2418]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2419]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2420]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2421]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2422]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2423]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2424]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2425]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2426]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2427]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready) 
         ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_w_ready))) {
        ++(vlSymsp->__Vcoverage[2213]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_w_ready 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit) 
         ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_commit))) {
        ++(vlSymsp->__Vcoverage[2429]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_commit 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_valid))) {
        ++(vlSymsp->__Vcoverage[5311]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__cross_bar_1_io_fetch_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_de_stall))) {
        ++(vlSymsp->__Vcoverage[5443]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_de_stall 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_rbus_finish))) {
        ++(vlSymsp->__Vcoverage[7979]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_rbus_finish 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_wbus_finish))) {
        ++(vlSymsp->__Vcoverage[7980]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_wbus_finish 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_rbus_finish))) {
        ++(vlSymsp->__Vcoverage[10196]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_rbus_finish 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_wbus_finish))) {
        ++(vlSymsp->__Vcoverage[10197]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_wbus_finish 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT____Vtogcov__reg_aw_ok))) {
        ++(vlSymsp->__Vcoverage[10745]);
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT____Vtogcov__reg_aw_ok 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT____Vtogcov__reg_ar_ok))) {
        ++(vlSymsp->__Vcoverage[10746]);
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT____Vtogcov__reg_ar_ok 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_mem_avalid))) {
        ++(vlSymsp->__Vcoverage[11662]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_mem_avalid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_w_mem_en))) {
        ++(vlSymsp->__Vcoverage[11663]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_w_mem_en 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__div_io_stall))) {
        ++(vlSymsp->__Vcoverage[12239]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__div_io_stall 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__div_io_out_valid))) {
        ++(vlSymsp->__Vcoverage[12240]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__div_io_out_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__mul_io_stall))) {
        ++(vlSymsp->__Vcoverage[12305]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__mul_io_stall 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__mul_io_out_valid))) {
        ++(vlSymsp->__Vcoverage[12307]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__mul_io_out_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_exuType))) {
        ++(vlSymsp->__Vcoverage[13227]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_exuType 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_3 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_4 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid));
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U] 
               & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_Q[0U]))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_0 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_0))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_4 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_1))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_8 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_12 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_3))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_16 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_4))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_20 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_5))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_24 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_6))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_28 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_7))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_32 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_8))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_36 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_9))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_40 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_10))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_44 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_11))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_48 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_12))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_52 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_13))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_56 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_14))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_60 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_15))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_64 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_16))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_68 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_17))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_72 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_18))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_76 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_19))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_80 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_20))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_84 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_21))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_88 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_22))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_92 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_23))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_96 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_24))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_100 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_25))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_104 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_26))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_108 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_27))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_112 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_28))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_116 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_29))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_120 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_30))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_124 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_31))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_128 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_32))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_132 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_33))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_136 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_34))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_140 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_35))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_144 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_36))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_148 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_37))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_152 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_38))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_156 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_39))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_160 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_40))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_164 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_41))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_168 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_42))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_172 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_43))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_176 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_44))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_180 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_45))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_184 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_46))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_188 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_47))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_192 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_48))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_196 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_49))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_200 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_50))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_204 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_51))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_208 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_52))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_212 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_53))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_216 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_54))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_220 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_55))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_224 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_56))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_228 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_57))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_232 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_58))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_236 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_59))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_240 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_60))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_244 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_61))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_248 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_62))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_252 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_63))
                ? 1U : 2U);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_0 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_4 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_8 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_12 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_16 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_20 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_24 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_28 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_32 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_36 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_40 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_44 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_48 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_52 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_56 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_60 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_64 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_68 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_72 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_76 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_80 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_84 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_88 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_92 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_96 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_100 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_104 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_108 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_112 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_116 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_120 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_124 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_128 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_132 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_136 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_140 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_144 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_148 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_152 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_156 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_160 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_164 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_168 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_172 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_176 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_180 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_184 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_188 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_192 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_196 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_200 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_204 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_208 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_212 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_216 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_220 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_224 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_228 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_232 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_236 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_240 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_244 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_248 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_252 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_0) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_0)))) {
        ++(vlSymsp->__Vcoverage[7848]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_0 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_0)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_0)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_0) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_0)))) {
        ++(vlSymsp->__Vcoverage[7849]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_0 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_0)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_0)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_1) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_1)))) {
        ++(vlSymsp->__Vcoverage[7850]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_1 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_1)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_1)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_1) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_1)))) {
        ++(vlSymsp->__Vcoverage[7851]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_1 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_1)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_1)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_2)))) {
        ++(vlSymsp->__Vcoverage[7852]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_2 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_2)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_2)))) {
        ++(vlSymsp->__Vcoverage[7853]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_2 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_2)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_3) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_3)))) {
        ++(vlSymsp->__Vcoverage[7854]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_3 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_3)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_3)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_3) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_3)))) {
        ++(vlSymsp->__Vcoverage[7855]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_3 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_3)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_3)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_4) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_4)))) {
        ++(vlSymsp->__Vcoverage[7856]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_4 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_4)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_4)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_4) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_4)))) {
        ++(vlSymsp->__Vcoverage[7857]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_4 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_4)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_4)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_5) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_5)))) {
        ++(vlSymsp->__Vcoverage[7858]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_5 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_5)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_5)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_5) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_5)))) {
        ++(vlSymsp->__Vcoverage[7859]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_5 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_5)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_5)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_6) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_6)))) {
        ++(vlSymsp->__Vcoverage[7860]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_6 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_6)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_6)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_6) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_6)))) {
        ++(vlSymsp->__Vcoverage[7861]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_6 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_6)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_6)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_7) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_7)))) {
        ++(vlSymsp->__Vcoverage[7862]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_7 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_7)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_7)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_7) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_7)))) {
        ++(vlSymsp->__Vcoverage[7863]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_7 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_7)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_7)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_8) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_8)))) {
        ++(vlSymsp->__Vcoverage[7864]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_8 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_8)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_8)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_8) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_8)))) {
        ++(vlSymsp->__Vcoverage[7865]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_8 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_8)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_8)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_9) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_9)))) {
        ++(vlSymsp->__Vcoverage[7866]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_9 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_9)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_9)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_9) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_9)))) {
        ++(vlSymsp->__Vcoverage[7867]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_9 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_9)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_9)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_10) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_10)))) {
        ++(vlSymsp->__Vcoverage[7868]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_10 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_10)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_10)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_10) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_10)))) {
        ++(vlSymsp->__Vcoverage[7869]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_10 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_10)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_10)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_11) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_11)))) {
        ++(vlSymsp->__Vcoverage[7870]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_11 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_11)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_11)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_11) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_11)))) {
        ++(vlSymsp->__Vcoverage[7871]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_11 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_11)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_11)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_12) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_12)))) {
        ++(vlSymsp->__Vcoverage[7872]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_12 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_12)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_12)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_12) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_12)))) {
        ++(vlSymsp->__Vcoverage[7873]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_12 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_12)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_12)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_13) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_13)))) {
        ++(vlSymsp->__Vcoverage[7874]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_13 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_13)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_13)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_13) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_13)))) {
        ++(vlSymsp->__Vcoverage[7875]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_13 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_13)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_13)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_14) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_14)))) {
        ++(vlSymsp->__Vcoverage[7876]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_14 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_14)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_14)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_14) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_14)))) {
        ++(vlSymsp->__Vcoverage[7877]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_14 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_14)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_14)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_15) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_15)))) {
        ++(vlSymsp->__Vcoverage[7878]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_15 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_15)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_15)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_15) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_15)))) {
        ++(vlSymsp->__Vcoverage[7879]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_15 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_15)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_15)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_16) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_16)))) {
        ++(vlSymsp->__Vcoverage[7880]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_16 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_16)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_16)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_16) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_16)))) {
        ++(vlSymsp->__Vcoverage[7881]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_16 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_16)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_16)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_17) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_17)))) {
        ++(vlSymsp->__Vcoverage[7882]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_17 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_17)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_17)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_17) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_17)))) {
        ++(vlSymsp->__Vcoverage[7883]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_17 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_17)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_17)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_18) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_18)))) {
        ++(vlSymsp->__Vcoverage[7884]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_18 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_18)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_18)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_18) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_18)))) {
        ++(vlSymsp->__Vcoverage[7885]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_18 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_18)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_18)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_19) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_19)))) {
        ++(vlSymsp->__Vcoverage[7886]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_19 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_19)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_19)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_19) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_19)))) {
        ++(vlSymsp->__Vcoverage[7887]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_19 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_19)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_19)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_20) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_20)))) {
        ++(vlSymsp->__Vcoverage[7888]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_20 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_20)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_20)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_20) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_20)))) {
        ++(vlSymsp->__Vcoverage[7889]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_20 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_20)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_20)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_21) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_21)))) {
        ++(vlSymsp->__Vcoverage[7890]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_21 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_21)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_21)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_21) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_21)))) {
        ++(vlSymsp->__Vcoverage[7891]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_21 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_21)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_21)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_22) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_22)))) {
        ++(vlSymsp->__Vcoverage[7892]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_22 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_22)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_22)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_22) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_22)))) {
        ++(vlSymsp->__Vcoverage[7893]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_22 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_22)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_22)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_23) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_23)))) {
        ++(vlSymsp->__Vcoverage[7894]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_23 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_23)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_23)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_23) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_23)))) {
        ++(vlSymsp->__Vcoverage[7895]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_23 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_23)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_23)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_24) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_24)))) {
        ++(vlSymsp->__Vcoverage[7896]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_24 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_24)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_24)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_24) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_24)))) {
        ++(vlSymsp->__Vcoverage[7897]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_24 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_24)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_24)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_25) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_25)))) {
        ++(vlSymsp->__Vcoverage[7898]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_25 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_25)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_25)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_25) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_25)))) {
        ++(vlSymsp->__Vcoverage[7899]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_25 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_25)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_25)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_26) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_26)))) {
        ++(vlSymsp->__Vcoverage[7900]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_26 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_26)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_26)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_26) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_26)))) {
        ++(vlSymsp->__Vcoverage[7901]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_26 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_26)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_26)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_27) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_27)))) {
        ++(vlSymsp->__Vcoverage[7902]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_27 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_27)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_27)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_27) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_27)))) {
        ++(vlSymsp->__Vcoverage[7903]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_27 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_27)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_27)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_28) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_28)))) {
        ++(vlSymsp->__Vcoverage[7904]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_28 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_28)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_28)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_28) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_28)))) {
        ++(vlSymsp->__Vcoverage[7905]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_28 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_28)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_28)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_29) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_29)))) {
        ++(vlSymsp->__Vcoverage[7906]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_29 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_29)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_29)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_29) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_29)))) {
        ++(vlSymsp->__Vcoverage[7907]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_29 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_29)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_29)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_30) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_30)))) {
        ++(vlSymsp->__Vcoverage[7908]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_30 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_30)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_30)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_30) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_30)))) {
        ++(vlSymsp->__Vcoverage[7909]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_30 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_30)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_30)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_31) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_31)))) {
        ++(vlSymsp->__Vcoverage[7910]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_31 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_31)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_31)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_31) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_31)))) {
        ++(vlSymsp->__Vcoverage[7911]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_31 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_31)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_31)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_32) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_32)))) {
        ++(vlSymsp->__Vcoverage[7912]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_32 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_32)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_32)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_32) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_32)))) {
        ++(vlSymsp->__Vcoverage[7913]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_32 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_32)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_32)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_33) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_33)))) {
        ++(vlSymsp->__Vcoverage[7914]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_33 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_33)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_33)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_33) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_33)))) {
        ++(vlSymsp->__Vcoverage[7915]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_33 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_33)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_33)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_34) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_34)))) {
        ++(vlSymsp->__Vcoverage[7916]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_34 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_34)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_34)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_34) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_34)))) {
        ++(vlSymsp->__Vcoverage[7917]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_34 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_34)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_34)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_35) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_35)))) {
        ++(vlSymsp->__Vcoverage[7918]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_35 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_35)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_35)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_35) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_35)))) {
        ++(vlSymsp->__Vcoverage[7919]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_35 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_35)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_35)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_36) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_36)))) {
        ++(vlSymsp->__Vcoverage[7920]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_36 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_36)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_36)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_36) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_36)))) {
        ++(vlSymsp->__Vcoverage[7921]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_36 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_36)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_36)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_37) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_37)))) {
        ++(vlSymsp->__Vcoverage[7922]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_37 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_37)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_37)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_37) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_37)))) {
        ++(vlSymsp->__Vcoverage[7923]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_37 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_37)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_37)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_38) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_38)))) {
        ++(vlSymsp->__Vcoverage[7924]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_38 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_38)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_38)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_38) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_38)))) {
        ++(vlSymsp->__Vcoverage[7925]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_38 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_38)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_38)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_39) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_39)))) {
        ++(vlSymsp->__Vcoverage[7926]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_39 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_39)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_39)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_39) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_39)))) {
        ++(vlSymsp->__Vcoverage[7927]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_39 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_39)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_39)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_40) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_40)))) {
        ++(vlSymsp->__Vcoverage[7928]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_40 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_40)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_40)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_40) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_40)))) {
        ++(vlSymsp->__Vcoverage[7929]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_40 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_40)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_40)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_41) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_41)))) {
        ++(vlSymsp->__Vcoverage[7930]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_41 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_41)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_41)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_41) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_41)))) {
        ++(vlSymsp->__Vcoverage[7931]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_41 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_41)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_41)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_42) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_42)))) {
        ++(vlSymsp->__Vcoverage[7932]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_42 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_42)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_42)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_42) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_42)))) {
        ++(vlSymsp->__Vcoverage[7933]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_42 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_42)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_42)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_43) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_43)))) {
        ++(vlSymsp->__Vcoverage[7934]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_43 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_43)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_43)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_43) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_43)))) {
        ++(vlSymsp->__Vcoverage[7935]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_43 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_43)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_43)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_44) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_44)))) {
        ++(vlSymsp->__Vcoverage[7936]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_44 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_44)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_44)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_44) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_44)))) {
        ++(vlSymsp->__Vcoverage[7937]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_44 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_44)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_44)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_45) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_45)))) {
        ++(vlSymsp->__Vcoverage[7938]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_45 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_45)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_45)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_45) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_45)))) {
        ++(vlSymsp->__Vcoverage[7939]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_45 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_45)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_45)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_46) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_46)))) {
        ++(vlSymsp->__Vcoverage[7940]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_46 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_46)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_46)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_46) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_46)))) {
        ++(vlSymsp->__Vcoverage[7941]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_46 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_46)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_46)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_47) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_47)))) {
        ++(vlSymsp->__Vcoverage[7942]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_47 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_47)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_47)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_47) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_47)))) {
        ++(vlSymsp->__Vcoverage[7943]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_47 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_47)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_47)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_48) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_48)))) {
        ++(vlSymsp->__Vcoverage[7944]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_48 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_48)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_48)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_48) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_48)))) {
        ++(vlSymsp->__Vcoverage[7945]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_48 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_48)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_48)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_49) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_49)))) {
        ++(vlSymsp->__Vcoverage[7946]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_49 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_49)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_49)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_49) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_49)))) {
        ++(vlSymsp->__Vcoverage[7947]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_49 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_49)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_49)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_50) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_50)))) {
        ++(vlSymsp->__Vcoverage[7948]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_50 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_50)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_50)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_50) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_50)))) {
        ++(vlSymsp->__Vcoverage[7949]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_50 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_50)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_50)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_51) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_51)))) {
        ++(vlSymsp->__Vcoverage[7950]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_51 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_51)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_51)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_51) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_51)))) {
        ++(vlSymsp->__Vcoverage[7951]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_51 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_51)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_51)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_52) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_52)))) {
        ++(vlSymsp->__Vcoverage[7952]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_52 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_52)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_52)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_52) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_52)))) {
        ++(vlSymsp->__Vcoverage[7953]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_52 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_52)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_52)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_53) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_53)))) {
        ++(vlSymsp->__Vcoverage[7954]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_53 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_53)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_53)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_53) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_53)))) {
        ++(vlSymsp->__Vcoverage[7955]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_53 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_53)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_53)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_54) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_54)))) {
        ++(vlSymsp->__Vcoverage[7956]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_54 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_54)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_54)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_54) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_54)))) {
        ++(vlSymsp->__Vcoverage[7957]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_54 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_54)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_54)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_55) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_55)))) {
        ++(vlSymsp->__Vcoverage[7958]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_55 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_55)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_55)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_55) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_55)))) {
        ++(vlSymsp->__Vcoverage[7959]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_55 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_55)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_55)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_56) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_56)))) {
        ++(vlSymsp->__Vcoverage[7960]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_56 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_56)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_56)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_56) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_56)))) {
        ++(vlSymsp->__Vcoverage[7961]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_56 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_56)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_56)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_57) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_57)))) {
        ++(vlSymsp->__Vcoverage[7962]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_57 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_57)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_57)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_57) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_57)))) {
        ++(vlSymsp->__Vcoverage[7963]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_57 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_57)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_57)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_58) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_58)))) {
        ++(vlSymsp->__Vcoverage[7964]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_58 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_58)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_58)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_58) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_58)))) {
        ++(vlSymsp->__Vcoverage[7965]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_58 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_58)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_58)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_59) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_59)))) {
        ++(vlSymsp->__Vcoverage[7966]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_59 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_59)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_59)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_59) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_59)))) {
        ++(vlSymsp->__Vcoverage[7967]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_59 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_59)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_59)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_60) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_60)))) {
        ++(vlSymsp->__Vcoverage[7968]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_60 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_60)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_60)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_60) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_60)))) {
        ++(vlSymsp->__Vcoverage[7969]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_60 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_60)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_60)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_61) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_61)))) {
        ++(vlSymsp->__Vcoverage[7970]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_61 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_61)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_61)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_61) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_61)))) {
        ++(vlSymsp->__Vcoverage[7971]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_61 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_61)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_61)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_62) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_62)))) {
        ++(vlSymsp->__Vcoverage[7972]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_62 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_62)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_62)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_62) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_62)))) {
        ++(vlSymsp->__Vcoverage[7973]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_62 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_62)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_62)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_63) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_63)))) {
        ++(vlSymsp->__Vcoverage[7974]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_63 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_63)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_63)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_63) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_63)))) {
        ++(vlSymsp->__Vcoverage[7975]);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_63 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vtogcov__reg_lru_63)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_63)));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U] 
               & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_Q[0U]))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_0 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_0))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_4 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_1))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_8 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_12 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_3))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_16 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_4))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_20 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_5))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_24 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_6))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_28 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_7))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_32 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_8))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_36 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_9))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_40 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_10))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_44 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_11))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_48 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_12))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_13))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_56 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_14))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_60 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_15))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_64 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_16))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_68 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_17))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_72 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_18))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_19))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_80 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_20))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_84 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_21))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_88 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_22))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_92 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_23))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_96 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_24))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_100 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_25))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_104 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_26))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_108 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_27))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_112 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_28))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_116 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_29))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_120 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_30))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_124 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_31))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_128 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_32))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_132 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_33))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_136 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_34))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_140 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_35))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_144 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_36))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_148 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_37))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_152 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_38))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_39))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_40))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_164 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_41))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_168 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_42))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_172 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_43))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_176 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_44))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_180 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_45))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_184 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_46))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_188 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_47))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_192 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_48))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_196 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_49))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_200 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_50))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_204 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_51))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_208 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_52))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_212 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_53))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_216 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_54))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_220 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_55))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_224 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_56))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_228 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_57))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_232 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_58))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_236 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_59))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_240 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_60))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_244 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_61))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_248 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_62))
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_252 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_63))
                ? 1U : 2U);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_0 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_4 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_8 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_12 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_16 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_20 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_24 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_28 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_32 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_36 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_40 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_44 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_48 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_56 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_60 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_64 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_68 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_72 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_80 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_84 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_88 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_92 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_96 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_100 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_104 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_108 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_112 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_116 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_120 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_124 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_128 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_132 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_136 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_140 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_144 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_148 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_152 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_164 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_168 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_172 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_176 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_180 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_184 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_188 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_192 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_196 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_200 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_204 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_208 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_212 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_216 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_220 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_224 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_228 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_232 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_236 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_240 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_244 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_248 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_252 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_Q[0U])
                ? 1U : 2U);
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_0) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_0)))) {
        ++(vlSymsp->__Vcoverage[10065]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_0 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_0)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_0)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_0) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_0)))) {
        ++(vlSymsp->__Vcoverage[10066]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_0 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_0)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_0)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_1) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_1)))) {
        ++(vlSymsp->__Vcoverage[10067]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_1 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_1)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_1)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_1) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_1)))) {
        ++(vlSymsp->__Vcoverage[10068]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_1 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_1)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_1)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_2)))) {
        ++(vlSymsp->__Vcoverage[10069]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_2 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_2)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_2)))) {
        ++(vlSymsp->__Vcoverage[10070]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_2 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_2)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_3) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_3)))) {
        ++(vlSymsp->__Vcoverage[10071]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_3 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_3)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_3)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_3) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_3)))) {
        ++(vlSymsp->__Vcoverage[10072]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_3 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_3)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_3)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_4) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_4)))) {
        ++(vlSymsp->__Vcoverage[10073]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_4 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_4)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_4)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_4) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_4)))) {
        ++(vlSymsp->__Vcoverage[10074]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_4 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_4)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_4)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_5) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_5)))) {
        ++(vlSymsp->__Vcoverage[10075]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_5 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_5)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_5)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_5) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_5)))) {
        ++(vlSymsp->__Vcoverage[10076]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_5 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_5)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_5)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_6) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_6)))) {
        ++(vlSymsp->__Vcoverage[10077]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_6 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_6)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_6)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_6) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_6)))) {
        ++(vlSymsp->__Vcoverage[10078]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_6 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_6)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_6)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_7) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_7)))) {
        ++(vlSymsp->__Vcoverage[10079]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_7 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_7)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_7)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_7) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_7)))) {
        ++(vlSymsp->__Vcoverage[10080]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_7 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_7)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_7)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_8) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_8)))) {
        ++(vlSymsp->__Vcoverage[10081]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_8 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_8)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_8)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_8) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_8)))) {
        ++(vlSymsp->__Vcoverage[10082]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_8 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_8)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_8)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_9) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_9)))) {
        ++(vlSymsp->__Vcoverage[10083]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_9 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_9)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_9)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_9) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_9)))) {
        ++(vlSymsp->__Vcoverage[10084]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_9 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_9)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_9)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_10) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_10)))) {
        ++(vlSymsp->__Vcoverage[10085]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_10 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_10)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_10)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_10) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_10)))) {
        ++(vlSymsp->__Vcoverage[10086]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_10 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_10)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_10)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_11) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_11)))) {
        ++(vlSymsp->__Vcoverage[10087]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_11 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_11)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_11)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_11) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_11)))) {
        ++(vlSymsp->__Vcoverage[10088]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_11 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_11)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_11)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_12) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_12)))) {
        ++(vlSymsp->__Vcoverage[10089]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_12 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_12)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_12)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_12) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_12)))) {
        ++(vlSymsp->__Vcoverage[10090]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_12 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_12)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_12)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_13) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_13)))) {
        ++(vlSymsp->__Vcoverage[10091]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_13 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_13)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_13)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_13) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_13)))) {
        ++(vlSymsp->__Vcoverage[10092]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_13 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_13)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_13)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_14) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_14)))) {
        ++(vlSymsp->__Vcoverage[10093]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_14 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_14)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_14)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_14) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_14)))) {
        ++(vlSymsp->__Vcoverage[10094]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_14 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_14)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_14)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_15) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_15)))) {
        ++(vlSymsp->__Vcoverage[10095]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_15 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_15)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_15)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_15) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_15)))) {
        ++(vlSymsp->__Vcoverage[10096]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_15 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_15)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_15)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_16) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_16)))) {
        ++(vlSymsp->__Vcoverage[10097]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_16 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_16)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_16)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_16) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_16)))) {
        ++(vlSymsp->__Vcoverage[10098]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_16 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_16)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_16)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_17) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_17)))) {
        ++(vlSymsp->__Vcoverage[10099]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_17 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_17)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_17)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_17) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_17)))) {
        ++(vlSymsp->__Vcoverage[10100]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_17 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_17)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_17)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_18) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_18)))) {
        ++(vlSymsp->__Vcoverage[10101]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_18 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_18)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_18)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_18) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_18)))) {
        ++(vlSymsp->__Vcoverage[10102]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_18 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_18)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_18)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_19) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_19)))) {
        ++(vlSymsp->__Vcoverage[10103]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_19 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_19)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_19)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_19) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_19)))) {
        ++(vlSymsp->__Vcoverage[10104]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_19 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_19)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_19)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_20) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_20)))) {
        ++(vlSymsp->__Vcoverage[10105]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_20 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_20)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_20)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_20) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_20)))) {
        ++(vlSymsp->__Vcoverage[10106]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_20 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_20)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_20)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_21) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_21)))) {
        ++(vlSymsp->__Vcoverage[10107]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_21 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_21)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_21)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_21) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_21)))) {
        ++(vlSymsp->__Vcoverage[10108]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_21 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_21)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_21)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_22) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_22)))) {
        ++(vlSymsp->__Vcoverage[10109]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_22 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_22)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_22)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_22) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_22)))) {
        ++(vlSymsp->__Vcoverage[10110]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_22 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_22)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_22)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_23) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_23)))) {
        ++(vlSymsp->__Vcoverage[10111]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_23 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_23)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_23)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_23) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_23)))) {
        ++(vlSymsp->__Vcoverage[10112]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_23 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_23)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_23)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_24) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_24)))) {
        ++(vlSymsp->__Vcoverage[10113]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_24 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_24)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_24)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_24) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_24)))) {
        ++(vlSymsp->__Vcoverage[10114]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_24 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_24)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_24)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_25) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_25)))) {
        ++(vlSymsp->__Vcoverage[10115]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_25 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_25)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_25)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_25) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_25)))) {
        ++(vlSymsp->__Vcoverage[10116]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_25 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_25)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_25)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_26) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_26)))) {
        ++(vlSymsp->__Vcoverage[10117]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_26 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_26)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_26)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_26) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_26)))) {
        ++(vlSymsp->__Vcoverage[10118]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_26 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_26)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_26)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_27) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_27)))) {
        ++(vlSymsp->__Vcoverage[10119]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_27 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_27)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_27)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_27) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_27)))) {
        ++(vlSymsp->__Vcoverage[10120]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_27 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_27)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_27)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_28) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_28)))) {
        ++(vlSymsp->__Vcoverage[10121]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_28 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_28)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_28)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_28) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_28)))) {
        ++(vlSymsp->__Vcoverage[10122]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_28 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_28)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_28)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_29) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_29)))) {
        ++(vlSymsp->__Vcoverage[10123]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_29 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_29)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_29)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_29) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_29)))) {
        ++(vlSymsp->__Vcoverage[10124]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_29 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_29)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_29)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_30) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_30)))) {
        ++(vlSymsp->__Vcoverage[10125]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_30 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_30)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_30)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_30) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_30)))) {
        ++(vlSymsp->__Vcoverage[10126]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_30 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_30)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_30)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_31) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_31)))) {
        ++(vlSymsp->__Vcoverage[10127]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_31 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_31)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_31)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_31) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_31)))) {
        ++(vlSymsp->__Vcoverage[10128]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_31 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_31)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_31)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_32) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_32)))) {
        ++(vlSymsp->__Vcoverage[10129]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_32 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_32)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_32)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_32) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_32)))) {
        ++(vlSymsp->__Vcoverage[10130]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_32 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_32)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_32)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_33) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_33)))) {
        ++(vlSymsp->__Vcoverage[10131]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_33 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_33)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_33)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_33) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_33)))) {
        ++(vlSymsp->__Vcoverage[10132]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_33 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_33)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_33)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_34) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_34)))) {
        ++(vlSymsp->__Vcoverage[10133]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_34 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_34)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_34)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_34) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_34)))) {
        ++(vlSymsp->__Vcoverage[10134]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_34 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_34)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_34)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_35) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_35)))) {
        ++(vlSymsp->__Vcoverage[10135]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_35 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_35)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_35)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_35) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_35)))) {
        ++(vlSymsp->__Vcoverage[10136]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_35 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_35)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_35)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_36) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_36)))) {
        ++(vlSymsp->__Vcoverage[10137]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_36 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_36)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_36)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_36) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_36)))) {
        ++(vlSymsp->__Vcoverage[10138]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_36 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_36)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_36)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_37) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_37)))) {
        ++(vlSymsp->__Vcoverage[10139]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_37 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_37)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_37)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_37) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_37)))) {
        ++(vlSymsp->__Vcoverage[10140]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_37 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_37)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_37)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_38) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_38)))) {
        ++(vlSymsp->__Vcoverage[10141]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_38 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_38)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_38)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_38) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_38)))) {
        ++(vlSymsp->__Vcoverage[10142]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_38 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_38)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_38)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_39) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_39)))) {
        ++(vlSymsp->__Vcoverage[10143]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_39 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_39)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_39)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_39) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_39)))) {
        ++(vlSymsp->__Vcoverage[10144]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_39 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_39)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_39)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_40) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_40)))) {
        ++(vlSymsp->__Vcoverage[10145]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_40 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_40)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_40)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_40) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_40)))) {
        ++(vlSymsp->__Vcoverage[10146]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_40 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_40)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_40)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_41) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_41)))) {
        ++(vlSymsp->__Vcoverage[10147]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_41 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_41)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_41)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_41) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_41)))) {
        ++(vlSymsp->__Vcoverage[10148]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_41 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_41)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_41)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_42) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_42)))) {
        ++(vlSymsp->__Vcoverage[10149]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_42 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_42)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_42)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_42) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_42)))) {
        ++(vlSymsp->__Vcoverage[10150]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_42 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_42)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_42)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_43) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_43)))) {
        ++(vlSymsp->__Vcoverage[10151]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_43 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_43)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_43)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_43) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_43)))) {
        ++(vlSymsp->__Vcoverage[10152]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_43 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_43)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_43)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_44) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_44)))) {
        ++(vlSymsp->__Vcoverage[10153]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_44 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_44)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_44)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_44) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_44)))) {
        ++(vlSymsp->__Vcoverage[10154]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_44 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_44)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_44)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_45) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_45)))) {
        ++(vlSymsp->__Vcoverage[10155]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_45 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_45)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_45)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_45) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_45)))) {
        ++(vlSymsp->__Vcoverage[10156]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_45 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_45)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_45)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_46) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_46)))) {
        ++(vlSymsp->__Vcoverage[10157]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_46 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_46)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_46)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_46) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_46)))) {
        ++(vlSymsp->__Vcoverage[10158]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_46 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_46)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_46)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_47) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_47)))) {
        ++(vlSymsp->__Vcoverage[10159]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_47 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_47)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_47)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_47) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_47)))) {
        ++(vlSymsp->__Vcoverage[10160]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_47 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_47)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_47)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_48) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_48)))) {
        ++(vlSymsp->__Vcoverage[10161]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_48 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_48)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_48)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_48) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_48)))) {
        ++(vlSymsp->__Vcoverage[10162]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_48 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_48)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_48)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_49) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_49)))) {
        ++(vlSymsp->__Vcoverage[10163]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_49 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_49)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_49)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_49) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_49)))) {
        ++(vlSymsp->__Vcoverage[10164]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_49 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_49)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_49)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_50) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_50)))) {
        ++(vlSymsp->__Vcoverage[10165]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_50 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_50)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_50)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_50) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_50)))) {
        ++(vlSymsp->__Vcoverage[10166]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_50 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_50)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_50)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_51) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_51)))) {
        ++(vlSymsp->__Vcoverage[10167]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_51 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_51)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_51)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_51) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_51)))) {
        ++(vlSymsp->__Vcoverage[10168]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_51 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_51)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_51)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_52) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_52)))) {
        ++(vlSymsp->__Vcoverage[10169]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_52 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_52)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_52)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_52) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_52)))) {
        ++(vlSymsp->__Vcoverage[10170]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_52 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_52)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_52)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_53) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_53)))) {
        ++(vlSymsp->__Vcoverage[10171]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_53 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_53)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_53)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_53) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_53)))) {
        ++(vlSymsp->__Vcoverage[10172]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_53 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_53)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_53)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_54) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_54)))) {
        ++(vlSymsp->__Vcoverage[10173]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_54 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_54)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_54)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_54) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_54)))) {
        ++(vlSymsp->__Vcoverage[10174]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_54 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_54)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_54)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_55) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_55)))) {
        ++(vlSymsp->__Vcoverage[10175]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_55 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_55)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_55)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_55) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_55)))) {
        ++(vlSymsp->__Vcoverage[10176]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_55 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_55)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_55)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_56) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_56)))) {
        ++(vlSymsp->__Vcoverage[10177]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_56 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_56)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_56)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_56) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_56)))) {
        ++(vlSymsp->__Vcoverage[10178]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_56 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_56)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_56)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_57) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_57)))) {
        ++(vlSymsp->__Vcoverage[10179]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_57 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_57)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_57)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_57) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_57)))) {
        ++(vlSymsp->__Vcoverage[10180]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_57 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_57)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_57)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_58) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_58)))) {
        ++(vlSymsp->__Vcoverage[10181]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_58 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_58)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_58)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_58) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_58)))) {
        ++(vlSymsp->__Vcoverage[10182]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_58 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_58)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_58)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_59) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_59)))) {
        ++(vlSymsp->__Vcoverage[10183]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_59 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_59)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_59)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_59) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_59)))) {
        ++(vlSymsp->__Vcoverage[10184]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_59 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_59)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_59)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_60) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_60)))) {
        ++(vlSymsp->__Vcoverage[10185]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_60 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_60)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_60)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_60) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_60)))) {
        ++(vlSymsp->__Vcoverage[10186]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_60 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_60)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_60)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_61) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_61)))) {
        ++(vlSymsp->__Vcoverage[10187]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_61 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_61)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_61)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_61) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_61)))) {
        ++(vlSymsp->__Vcoverage[10188]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_61 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_61)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_61)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_62) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_62)))) {
        ++(vlSymsp->__Vcoverage[10189]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_62 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_62)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_62)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_62) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_62)))) {
        ++(vlSymsp->__Vcoverage[10190]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_62 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_62)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_62)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_63) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_63)))) {
        ++(vlSymsp->__Vcoverage[10191]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_63 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_63)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_63)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_63) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_63)))) {
        ++(vlSymsp->__Vcoverage[10192]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_63 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT____Vtogcov__reg_lru_63)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_63)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_state)))) {
        ++(vlSymsp->__Vcoverage[12763]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_state 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_state)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_state)))) {
        ++(vlSymsp->__Vcoverage[12764]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_state 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_state)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_state)))) {
        ++(vlSymsp->__Vcoverage[12963]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_state 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_state)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_state)))) {
        ++(vlSymsp->__Vcoverage[12964]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_state 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_state)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)))) {
        ++(vlSymsp->__Vcoverage[13521]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType 
            = ((6U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)))) {
        ++(vlSymsp->__Vcoverage[13522]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType 
            = ((5U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)))) {
        ++(vlSymsp->__Vcoverage[13523]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType 
            = ((3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)));
    }
    __Vtemp5[0U] = 1U;
    __Vtemp5[1U] = 0U;
    __Vtemp5[2U] = 0U;
    __Vtemp6[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                    << 1U);
    __Vtemp6[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                  << 1U));
    __Vtemp6[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                     >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                  << 1U));
    VL_ADD_W(3, __Vtemp7, __Vtemp5, __Vtemp6);
    __Vtemp11[0U] = 1U;
    __Vtemp11[1U] = 0U;
    __Vtemp11[2U] = 0U;
    VL_ADD_W(3, __Vtemp12, __Vtemp11, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q);
    if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vtemp17[0U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                          ? __Vtemp12[0U] : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]);
        __Vtemp17[1U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                          ? __Vtemp12[1U] : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]);
        __Vtemp17[2U] = (1U & ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                ? __Vtemp12[2U] : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]));
    } else {
        __Vtemp17[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
        __Vtemp17[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
        __Vtemp17[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]);
    }
    VL_EXTEND_WW(66,65, __Vtemp18, __Vtemp17);
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
                                << 1U) : __Vtemp7[0U])
                         : __Vtemp18[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? 0U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                         ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                             ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                 >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                              << 1U))
                             : __Vtemp7[1U]) : __Vtemp18[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? 0U : (3U & ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                               ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                   ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                       >> 0x1fU) | 
                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                       << 1U)) : __Vtemp7[2U])
                               : __Vtemp18[2U])));
    }
    vlSelf->io_difftest_commit = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit;
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)))) {
        ++(vlSymsp->__Vcoverage[5616]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr 
            = ((0x1eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)))) {
        ++(vlSymsp->__Vcoverage[5617]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr 
            = ((0x1dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)))) {
        ++(vlSymsp->__Vcoverage[5618]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr 
            = ((0x1bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)))) {
        ++(vlSymsp->__Vcoverage[5619]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr 
            = ((0x17U & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)))) {
        ++(vlSymsp->__Vcoverage[5620]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr 
            = ((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[12772]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType 
            = ((0x3eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[12773]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType 
            = ((0x3dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[12774]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType 
            = ((0x3bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[12775]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType 
            = ((0x37U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[12776]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType 
            = ((0x2fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[12777]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType 
            = ((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[12957]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt 
            = ((0x3eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[12958]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt 
            = ((0x3dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[12959]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt 
            = ((0x3bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[12960]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt 
            = ((0x37U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[12961]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt 
            = ((0x2fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[12962]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt 
            = ((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[13524]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x3eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[13525]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x3dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[13526]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x3bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[13527]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x37U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[13528]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x2fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[13529]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[13960]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType 
            = ((0x3eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[13961]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType 
            = ((0x3dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[13962]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType 
            = ((0x3bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[13963]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType 
            = ((0x37U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[13964]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType 
            = ((0x2fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[13965]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType 
            = ((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_exuType)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[12765]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt 
            = ((0x7eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[12766]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt 
            = ((0x7dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[12767]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt 
            = ((0x7bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[12768]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt 
            = ((0x77U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[12769]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt 
            = ((0x6fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[12770]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt 
            = ((0x5fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    }
    if ((0x40U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[12771]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt 
            = ((0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)) 
               | (0x40U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
               ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2494]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
               ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2495]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
               ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2496]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
               ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2497]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                  ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2498]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                  ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2499]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                  ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2500]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                  ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2501]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                   ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2502]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                   ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2503]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                   ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2504]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                   ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2505]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                    ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2506]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                    ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2507]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                    ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2508]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                    ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2509]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                     ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2510]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                     ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2511]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                     ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2512]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                     ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2513]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                      ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2514]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                      ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2515]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                      ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2516]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                      ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2517]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                       ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2518]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                       ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2519]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                       ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2520]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                       ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2521]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                        ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2522]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                        ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2523]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
                        ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst))) {
        ++(vlSymsp->__Vcoverage[2524]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
          ^ vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[2525]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_inst) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10939]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10940]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10941]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10942]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10943]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10944]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10945]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10946]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10947]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10948]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10949]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10950]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10951]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10952]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10953]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10954]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10955]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10956]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10957]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10958]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10959]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10960]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10961]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10962]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10963]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10964]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10965]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10966]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10967]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10968]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst))) {
        ++(vlSymsp->__Vcoverage[10969]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst 
          ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[10970]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_temp_inst) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13864]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13865]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13866]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13867]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13868]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13869]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13870]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13871]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13872]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13873]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13874]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13875]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13876]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13877]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13878]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13879]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13880]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13881]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13882]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13883]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13884]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13885]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13886]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13887]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13888]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13889]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13890]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13891]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13892]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13893]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[13894]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
          ^ vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[13895]);
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT____Vtogcov__reg_inst) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc)))) {
        ++(vlSymsp->__Vcoverage[2430]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2431]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2432]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2433]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2434]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2435]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2436]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2437]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2438]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2439]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2440]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2441]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2442]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2443]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2444]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2445]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2446]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2447]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2448]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2449]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2450]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2451]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2452]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2453]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2454]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2455]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2456]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2457]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2458]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2459]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2460]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2461]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2462]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2463]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2464]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2465]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2466]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2467]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2468]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2469]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2470]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2471]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2472]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2473]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2474]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2475]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2476]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2477]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2478]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2479]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2480]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2481]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2482]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2483]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2484]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2485]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2486]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2487]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2488]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2489]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2490]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2491]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2492]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2493]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_difftest_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [1U]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1)))) {
        ++(vlSymsp->__Vcoverage[2527]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [1U])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2528]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2529]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2530]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2531]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2532]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2533]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2534]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2535]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2536]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2537]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2538]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2539]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2540]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2541]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2542]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2543]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2544]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2545]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2546]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2547]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2548]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2549]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2550]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2551]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2552]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2553]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2554]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2555]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2556]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2557]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2558]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2559]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2560]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2561]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2562]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2563]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2564]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2565]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2566]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2567]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2568]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2569]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2570]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2571]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2572]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2573]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2574]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2575]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2576]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2577]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2578]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2579]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2580]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2581]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2582]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2583]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2584]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2585]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2586]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2587]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2588]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2589]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2590]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [2U]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2)))) {
        ++(vlSymsp->__Vcoverage[2591]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [2U])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2592]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2593]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2594]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2595]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2596]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2597]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2598]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2599]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2600]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2601]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2602]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2603]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2604]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2605]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2606]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2607]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2608]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
}
