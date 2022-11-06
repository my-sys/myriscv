// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

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

void Vriscv_soc___024root___initial__TOP__1(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___initial__TOP__1\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[88]);
}

void Vriscv_soc___024root___settle__TOP__3(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___settle__TOP__3\n"); );
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
    vlSelf->io_outputValid = (0U == (IData)(vlSelf->riscv_soc__DOT__y));
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

void Vriscv_soc___024root___eval_initial(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_initial\n"); );
    // Body
    Vriscv_soc___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void Vriscv_soc___024root___eval_settle(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_settle\n"); );
    // Body
    Vriscv_soc___024root___settle__TOP__3(vlSelf);
}

void Vriscv_soc___024root___final(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___final\n"); );
}

void Vriscv_soc___024root___ctor_var_reset(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_value1 = VL_RAND_RESET_I(16);
    vlSelf->io_value2 = VL_RAND_RESET_I(16);
    vlSelf->io_loadingValues = VL_RAND_RESET_I(1);
    vlSelf->io_outputGCD = VL_RAND_RESET_I(16);
    vlSelf->io_outputValid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__x = VL_RAND_RESET_I(16);
    vlSelf->riscv_soc__DOT__y = VL_RAND_RESET_I(16);
    vlSelf->riscv_soc__DOT____Vtogcov__clock = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT____Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT____Vtogcov__io_value1 = VL_RAND_RESET_I(16);
    vlSelf->riscv_soc__DOT____Vtogcov__io_value2 = VL_RAND_RESET_I(16);
    vlSelf->riscv_soc__DOT____Vtogcov__io_loadingValues = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT____Vtogcov__io_outputGCD = VL_RAND_RESET_I(16);
    vlSelf->riscv_soc__DOT____Vtogcov__io_outputValid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT____Vtogcov__x = VL_RAND_RESET_I(16);
    vlSelf->riscv_soc__DOT____Vtogcov__y = VL_RAND_RESET_I(16);
}

void Vriscv_soc___024root___configure_coverage(Vriscv_soc___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 36, 17, ".riscv_soc", "v_toggle/riscv_soc", "clock", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 37, 17, ".riscv_soc", "v_toggle/riscv_soc", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 38, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[26]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[27]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[28]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[29]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[30]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[31]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[32]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[33]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 39, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_value2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[34]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 40, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_loadingValues", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[35]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[36]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[37]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[38]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[39]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[40]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[41]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[42]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[43]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[44]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[45]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[46]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[47]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[48]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[49]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[50]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 41, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputGCD[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[51]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 42, 17, ".riscv_soc", "v_toggle/riscv_soc", "io_outputValid", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[52]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[53]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[54]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[55]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[56]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[57]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[58]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[59]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[60]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[61]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[62]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[63]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[64]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[65]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[66]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[67]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 44, 14, ".riscv_soc", "v_toggle/riscv_soc", "x[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[68]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[69]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[70]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[71]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[72]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[73]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[74]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[75]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[76]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[77]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[78]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[79]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[80]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[81]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[82]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[83]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 45, 14, ".riscv_soc", "v_toggle/riscv_soc", "y[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[84]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 51, 10, ".riscv_soc", "v_line/riscv_soc", "if", "51-52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[85]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 51, 11, ".riscv_soc", "v_line/riscv_soc", "else", "54");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[86]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 47, 5, ".riscv_soc", "v_line/riscv_soc", "elsif", "47-49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[87]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 46, 3, ".riscv_soc", "v_line/riscv_soc", "block", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[88]), first, "/home/xingk/ysyx-workbench/npc/build/riscv_soc.v", 60, 5, ".riscv_soc", "v_line/riscv_soc", "block", "60");
}
